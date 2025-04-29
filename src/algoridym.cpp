#define _CRT_SECURE_NO_WARNINGS 
#define PI 3.141592653589793238462643383279
#include <iostream>
#include <string>
#include <math.h>
#include <vector>
#include <map>
#include <algorithm>
//std 간소화
using namespace std;

//cout << 사용
// "cal.h"
int sum(int, int);
int ex0902() 
{
	std::cout << "Hello || " << std::endl;
	printf("2222 Hello !!\n");

    return 0;
}
//구
double f(double r) {

	return 3.14 * r* r;
}
int ex0909_1()
{
	int n = 3;
	char c = '#';
	//입출력 줄바꿈
	cout << c << 5.5 << '-' << n << "Hello" << true << std::endl;
	cout << "n+5=" << n + 5 << '\n';
	cout << f(10.0) << '\n';
	//함수호출
	double y = f(5.0);
	cout << y << '\n';
	return 0;
}
//namespace 설명
namespace KIM {
	float area(float r)
	{
		return 3.14 * r * r;
	}
}
namespace KANG {
	float area(float x)
	{
		return x*10;
	}
}
//cin >> 사용
void ex0909_2() {
	float A = KIM::area(5.0);
	float B = KANG::area(5.0);

	cout << A << '/' << B << '\n';


	int width, height;
	cout << "너비와 높이를 입력 >>";
	cin >> width >> height;
	cout << "너비 = " << width << '\n';
	cout << "높이 = " << height << '\n';
}
//string c("")
void ex0909_3() {
	int a = 100;
	//string song ="falling in love with you";
	string song("falling in love with you");
    string simbol("!!!!!");

	cout << song.find("love")<<'\n';
	cout << song+simbol << '\n';
}
//string if else 사용
void ex0909_4() {
	string singer;
	getline(cin, singer);

	if (singer == "yunha") cout << "****************" << '\n';
	else cout << "---------------"<<'\n';
}

int sum(int a, int b) {
	int res = 0;
	for (int k = a; k <= b; k++) {
		res += k;
	}
	return res;
}

int ex0909() {
		int n = 0;
		cout << "끝수를 입력하세요 >> " ;
		cin >> n;


		if (n <= 0) {
			cout << "양수를 입력하세요!" << '\n';
			return 0;
		}
		cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다." << '\n';
		return 0;
	}
int ex0912_1() {

	double a[5]; 
	cout << "5개의 실수를 입력 하세요"<<'\n';
	for (int k = 0; k <= 4; k++) {
		cin >> a[k];
	}
	double a_max = a[0];
	for (int k = 0; k <= 4; k++) {
		cout << a[k]<<'\n';
		if (a_max < a[k])
			a_max = a[k];
	}
	cout << a_max<<'\n';
	return 0;
}
double biggest(double* a,int N) {
	double a_max = *a;
	for (int k = 0; k <= N; k++) {if (a_max < a[k]) a_max = *(a+k);}
	return a_max;
}
void ex0912_2() {
    double a[7];
	cout << "7개의 실수를 입력 하세요" << '\n';
	for (int k = 0; k < 7; k++) cin >> a[k];
	cout << biggest(a,7) << '\n';
}
void ex0912() {
	int K[3] = {7, 8, 9};
	int M[3] = { 6, 5, 4 };
	int* p = K; //int* 편함
	cout << p << " " << p[0] << " " << p[1] << " " << p[2] << '\n';
	cout << *p << " " << *p + 1 << " "<< *p+2 << '\n'; //p[0] == *p
	p = &K[2];
	cout << *p << " " << *p-1 << " " << *p-2 << " " <<'\n'; 
	cout << p << " " << p[0] << " " << p[-1] << " " << p[-2] << '\n';
}

void ex0919_1() {
	int K[3] = { 7,8,9 };
	int M[4] = { 6,5,4,0 };
	int N[2] = { 1,2 };

	int* p;
	int* q[3];

	q[0] = K;   //array pointer =  array(상수 K array adress)
	q[1] = M;
	q[2] = N;

	cout << *q[0] << *q[0]+1 << *q[0] + 2 << '\n';  //*(q[0] + i) = q[0][i]
	cout << q[0][0] << q[0][1] << q[0][2]  << '\n';

	cout << *q[1] << *(q[1] + 1) << *(q[1] + 2) << *(q[1] + 3) << '\n';
	cout << q[1][0] << q[1][1] << q[1][2] << q[1][3] << '\n';
	

	cout << *q[2] << *q[2] + 1 << '\n';
	cout << q[2][0] << q[2][1] << '\n';
}
void pfunc_1_(int* a, int* b)
{
	cout << *a << " " << *b << endl;
	*a = 30; *b = 40;
}

void ex0919_2()//pointer
{
	int a = 10, b = 20;
	pfunc_1_(&a, &b);
	cout << a << " " << b << endl;
}
void pfunc_2_(int& c, int& d)//&참조
{
	cout << c << " " << d << endl;
	c = 30; d = 40;
}
void ex0919_3()
{
	int a = 10, b = 20;
	pfunc_2_(a, b);
	cout << a << " " << b << endl;
}

void ex0919_4() {
	int annnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnnn = 10;
	int b[5] = { 10,20,30,40,50 };
	
	int& c = b[3];

	cout << c << '\n';

}



void average(int a[], int size, float& avg) {
	float sum=0;
	for (int n = 0; n < size; n++)
		sum += a[n];

	avg = sum / size;
}
void ex0919() {
	int x[] = { 0,1,2,3,4,5 };
    float avg;
	average(x,6,avg);
    cout << "평균은 " << avg << endl;

}

bool bigger(int a, int b, int& big) {
	if (a == b)
		return true;

	else
		if (a > b)
			big = a;
		else
			big = b;
		return false;
}
void ex0923_1() {
	int x, y, big;
	bool b;
	cout << "두 정수를 입력하세요>> ";
	cin >> x >> y;
	b = bigger(x, y, big);
	if (b)
		cout << "same" << endl;
	else
		cout << "큰 수는 " << big << endl;
}
//디폴트인자는 오른쪽부터 채워나가야한다
int sum3(int a, int b=200, int c = 100) {
	return a + b + c;
}
void ex0923_2() {
	int x = 10, y = 20, z = 30;
	int w=sum3(x, y, z);
	int u = sum3(x, y);
	int v = sum3(x);
	cout << w << "  " << u << "  " << v << '\n';
}

void f(char c = ' ', int line = 1) {
	for (int i = 0; i < line; i++) {
		for (int j = 0; j < 10; j++) {
			cout << c;
		}
		cout << '\n';
	}
}
void ex0923_3() {
	f(); // 한줄에 빈칸을 10개 출력한다.
	f('%'); // 한 줄에 '%'를 10개 출력한다.
	f('@', 5); // 5 줄에 '@' 문자를 10개 출력한다
}
//함수이름이 같아도 인자타입,개수가 다르면 구분한다 : 펑션오버로딩 
int ssum(int a, int b, int c) {
	return a + b + c;
}
double ssum(double a, double b,double c) {
	return a + b+c;
}
void ex0923_4() {
	cout << ssum(2, 5, 33) << '\n';
	cout << ssum(1.8, 3.5,6.4) << '\n';
}
int big(int a, int b) {
	int t=(a > b) ? a : b;
	return (t < 100) ? t : 100;
}
int big(int l, int m, int n) {
	int t = (l > m) ? l : m;
	return (t < n) ? t : n;
}


void ex0923_5() {
	int x = big(3, 5); // 3과 5중큰값 5는 최대값 100보다 작으므로, 5 리턴
	int y = big(300, 60); // 300과 60중 큰 값 300이 최대값 100보다 크므로, 100 리턴
	int z = big(30, 60, 50); // 30과 60 중 큰 값 60이 최대값 50보다 크므로, 50 리턴
	cout << x << ' ' << y << ' ' << z << endl;
}
//myswap 함수 중복을 한번에 표현
//중괄호 바깥에선 T 사용할 수 없다
template <class T> void myswap(T& a, T& b) {
	T tmp;
	tmp = a;
	a = b;
	b = tmp;
}

void ex0926_1() {
	int a = 4, b = 5;
	myswap(a, b); // myswap(int& a, int& b) 호출
	cout << a << '\t' << b << endl;
	double c = 0.3, d = 12.5;
	myswap(c, d); // myswap(double& a, double& b) 호출
	cout << c << '\t' << d << endl;
}

template <class T1,class T2> double add(T1& a, T2 num) {
	double sum = 0;
	for (int n = 0; n < num; n++)
		sum += a[n];
	return sum;
}

void ex0926_2() {
	int x[] = { 1,2,3,4,5 };
	double d[] = { 1.2, 2.3, 3.4, 4.5, 5.6, 6.7 };
	float y[] = { 1,2,3,4,5,6 };
	cout << "sum of x[] = " << add(x,5) << endl; // 배열 x와 원소 5개의 합을 계산
	cout << "sum of d[] = " << add(d,6) << endl; // 배열 d와 원소 6개의 합을 계산
	cout << "sum of y[] = " << add(y, 6) << endl;
}
//class 선언
//class 내 함수 선언
class Circle {
public:
	int radius;
	double getArea() {
		return 3.14 * radius * radius;
	}
};
//class 함수 선언
//double Circle::getArea() {
//	return 3.14 * radius * radius;
//}
//class 객체 선언
void ex0926_3() { 
	Circle A,B,C; 
	A.radius = 10;
	cout << A.getArea() << '\n';

	//class 포인트 변수 선언
	Circle* p = &A;
	cout << p->radius << '\n';
	cout << p->getArea() << '\n';

 }
class Rectangle {
public:
	int width;
	int height;
	int getArea();
};
int Rectangle::getArea() {
	return width * height;
}
void ex0926_4() {
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}
//private 클래스 내 변수를 객체로 접근불가능
class Rectangle2 {
private:
	int width;
	int height;

public:
	int getArea() {
		return width * height;	
	}
	bool setheight(int input) {
		if (input < 0) return false;
		else {
			height = input;
			return true;
		}
	}
	bool setwidth(int input) {
		if (input < 0) return false;
		else { 
			width = input;
			return true;
		}
	}
	int getwidth() { return width; }
	int getheight() { return height; }

};
void ex0926_5() {

	Rectangle2 rect;
	if (rect.setwidth(3)==0)
		cout << "width error" << '\n';
	if (rect.setheight(5) == 0)
		cout << "height error" << '\n';
	cout << "사각형의 면적은 " << rect.getArea() << endl;
	cout << "사각형의 가로는 " << rect.getwidth() << endl;
	cout << "사각형의 세로는 " << rect.getheight() << endl;

}
class Circle2 {
public:
	int radius;
	Circle2();  
	Circle2(int r);
	//생성자는 클래스 객체 선언시 한번씩 실행
	~Circle2();
	double getArea();
};
Circle2::Circle2() {
    radius = 1;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
Circle2::~Circle2() {
	cout << "반지름 " << radius << " 원 생성" << endl;
}

Circle2::Circle2(int r) {
    radius = r;
	cout << "반지름 " << radius << " 원 생성" << endl;
}
double Circle2 :: getArea() {
	return 3.14 * radius * radius;
}
void ex0930_1(){
	Circle2 donut;
	double area = donut.getArea();
	cout << "dodut 면적은" << area << '\n';

	Circle2 pizza(30);
	area = pizza.getArea();
	cout << "pizza 면적은" << area << '\n';
}
void func0930()
{
	Circle2 donut;
	double area = donut.getArea();
	cout << "dodut 면적은" << area << '\n';
}
void ex0930_2() {
	func0930();

	Circle2 pizza(30);
	double area = pizza.getArea();
	cout << "pizza 면적은" << area << '\n';

}
class Rectangle3 {
public:
	int width, height;
	Rectangle3() {
		width = 1;
		height = 1;
	}
	Rectangle3(int a) {
		width = height =a;
	}
	Rectangle3(int a, int b) {
		width = a;
		height = b;
	}
    bool isSquare() {
		if (width == height)
			return true;
		else
			return false;
	}
	~Rectangle3() {
		//width = height = 0;
		cout << "소멸 " << height <<  " " << width << '\n';
	}
};
void ex0930_3() {
	Rectangle3 rect1;
	Rectangle3 rect2(3, 5);
	Rectangle3 rect3(3);
	if (rect1.isSquare()) 
		cout << "rect1은 정사각형이다." << endl;
	if (rect2.isSquare()) 
		cout << "rect2는 정사각형이다." << endl;
	if (rect3.isSquare()) 
		cout << "rect3는 정사각형이다." << endl;
}
class Oval {
public:
	int width, height;
	void set(int a,int b) {
		width = a;
		height = b;
	}
	void show(){
		cout << width << " " << height << '\n';
	}
	int getWidth() {
		return width;
	}
	int getHeight() {
		return height;
	}
	double getArea() {
		return 3.14 * width * height;
	}
	Oval() {
		width = height = 1;
	}
	Oval(int w, int h) {
		width = w;
		height = h;
	}
	~Oval() {
		cout << "Oval 소멸 : width = " << width << " , height = " << height << "\n";
	}
};
void ex0930_4() {
	Oval a, b(3, 4);
	a.set(10, 20);
	a.show();
	cout << b.getWidth() << ", " << b.getHeight() << endl;
}
inline bool iseven(int B) {
	if (B % 2) return false; else return true;
}
void ex0930_5() {
	int A = 11;
	if (iseven(A)) cout << A << "는 짝수다";
	else cout << A << "는 홀수다";
}


class Ram {
	char mem[100 * 1024]; // 100KB 메모리
	int size;
public:
	Ram() {
	    size = 100 * 1024;
		for(int i=0; i<size; i++)
			mem[size] = NULL;
	
	} // mem을 0으로 초기화하고 size를 100*1024로 초기화
	~Ram() {
		cout << "메모리 제거됨" << '\n';
          }// "메모리 제거됨" 문자열 출력
	int read(int address) {
		return  mem[address];
	
	} // address 주소의 메모리를 읽어 리턴
	void write(int address, char value) {// address 주소에 value 저장
		if (size < address) {
			cout << "address error" << '\n';
		}
		else mem[address] = value;
	}
	// 주소가 범위를 벗어나는 오류 발생하면 에러메시지 출력함.
};

//void ex1007_1() {
//	Calculator calc; // calc 객체 생성
//	calc.run(); // 계산기 시작
//}

void ex1007_2() {
	Ram ram;
	ram.write(100, 20); // 100 번지에 20 저장
	ram.write(101, 30); // 101 번지에 30 저장
	char res = ram.read(100) + ram.read(101); // 20 + 30 = 50
	ram.write(102, res); // 102 번지에 50 저장
	cout << "102 번지의 값 = " << (int)ram.read(102) << endl; // 102 번지 메모리 값 출력
}

class Person {
public:
	double money; // 개인 소유의 돈
	void addMoney(int money) {
		this->money += money;
	}
	//전역변수
	static int sharedMoney; // 공금
	//전역함수
	static void addShared(int n) {
		sharedMoney += n;
	}
};
// static 변수 생성. 전역 공간에 생성b
int Person::sharedMoney = 10; // 10으로 초기화
// main() 함수
void ex1007() {
	Person han, lee;
	han.money = 100; // han의 개인 돈=100
	han.sharedMoney = 200; // static 멤버 접근, 공금=200
	lee.money = 150; // lee의 개인 돈=150
	lee.addMoney(200); // lee의 개인 돈=350
	lee.addShared(200); // static 멤버 접근, 공금=400
	cout << han.money << ' '<<lee.money << '\n';
	cout << han.sharedMoney << ' '<< lee.sharedMoney <<'\n';
}
class Math {
public:
	static int abs(int a) { return a > 0 ? a : -a; }
	static int max(int a, int b) { return (a > b) ? a : b; }
	static int min(int a, int b) { return (a > b) ? b : a; }
};
void ex1010_1() {
	//객체 X
	cout << Math::abs(-5) << endl;
	cout << Math::max(10, 8) << endl;
	cout << Math::min(-3, -8) << endl;
	//객체 o
	Math M;
	cout << M.abs(-5) << endl;
	cout << M.max(10, 8) << endl;
	cout << M.min(-3, -8) << endl;
}
class Person2{
public:
	int money = 0;
    string name;
	//클래스 정적변수 선언
	static int sharedmoney;

	//매개변수없음 - 디폴트생성자
	Person2() {
		money = 0;
	}
	//생성자
	Person2(string name_in) {
		money = 0;
		name = name_in;
	}
	//소멸자
	~Person2() {
		cout << name << ' ' << money << '\n';
	}

	void addMoney(int money_in) {
		money += money_in;
	}	
	static void addShared(int sharedmoney_in) {
		sharedmoney += sharedmoney_in;
	}
};
//클래스 정적변수 초기화
int Person2::sharedmoney = 0;

void ex1010_2() {
	Person2 A("KANG"), B("KIM");
	// 3월
	A.addMoney(100);
	A.addShared(5);
	B.addMoney(200);
	B.addShared(5);
	// 4월
	A.addMoney(100);
	A.addShared(5);
	B.addMoney(200);
	B.addShared(5);
	cout << "공금 = " << Person2::sharedmoney << endl;
	Person2::addShared(100);
	cout << "공금 = " << Person2::sharedmoney << endl;
}
void ex1010_3() {
	Person2 A("KANG");
	A.addMoney(100);
	A.addShared(5);

	Person2* p = &A;

	cout << p->money << A.money << (*p).money << '\n';
}
void ex1010() {

	Circle circleArray[3];

	circleArray[0].radius = 100;
	circleArray[1].radius = 200;
	circleArray[2].radius = 300;

	Circle* p = circleArray;
	cout << (p+2)->radius << '\n';

	Circle2 carray[3] = { Circle2(20), Circle2(10), Circle2() };
	Circle2* q;
	q = carray;
	cout << q[0].radius << '\n';


	q = &carray[0];
	cout << q[1].radius << '\n';
}
class Color {
	int red, green, blue;
public:
	Color() { red = green = blue = 0; }
	Color(int r, int g, int b) { red = r; green = g; blue = b; }
	void setColor(int r, int g, int b) { red = r; green = g; blue = b; }
	void show() { cout << red << ' ' << green << ' ' << blue << endl; }
};
void ex1014_1() {
	Color screenColor(255, 0, 0); // 빨간색의 screenColor 객체 생성
	Color* p; // Color 타입의 포인터 변수 p 선언
	p = &screenColor; // (1) p가 screenColor의 주소를 가지도록 코드 작성
	p->show(); // (2) p와 show()를 이용하여 screenColor 색 출력
	Color colors[3]; // (3) Color의 일차원 배열 colors 선언. 원소는 3개
	p = colors; // (4) p가 colors 배열을 가리키도록 코드 작성
	;// (5) p와 setColor()를 이용하여 colors[0], colors[1], colors[2]가
	// 각각 빨강, 초록, 파랑색을 가지도록 코드 작성
	p[0].setColor(255, 0, 0);
	p[1].setColor(0, 255, 0);
	p[2].setColor(0, 0, 255);
	// (6) p와 show()를 이용하여 colors 배열의 모든 객체의 색 출력. for 문 이용
	for (int i = 0; i < 3; i++)
		p[i].show();
}
void ex1014_2() {
	int A[5];
	A[0] = 100;	A[1] = 200; A[2] = 300; A[3] = 400; A[4] = 500;
   for (int i = 0; i < 5; i++)
		printf("%d \n", A[i]);
}
void ex1014_3(int number) {
	int* A= (int*)malloc(number*sizeof(int));
	A[0] = 100; A[1] = 200; A[2] = 300; A[3] = 400; A[4] = 500;
	for (int i = 0; i < number; i++)
		printf("%d\n", A[i]);
	free(A);
}
void ex1014_4(int number) {
	int* A = new int[number];
	A[0] = 100; A[1] = 200; A[2] = 300; A[3] = 400; A[4] = 500;
	for (int i = 0; i < number; i++)
		printf("%d\n", A[i]);
	delete[] A;
}
void ex1014_5() {
	ex1014_2();
	ex1014_3(5);
	ex1014_4(5);
}
void ex1014_6() {
	Circle2 pizza,*p, *q;
	p = new Circle2; q = new Circle2(10);
	cout << p->getArea() << '\n';
	cout << q->getArea() << '\n';

	delete p, q;
}
void ex1014_7() {
    Circle2*p = new Circle2[3];
	for(int i=0;i<3; i++)
	cout<<p[i].getArea()<< '\n';

	Circle2* q = p;
	for (int i = 0; i < 3; i++)
		cout << q[i].getArea() << '\n';
	cout << "---------------------------------" << '\n';
	for (int i = 0; i < 3; i++)
		cout << (* (q + i)).getArea() << '\n';

	delete[] p,q;
}
// -----------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------------
class PERSON {
	string name;
public:
	PERSON() { name = ""; }
	PERSON(string name) { this->name = name; }
	string getName() { return name; }
	void setName(string name) { this->name = name; }
};
class Family {
	string name;
	PERSON* p; // PERSON 배열 포인터
	int size; // PERSON 배열의 크기. 가족 구성원 수
public:
	Family(string name, int size); // size 개수만큼 PERSON 배열 동적 생성
	Family(string name_in);
	void setName(int index, string name);
	void show(); // 모든 가족 구성원 출력
	~Family() {
		delete[] p;
	}
};
Family::Family(string name_in) {
	name = name_in;
	size = 4;
	p = new PERSON[size];
}
Family::Family(string name_in,int size) {
	name = name_in;
	p = new PERSON[size];
}
void Family::setName(int index, string name) {
	p[index].setName(name);
}
void Family::show() {
	for (int i = 0; i < size; i++)
		cout << p[i].getName() << '\n';
}

void ex1017_1() {
	Family simpson("Simpson", 4); // 3명으로 구성된 Simpson 가족
	simpson.setName(0, "Mr. Simpson");
	simpson.setName(1, "Mrs. Simpson");
	simpson.setName(2, "Bart Simpson");
	simpson.setName(3, "Baby Simpson");
	simpson.show();
}

class Circle3 {
private:
	int radius;
public:
	Circle3();
	Circle3(int r);
	~Circle3();
	double getArea() { return 3.14 * radius * radius; }
	int getRadius() { return radius; }
	void setRadius(int radius) {
		this->radius = radius;
	}
};
	Circle3::Circle3() {
		radius = 1;
		cout << "생성자 실행 radius = " << radius << endl;
	}
	Circle3::Circle3(int radius) {
		this->radius = radius;
		cout << "생성자 실행 radius = " << radius << endl;
	}
	Circle3::~Circle3() {
		cout << "소멸자 실행 radius = " << radius << endl;
	}

	void increase(Circle3 c) {
		int r = c.getRadius();
		c.setRadius(r + 1);
	}
	void increase(Circle3* c) {
		int r = (*c).getRadius();
		(*c).setRadius(r + 1);
	}
	void increaseref(Circle3& c) {
		int r = c.getRadius();
		c.setRadius(r + 1);
	}

	void ex1028_1() {
		Circle3 waffle(30);
		increase(waffle);
		cout << waffle.getRadius() << endl;
	}
	void ex1028_2() {
	    Circle3 waffle(30);
		increase(&waffle);
		cout << waffle.getRadius() << endl;
		}
	void ex1028_3() {
	    Circle3 waffle(30);
		increaseref(waffle);
		cout << waffle.getRadius() << endl;	
	}
	void Swap(Circle3& A, Circle3& B){
		Circle3 tmp = A;
		A = B;
		B = tmp;
	}
	void ex1028_4() {
		Circle3 A(30), B(10);
		cout << A.getRadius() << "  " << B.getRadius() << '\n';
		Swap(A, B);
		cout << A.getRadius() << "  " << B.getRadius() << '\n';
	}

	void readRadius(Circle3& cir) {
		cout << "input :  ";
		int tmp;
		cin >> tmp;

		cir.setRadius(tmp);
	}
	void ex1028_5(){
	
		Circle3 donut;
		readRadius(donut);
		cout << "donut의 면적 = " << donut.getArea() << endl;
	}
	void ex1031_1() { //얕은 복사(메모리 공유)
		int* A= new int[10];
		int* B;
		
		for (int N = 0; N < 10; N++)
			A[N] = N * 10;

		B = A;
		delete[] A;
	}
	void ex1031_2() { //깊은 복사
		int* A = new int[10];
		int* B;

		for (int N = 0; N < 10; N++)
			A[N] = N * 10;

		B = new int[10];

		for (int N = 0; N < 10; N++)
			B[N] = A[N];
		delete[] A;
	}
	class Accumulator {
		int value;
	public:
		Accumulator(int value);
		Accumulator& add(int n);
		int get();
	};
	Accumulator::Accumulator(int v)
	{
		this ->value = v;
	}
	Accumulator& Accumulator::add(int v)
	{
		this ->value += v;
		return *this;
	}
	int Accumulator::get()
	{
		return value;
	}
void ex1031_3() {
	Accumulator acc(10);
	acc.add(5).add(10).add(20);
	cout << acc.get() << '\n';
}
class Book {
	char* title; // 제목 문자열
	int price; // 가격

public:

	Book(char* title, int price);
	Book(Book& obj);
	~Book();
	void set(char* title, int price);
	void show() { cout << title << ' ' << price << "원" << endl; }

	void operator+=(int value) {
		this->price = this->price + value;


	}
	void operator-=(int value) {
		this->price = this->price - value;


	}
	bool operator!=(int price) {
		if (this->price != price)
			return false;
		else
			return true;

	}
	//외부함수헤더 앞에 friend만 붙이면 프라이빗 멤버변수 접근가능
	friend bool operator==(Book& A, int value);
#if 0
	bool operator==(int value) {
		if (this->price == value)
			return true;
		else
			return false;
	}
#endif
};
bool operator==(Book& A,int value) {
	if (A.price == value)
		return true;
	else
		return false;
}
Book::Book(char* title, int price) {
	this->title = new char[strlen(title)+1];
	strcpy(this->title, title);
	this->price = price;
}
Book::~Book() {
	delete[] this->title;
	cout << "소멸" << '\n';
}

void Book::set(char* title, int price) {
	delete[] this->title;
	this->title = new char[strlen(title) + 1];
	strcpy(this->title, title);
	this->price = price;
}
Book::Book(Book& obj) {
	this->set(obj.title, obj.price);
}

void ex1104_1() {
	Book cpp((char*)"명품C++", 10000);
	Book java(cpp);
	java.set((char*)"명품자바", 12000);
	cpp.show();
	java.show();
}

class Book2 {
	char *title;
	int price; 
public:
	Book2(char* title, int price);
	void set(char* title, int price);
	void show();
};
Book2::Book2(char* title, int price) {
	strcpy(this->title, title);
	this->price = price;
}
void Book2::set(char* title, int price) {
	
}
void Book2::show() { 
	cout << title << ' ' << price << "원" << endl;
}
class Rect {
	int width, height;
public:
	Rect(int width, int height) {
		this->width = width;
		this->height = height;
	}
	bool equals(Rect r, Rect s);

};
bool Rect::equals(Rect r, Rect s) {
	if (r.width == s.width && r.height == s.height)
		return true;
	else
		return false;

}
void ex1104_2() {
	Rect a(3, 4), b(5, 6);
	if (a.equals(a,b))
		cout << "same"<<'\n';
	else
		cout << "differ"<<'\n';
}

class Rect2 { //멤버함수인데 외부선언시 지정연산자를 사용하지않으면 Friend
	int width, height;
public:
	Rect2(int width, int height) {
		this->width = width;
		this->height = height;
	}
	friend bool equals(Rect2 r, Rect2 s);
};

bool equals(Rect2 a,Rect2 b) {
	if (a.width == b.width && a.height == b.height)
		return true;
	else
		return false;

}
void ex1104_3(){
	Rect2 a(2, 3), b(3, 4);
	if(equals(a,b))
		cout << "same" << '\n';
	else
		cout << "differ" << '\n';
}

class Power {
	int kick;
	int punch;
public:
	Power() {
		kick = 0; punch = 0;
	}
	Power(int kick, int punch) {
		this->kick = kick;
		this->punch = punch;
	}
	Power operator+(Power input) {
		Power tmp;
		tmp.kick = this->kick + input.kick;
		tmp.punch = this->punch + input.punch;
		return tmp;
	}
	Power operator-(Power input) {
		Power tmp;
		tmp.kick = this->kick - input.kick;
		tmp.punch = this->punch - input.punch;
		return tmp;
	}
	bool operator==(Power input) {
		
		if (this->kick == input.kick && this->punch == input.punch)
			return true;
		else
			return false;
	
	}
	void show() {
		cout << "kick = " << kick << "punch = " << punch << "\n";
	}
};
void ex1104_4() {
	Power a(3, 5), b(4, 6), c, d;
	bool e;
	c = a + b;
	d = a - b;
	e = a == b;
	a.show();
	b.show();
	c.show();
	d.show();
	if(e)
	cout << "same" << '\n';
	else
	cout << "differ" << '\n';
}


class Complex {
	float re, im,mag,angle;
public:
	Complex(float re = 0, float im = 0) {
		this->re = re; this->im = im;
	}
	Complex operator+(Complex in) {
		Complex tmp;
		tmp.re = this->re + in.re;
		tmp.im = this->im + in.im;
		return tmp;
	}
	Complex operator-(Complex in) {
		Complex tmp;
		tmp.re = this->re - in.re;
		tmp.im = this->im - in.im;
		return tmp;
	}
	Complex operator*(Complex A) {
		Complex tmp;
		A.mag = getmag(*this) * getmag(A);
		A.angle = getangle(*this) + getangle(A);
	    convert2Car(A);
		return tmp;
		
	}
	Complex operator/(Complex in) {
		Complex tmp;
		tmp.re = this->re - in.re;
		tmp.im = this->im - in.im;
		return tmp;
	}
	void show()
	{
		cout.precision(5);
		if (im >= 0)
			cout << re << " + j" << im << endl;
		else
			cout << re << " - j" << -im << endl;
	}
#if 0

	double getmag(Complex& A) {
		 return sqrt(A.re * A.re + A.im * A.im);
	}
	double getangle(Complex& A) {
		if (A.re == 0 && A.im == 0) return 0.0;
		else if (A.re == 0 && A.im == 0) return PI / 2;
		else if (A.re == 0 && A.im == 0) return  -PI / 2;
		else return  atan2(A.im ,A.re);
	}
	void convert2Car(Complex &A) {
		A.re = A.mag * cos(angle);
		A.im = A.mag * sin(angle);
	}

#endif
	friend double getmag(Complex& A);
	friend double getangle(Complex& A);
	friend void convert2Car(Complex& A);
};


double getmag(Complex& A) {
	return sqrt(A.re * A.re + A.im * A.im);
}
double getangle(Complex& A) {
	if (A.re == 0 && A.im == 0) return 0.0;
	else if (A.re == 0 && A.im == 0) return PI / 2;
	else if (A.re == 0 && A.im == 0) return  -PI / 2;
	else return  atan2(A.im, A.re);
}
void convert2Car(Complex& A) {
	A.re = A.mag * cos(A.angle);
	A.im = A.mag * sin(A.angle);
}
void ex1107_1(){
	Complex a(2, 3), b(4, -5), c, d, e, f;
	c = a + b;
	d = a - b;
	e = a * b;
	f = a / b;

	a.show();
	b.show();
	c.show();
	d.show();
}
void ex1107_2() {
	Book a((char*)"청춘", 20000), b((char*)"미래", 30000);
	a += 5000; // 책 a의 가격 500원 증가
	b -= 5000; // 책 b의 가격 500원 감소
	a.show();
	b.show();

}
class Power2 {
	int kick;
	int punch;
public:
	Power2() {
		kick = 0; punch = 0;
	}
	Power2(int kick, int punch) {
		this->kick = kick;
		this->punch = punch;
	}
	
	void show() {
		cout << "kick = " << kick << "punch = " << punch << "\n";
	}

friend Power2 operator+(Power2 a, Power2 b);
friend Power2 operator-(Power2 a, Power2 b);

};

Power2 operator+(Power2 a, Power2 b) {
	Power2 tmp;
	tmp.kick = a.kick + b.kick;
	tmp.punch = a.punch + b.punch;
	return tmp;
}
Power2 operator-(Power2 a, Power2 b) {
	Power2 tmp;
	tmp.kick = a.kick - b.kick;
	tmp.punch = a.punch - b.punch;
	return tmp;
}

void ex1107_3() {
	Power2 a(2, 3), b(4, -5), c, d, e, f;
	c = a + b;
	d = a - b;
	/*e = a * b;
	f = a / b;*/

	a.show();
	b.show();
	//c.show();
	//d.show();

}
void ex1111_1() {
	Book a((char*)"청춘", 30000), b((char*)"미래", 30000);
	
	if (a == 30000) 
		cout << "정가 30000원" << endl;
	else
		cout << "정가 30000원" << endl;

}
void ex1111_2() {


	Book book((char*)"벼룩시장", 0); // 가격은 0
	if (book != 0) cout << "공짜다" << endl;
	

}
class Point {
	int x, y; //한 점 (x,y) 좌표값
public:
	void set(int x, int y) { this->x = x; this->y = y; }
	void showPoint() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	void showColorPoint() {
		cout << "x : " << this->x << "    " << "y : " << this->y << '\n';
	}
};
//부모클래스의 프라이빗 멤버는 상속클래스 멤버변수로 접근불가능
class ColorPoint : public Point {
	string color;
public:
	void setColor(string color) {
		cout << color << ":";
		showPoint();
	}

};
void ex1111_3() { //상속 upcasting
	ColorPoint cp;
	cp.set(3, 4);
	cp.setColor("RED");
	cp.showColorPoint();

	ColorPoint* pDer = &cp;
	pDer->set(30, 40);/*(*pDer).set(30, 40);*/
	pDer->setColor("BLUE");
	pDer->showColorPoint();

	Point* pBase = pDer;
	pBase->set(300, 400);
	pBase->showColorPoint();

}

void ex1111_4() { //down-scsting
	ColorPoint cp;
	ColorPoint* pDer;
	Point* pBase = &cp;

	pBase->set(3, 4);
	pBase->showPoint();

	pDer = (ColorPoint*)pBase;

	pDer->set(30, 40);
	pDer->setColor("BLUE");
	pDer->showColorPoint();
	pDer->showPoint();
}

class Circle4 {
private:
	int radius;
	string name;
public:
	Circle4() { radius = 1; }
	Circle4(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
	int getradius() {
		return radius;
	}
	void setradius(int radius, string name) {
		this->radius = radius;
		this->name = name;
	}
	string getname() {
		return this->name;
	}
};
class NamedCircle : public Circle4{
	string name;
public:
	NamedCircle() {
		setradius(1, "");
	}
	NamedCircle(int radius, string name) {
		setradius(radius,name);
	}
	void show() { //반지름이 3인 와플
		cout << "반지름이 " << getradius() << "인 " << name << '\n';
	}
	void sin() { //반지름이 3인 와플
		int tmp;
		for (int i = 0; i < 5; i++) {
			cin >> i >> tmp;
		
		}
	}
};
NamedCircle nc[5];
void ex1111_5(NamedCircle* namedcircle,int size) {
	NamedCircle  waffle(3, "waffle"); // 반지름이 3이고 이름이 waffle인 원
	waffle.show();
}
void FLNC(NamedCircle* nc){
	int r_max = nc[0].getradius();
	int index_max = 0;
	for (int i = 1; i < 5; i++) {
		if (r_max < nc[i].getradius()) {
			r_max = nc[i].getradius();
			index_max = i;
		}
	}
	cout << "가장 면적이 큰 피자는 반지름이 " << r_max << "인 " << nc[index_max].getname() <<"입니다" << '\n';
}

void ex1114() {
	NamedCircle pizza[5];
	string name;
	int radius;
	int n;
	cout << "5개의 정수 반지름과 원의 이름을 입력하세요"<<'\n';
	for (n = 0; n < 5; n++) {
		cout << n+1 << "<<";
		cin >> radius;
		cin	>> name;
		pizza[n].setradius(radius, name);
	}

	FLNC(pizza);
}
int index = 0;
int tmp = 0;
class BaseArray {
private:
	int capacity; // 동적 할당된 메모리 용량
	int* mem; // 정수 배열을 만들기 위한 메모리 포인터
protected:
	void put(int index, int val) { mem[index] = val; }
	int get(int index) { return mem[index]; }
	int getCapacity() { return capacity; }
	void makeque(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
public:
	BaseArray(int capacity = 100) {
		this->capacity = capacity; mem = new int[capacity];
	}
	~BaseArray() { delete[] mem; }
};
class MyQueue : public BaseArray{
public:
	MyQueue(int cap) {
		makeque(cap);
	}
	void enqueue(int n) {
		put(index, n);
		index++;
	}
	int capacity() {
		return getCapacity();
	}
	int length() {
		return index;
	}
	int dequeue() {
		int value = 0;
		tmp = get(0);
		for (int i = 0; i < 4; i++) {
		
			put(i, get(i + 1));
	
		}
		return tmp;
	}
};
void ex1114_2() {
	MyQueue mQ(100);
	int n=0;

	cout << "큐에 삽입할 5개의 정수를 입력하라>> ";
	for (int i = 0; i < 5; i++) {
		cin >> n;
		mQ.enqueue(n*10); // 큐에 삽입
	}
	cout << "큐의 용량 : " << mQ.capacity() << ", 큐의 크기 : " << mQ.length() << endl;


	cout << "큐의 원소를 순서대로 제거하여 출력한다>> ";
	while (mQ.length() != 0) {
		cout << mQ.dequeue() << ' '; // 큐에서 제거하여 출력
	}
	cout << endl << "큐의 현재 크기 : " << mQ.length() << endl;
}
class AA {
public:
	AA() {
		cout << "constructor AA" << '\n';
	}
	~AA() {
		cout << "destructor AA" << '\n';
	}
};

class BB: public AA {
public:
	BB() {
		cout << "constructor BB" << '\n';
	}
	~BB() {
		cout << "destructor BB" << '\n';
	}
};

class CC : public BB {
public:
	CC() {
		cout << "ConstruCCtor CC" << '\n';
	}
	~CC() {
		cout << "destruCCtor CC" << '\n';
	}
};

class AAA {
public:
	AAA() {
		cout << "constructor AAA" << '\n';
	}
	AAA(int x) {
		cout << "constructor AAA(int x)" << '\n';
	}
	~AAA() {
		cout << "destructor AAA" << '\n';
	}
};

class BBB : public AAA {
public:
	BBB() {
		cout << "constructor BBB" << '\n';
	}
	BBB(int x) {
		cout << "constructor BBB(int x)" << '\n';
	}
	~BBB() {
		cout << "destructor BBB" << '\n';
	}
};

class CCC : public BBB {
public:
	CCC() {
		cout << "ConstruCCtor CCC" << '\n';
	}
	~CCC() {
		cout << "destruCCtor CCC" << '\n';
	}
};
void ex1118_2() {
	BBB a;

	BBB b(3);

}



class AAAA {
public:
	AAAA() {
		cout << "constructor AAA" << '\n';
	}
	AAAA(int x) {
		cout << "constructor AAA(int x) : " << x<< '\n';
	}
	~AAAA() {
		cout << "destructor AAA" << '\n';
	}
};

class BBBB : public AAAA {
public:
	BBBB() {
		cout << "constructor BBB" << '\n';
	}
	BBBB(int x) : AAAA(x+10) {
		cout << "constructor BBB(int x) : " << x <<'\n';
	}
	~BBBB() {
		cout << "destructor BBB" << '\n';
	}
};

class CCCC : public BBBB {
public:
	CCCC() {
		cout << "ConstruCCtor CCC" << '\n';
	}
	~CCCC() {
		cout << "destruCCtor CCC" << '\n';
	}
};
void ex1118() {
	BBBB a;

	BBBB b(5);
}
class Base{
public:
virtual void f() { //가상함수 선언
cout << "Base::f() called" << endl;
}
};
class Derived : public Base {
public:
	virtual void f() { //동적바인딩 예제
		cout << "Derived::f() called" << endl;
	}
};
void ex1121() {
	Derived d, * pDer;
	pDer = &d;
	pDer->f(); // Derived::f() 호출
	Base* pBase;
	pBase = pDer; // 업캐스팅 기본클래스 포인터에 파생클래스 포인터 설정
	pBase->f(); // Base::f() 호출 //virtual이 없다면 정적바인딩으로 Base 클래스의 f()가 호출되겠지만, 가상함수로 인해서 동적바인딩 Drived f()가 호출된다
}
class Shape {
public:
	virtual void draw() { 
		cout << "정적바인딩" << '\n';
	}  //가상함수 선언만 동적바인딩 이용해서 파생클래스에서 함수재정의 할려고 하는 것 같은데
};
class CIRCLE : public Shape { //상속
public:
	void draw(){  //함수재정의
		cout << "Circle draw" << '\n';
	}
};
class RECT : public Shape {
public:
	virtual void draw() {//함수재정의 리턴, 매개변수개수, 함수이름이 모두 같아야한다(오버바인딩) <-> 오버로드와 구분
		cout << "RECT draw" << '\n';
	}
};
class LINE : public Shape {
public:
	virtual void draw() {
		cout << "LINE draw " << '\n';
	}
};
void paint(Shape* pShape) {
	pShape->draw();
}
void ex1121_2() {
	paint(new CIRCLE);
	paint(new RECT);
	paint(new LINE);
}
void ex1121_3() {
	CIRCLE* c, a;
	Shape* s;
	s = c = &a;  // 업캐스팅
	s->draw(); 

		/*RECT R;
		LINE L;
		paint(&R);
		paint(&L);*/
}
class SHAPE {  //어차피 멤버변수들은 상속받으니, 동적바인딩 할 멤버변수만 파생에 나눠놓자
public:
	const char* name;
	int width, height;
	 void setName(const char* name) {
		this->name = name;
	}
     const char* getName() {
		return this->name;
	}
	void set(int a,int b) { 
		this->width = a;
		this->height = b;
	}
	virtual double getArea() = 0;  //가상함수로 아에 파생클래스에서 오버바인딩하면
	SHAPE() { //디폴트 생성자
		setName("");
		set(1, 1);
	}
    SHAPE(const char* name, int width, int height) {  //매개변수 생성자 
		setName(name);
		set(width,height);
	}
};
class OVAL : public SHAPE {
	 double area;
public:
	OVAL() {  //디폴트생성자
		setName("");
		set(1, 1);
	}
	OVAL(const char* name, int width, int height) {  //매개변수 생성자
		setName(name);    //상속받은 멤버함수라 사용가능
		set(width, height);   //이름,넓이,높이 set
	}
	double getArea() {   //넓이 곱해서 (반환 
		return this->width * this->height;
	}
};
class TRIANG : public SHAPE { 
public:
	double area;
	TRIANG() {
		setName("");
		set(1, 1);
	}
	TRIANG(const char* name, int width, int height) {
		setName(name);
		set(width, height);
	}
	double getArea() {   //넓이 곱해서 (반환 
		return this->width * this->height / 2;
	}
};
void ex1121_4() {
	//정적할당
	OVAL oval("타원 ", 10, 20);
	TRIANG triang("삼각형 ", 30, 40);

	//가상함수를 이용한 동적바인딩
	SHAPE* pShape=&oval;
	cout << "넓이는 " << pShape->getArea() << '\n';
	pShape = &triang;
	cout << "넓이는 " << pShape->getArea() << '\n';
}
void ex1121_5() { //~4번과 비교해서 문제내나?
	//동적할당
	OVAL* pOval =new OVAL("타원 ", 10, 20);  
	TRIANG* pTriang=new TRIANG("삼각형 ", 30, 40);	

    //가상함수를 이용한 동적 바인딩
	SHAPE* pShape = pOval;
	cout << "넓이는 " << pShape->getArea() << '\n';
	pShape = pTriang;
	cout << "넓이는 " << pShape->getArea() << '\n';

	delete pOval;
	delete pTriang;
}

void ex1121_6() {
	SHAPE* p[5]; //기본클래스 배열에 파생클래스 동적할당
	p[0] = new OVAL("타원 ", 10, 20);
	p[1] = new TRIANG("타원 ", 30, 40);
	p[2] = new OVAL("타원 ", 10, 20);
	p[3] = new TRIANG("타원 ", 30, 40);
	p[4] = new OVAL("삼각형 ", 10, 20);

	for(int i=0; i<5; i++)
	cout << p[i]->getName() << "넓이는 " << p[i]->getArea() <<'\n';

}
class BASE {
public:
	int* data = NULL;
	int size;
	virtual void f() {
		cout << "Base::f() called" << endl;
	}
	BASE() {
		cout << "BA 생성자 호출 " << '\n';
		size = 0;
	}
	BASE(int size) {
		this->size = size;
		this->data = new int[size];
	}
   virtual ~BASE() {  //가상소멸자 -> 기본클래스에서 파생클래스 호출 -> 기본클래스 호출
			delete[] this->data;
		cout << "BASE 소멸자" << '\n';
	}
};
class DERIVED : public BASE {
public:
	int* data_der;
	int size_der;
	DERIVED() {
		cout << "DER 생성자 호출 " << '\n';;
		this->size_der = 0;
		this->data_der = 0;
	}
	DERIVED(int size) : BASE(size) { // :BASE(size) 이거 안해주면 BASE() 기본 생성자 호출
		size_der = size;
		data_der = new int[size];
		cout << "DER 생성자 호출 " << '\n';
	}
     void f() {
		cout << "Derived::f() called" << endl;
	}
     ~DERIVED() {
		cout << "DERIVED 소멸자 " << '\n';
	}
};
void ex1125() {
	DERIVED* pDer,A;
	BASE* pBase = pDer =&A; //up-casting
}

class Calculator {  //추상클래스 객체 생성시 컴파일 오류
	void input() {
		cout << "정수 2 개를 입력하세요>> ";
		cin >> a >> b;
	}
protected:
	int a, b;
	virtual int calc(int a, int b) = 0; //순수 가상함수
public:
	void run() {
		input();
		cout << "계산된 값은 " << calc(a, b) << endl;
	}
};
class Adder : public Calculator {
 int calc(int a, int b) {
		return a + b;
	}
};
class Subtractor : public Calculator {
	 int calc(int a, int b) {
		return a - b;
	}
};
void ex1125_2() {
	Adder a;
	Subtractor  s;
	Calculator* p = &a;
	p->run();
	p = &s;
	p->run();
}
void ex1125_3() {
	Adder adder;
	Subtractor subtractor;
	adder.run();
	subtractor.run();
}
template <class T> class Stack { //템플레이트 클래스
protected:
	int m_size;  //int로 고정
	int m_top;
	T* m_buffer;  //다양한 형식이 사용 가능 
public:
	Stack();
	Stack(int size);
   ~Stack();
    void Push(T value);
    T Pop();
};
template <class T>Stack<T>::Stack() {
	m_buffer = NULL;     
	m_top = 0;
}
template<class T>Stack<T>::Stack(int size) {
	m_buffer = new T[size];
	m_size = size;
}
template <class T>Stack<T>::~Stack() {
	delete[] m_buffer;
}
template <class T> void Stack<T>::Push(T value) {  //Stack<T> ::(템플레이트 클래스 표시를 해주네)
	m_buffer[m_size] = value;
}
template <class T> T Stack<T>::Pop() {
	T tmp = m_buffer[m_top];
	m_buffer[m_top--] = 0;
	return tmp;
}
void ex1128_1() {
	Stack <int>A;
	Stack <double>B;
}
template<class A, class B, int k>class TA { //서로 다른 자료형 템플레이트 클래스를 활용 동시 선언
public:
	A arr1[k];  //멤버변수 서로 다른 템플레이트 자료형
	B arr2[k];
};
#define NUMBER 1000;

typedef Stack<int> Stackint;
void ex1128_2() {
	TA<int, float, 100> A;  //int flaot k setting

	A.arr1[99] = 200;  //생선된 클래스 멤버배열에 특정 값 대입
	A.arr2[50] = 100;

	TA<int, float, 100>* ptr = &A;  //템플레이트 클래스 포인터
	cout << ptr->arr1[99] <<" "<< ptr->arr2[50] <<'\n';
}
template<class T1, class T2> class GC {
	T1 data1;
	T2 data2;
	public:
		GC() {
			data1 = data2 = 0;
		}
	void set(T1 a, T2 b);
	void get(T1& a, T2& b);
};
template<class T1, class T2> void GC<T1, T2>::set(T1 a, T2 b) {
	data1 = a, data2 = b;
}
template<class T1, class T2> void GC<T1, T2>::get(T1& a, T2& b) {
	a=data1 ,b =data2 ;
}
void ex1128_3() {

	GC<int, float> A;
	A.set(100, 200);
	int value1;
	float value2;
	A.get(value1, value2);
	cout << value1 << "  " << value2 << '\n';
}


template<class T> T* remove(T* src, int sizeSrc, T* minus, int sizeMinus, int& retSize) {
	retSize = 0;
	T* Out = new T[sizeSrc];
	int dex=0;
	for (int i = 0; i < sizeSrc; i++) {
		for (int j = 0; j < sizeMinus; j++) {
			if (src[i] == minus[j]) {
				Out[dex] = minus[j];
				dex++;
			}
		}
	}
	retSize = dex;
	return Out;
}

void ex1202_1() {
	cout << "정수 배열 {1,2,3,4}에서 정수 배열 {-3,5,10,1,2,3}을 뺍니다" << endl;
	int x[] = { 1,2,3,4 };
	int y[] = { -3,5,10,1,2,3 };
	int retSize;
    int* p = remove(x, 4, y, 6, retSize);
	if (retSize == 0) {
		cout << "모두 제거되어 리턴하는 배열이 없습니다." << endl;
		return;
	}
	else {
		for (int i = 0; i < retSize; i++) 
			cout << p[i] << ' ';
		cout << endl;
		delete[] p;
	}
}
void ex1202_2() {
	vector<int> A;

	A.push_back(1);
	A.push_back(2);
	A.push_back(3);

	for (int i = 0; i < A.size(); i++) {
		cout << A[i] << "  ";

	}
	vector<int>::iterator it;
	for (it = A.begin(); it != A.end(); it++) {
		cout << *it << "  ";
	}
}
void ex1202_3() {
	map<string, string> dic;
	dic.insert({ "love", "사랑" });
	dic.insert({"man", "사람"});
	string kor = dic["love"]; 
	cout << kor << "  " << dic["love"] << "  " << dic.at("love") << '\n';


	map<int, int> dicint;
	dicint.insert({ 100,200 });
	dicint.insert({ 200,400 });

	cout << dicint[200] << "  " << dicint.at(200) << '\n';
}
void ex1202_4() {
	vector<char> vec;
	vec.push_back('e');
	vec.push_back('b');
	vec.push_back('a');
	vec.push_back('d');
	vec.push_back('c');

	// sort() 함수를 사용해서 정렬한다.
	std::sort(vec.begin()+1, vec.end());
	// 정렬 후 상태를 출력한다.
	cout << "vector 정렬 후\n";

	for (auto it = vec.begin(); it != vec.end(); ++it)
		cout << *it<<" ";
}
void ex1202_5() {
	map<string, string> dic;
	dic.insert({ "love", "사랑" });
	dic.insert({"apple", "사과"});
	dic["cherry"] = "체리"; 
	cout << "저장된 단어 개수 " << dic.size() << endl;
	string eng;
	while (true) {
		cout << "찾고 싶은 단어>> ";
		cin >> eng;
		if (eng == "exit")
				break; 
		if (dic.end() == dic.find(eng))
			cout << "없음" << endl;
		else
			cout << dic[eng]<< endl; 
	}
	cout << "종료합니다..." << endl;
}
template<class T> void removevect(const vector<T>& src, const vector<T>& minus,vector<int>& output) {
	for (int k = 0; k < src.size(); k++) {
		bool equal = false;
		for(int n=0; n<minus.size(); n++)
		 {
			if (src[k] == minus[n]) {
				equal = true;
			}
		}
		if (equal == false)
			output.push_back(src[k]);
	}
}
void ex1202_6() {
	cout << "정수 배열 {1,2,3,4}에서 정수 배열 {-3,5,10,1,2,3}을 뺍니다" << endl;
	vector<int> x = { 1,2,3,4 };
	vector<int> y = { -3,5,10,1,2,3 };
	vector<int> output;
	removevect(x ,y, output);

	for (int n = 0; n < output.size(); n++) {
		cout << output[n] << '\n';
	}
}
class linearlist {
public:
	string* member;
	int size;


	linearlist(int size) {
		this->size = size;
		member = new string[size];
	}
	~linearlist() {
		delete[] member;
	}
	linearlist(const linearlist& o) {
		this->size = o.size;
		for (int i = 0; i < size; i++) {
			member[i] = o.member[i];
		}
	}
	void set(int n, string a) {
		member[n] = a;
	}
	void show() {
		cout << "{ ";
		for (int i = 0; i < this->size; i++)
			cout << member[i] << " ";
		cout << "}" << '\n';
	}
	void input(int n,string s) {
		this->size = size + 1;
		string* arr = new string[size];
		for (int i = 0; i < size; i++) {
			if (i < n) {
				arr[i] = this->member[i];
			}
			else if (i == n) {
				arr[i] = s;
			}
			else {
				arr[i] =this->member[i-1];
			}
		}
		member = arr;
	}
	void del(int index) {
		this->size = size - 1;
		string* arr = new string[size];
		for (int i = 0; i < size; i++) {
			if (i < index) {
				arr[i] = this->member[i];
			}
			else {
				arr[i] = this->member[i+1];
			}
		}
		member = arr;
  	
	}
};
void linear() {
	linearlist o1(5);
	o1.set(0, "다현");
	o1.set(1, "정연");
	o1.set(2, "쯔위");
	o1.set(3, "사나");
	o1.set(4, "지효");

	o1.show();

	o1.input(3,"모모");

	o1.show();

	o1.input(2, "아이유");

	o1.show();

	o1.del(3);

	o1.show();

	o1.input(5, "나나");

	o1.show();

	o1.del(3);

	o1.show();

	o1.input(5, "펀치");
	o1.show();
	o1.del(5);
	o1.show();
}
class sll {
public:
	string data;
	sll* link = NULL;

	void show() {
		    sll* current = this;
			while (current != NULL) {
				cout << current->data << '\n';
				current = current->link;
			}
	}

	sll* insert(string data) {
		sll* nw = new sll;
		nw->data = data;
		nw->link = this->link;
		this->link = nw;
		return nw;
	}

	void del(sll* head) {
		sll* pre = presearch(head);
			pre->link = this->link;
			delete this;
	}
	sll* presearch(sll* head) {
		sll* current = head;
		sll* pre = NULL;
		while(current!= this){
			pre = current;
		    current = current->link;
		}
		return pre;
	}
};
void simplelink() {
	sll* head;
	

	sll* n1 = new sll;
	n1->data = "다현";
	head = n1;

	sll* n2 = new sll;
	n2->data = "정연";
	n1->link = n2;
	
	sll* n3 = new sll;
	n3->data = "쯔위";
	n2->link = n3;

	sll* n4 = new sll;
	n4->data = "사나";
	n3->link = n4;

	sll* n5 = new sll;
	n5->data = "지효"; 
	n4->link = n5;
	
	sll* nw = new sll;
	nw=n3->insert("재남");
	n2->del(head);
	head->show();

}
class cll {
public:
	string data;
	cll* link=NULL;

	void show(cll* head) {
		cll* current = head;
		while (1) {
			cout << current->data << "  ";
			current = current->link;
			if (current == head)
				return;
		}
	}
	cll* presearch() {
		cll* cur = this; 
		cll* pre;
		while (1) {
			pre = cur;
			cur = cur->link;
			if (cur == this)
				return pre;
		}
	}
	cll* insert(string p) {
		cll* nr = new cll;
		nr->data = p;
		nr->link = this->link;
		this->link = nr;
		return nr;
	}
	void del(cll* pre) {
		pre->link = this->link;
		delete this;
	}
};
void circlelinkedlist() {
	cll* head;
	cll* n1 = new cll;
	cll* n2 = new cll;
	cll* n3 = new cll;
	cll* n4 = new cll;
	cll* n5 = new cll;

	head = n1;
	n1->data = "다현";
	n2->data = "정연";
	n3->data = "쯔위";
	n4->data = "사나";
	n5->data = "지효";

	n1->link = n2;
	n2->link = n3;
	n3->link = n4;
	n4->link = n5;
	n5->link = head;

	cll* nw1 = new cll;
	nw1 = n2->insert("화사");

	cll* nw2 = new cll;
	nw2 = n4->insert("세연");

	//head,n1 -> n2 -> nw1 ->n3 -> n4 -> nw2 -> n5 -> head,n1

	n3->del(nw1);
	nw2->del(n4);
	head->show(head);
}
string sdata[5] = {"커피","녹차","꿀물"};
static int top = 2;

bool isfull(int size){
	if (top==size-1)
		return true;
	else
		return false;
}
bool isempty() {
	if (top==-1)
		return true;
	else
		return false;
}
void push(string a){
	if (isfull(5)) {
		cout << "full!" << '\n';
	}
	else {
		sdata[++top] = a;
	}
}
void pop() {
	if (isempty()) {
		cout << "empty!"<<'\n';
	}
	else {
		cout << sdata[top] << '\n';
		sdata[top--] = "";
	}
}
void show(int size, string* s){
	cout << "{ ";
	for (int i = 0; i < size; i++) {
		cout << s[i] << " ";
	}
	cout << "}" << '\n';
}
void stack_main() {	
	push("코코아");
	push("레몬차");
	push("민트티");

	pop();
	pop();
	pop();
	pop();
	pop();

	show(5, sdata);
}

//효정 미미 승희 아린 유아 유빈 
string qdata[6] = {};
int front=-1, rear=-1;
void setup(int size) {
	for (int i = front + 1; i < size; i++) {
		qdata[i - 1] = qdata[i];
		qdata[i] = "";
	}
		front--;
		rear--;
}

bool isqfull(int size) {
	if (rear == size - 1 && front == -1) { //rear 끝까지 삽입된 상태에서 앞에 front로 출력이 되지않음 꽉꽉차있는 상태
		return true;
	}
	else if (rear == size - 1) {//rear 끝까지 삽입되었지만, front로 어느정도 출력이 되어져서, 앞으로 땡겨야하는 상태
		setup(size);
		return false;
	}
	else //아직 다 차지않은 상태 => false 줘서 인큐 동작 계속 실행되게
		return false;
}
void enqueue(string a) {
	if (isqfull(6))
		cout << "full" << '\n';
	else
		qdata[++rear] = a;
}
bool isqempty() {
	if (rear == front) {
		return true;
	}
	else
		return false;
}
void dequeue() {
	if (isqempty())
		cout << "empty" << '\n';
	else {
		cout << qdata[++front] << '\n';
		qdata[front] = "";
	}
}
void queue_main() {
	enqueue("미미");
	enqueue("승희");
	enqueue("아린");
	enqueue("효정");
	enqueue("유빈");
	enqueue("유아");

	show(6, qdata);

	dequeue();
	enqueue("아이유");

	show(6, qdata);
}

//string q[7] = { "효정","미미","유아","아린","유빈","승희" };
//bool isqueuefull(int size) {
//	if ((rear+1)%size == front)
//		return true;
//	else
//		return false;
//}
//void enqueue(string data) {  //size-1만큼만 사용가능 한칸은 비워놔야함
//	if (isqueuefull(6))
//		cout << "꽉 참" << '\n';
//	else {
//		rear = rear + 1 % 6;
//		q[rear] = data;
//	}
//}
//bool isqueueempty() {
//	if (rear == front)
//		return true;
//	else
//		return false;
//}
//void dequeue() {
//	if (isqueueempty())
//		cout << "비었음" << '\n';
//	else {
//		front = front + 1 % 6;
//		cout << q[front] << '\n';
//		q[front] = "";
//	}
//}
//void peek() {
//	if (isqueueempty())
//		cout << "비었음" << '\n';
//	else {
//		cout << q[(front+1)%6] << '\n';
//	}
//}
//void circlequeue_main() {
//	show(6,q);
//	enqueue("승희");
//	enqueue("유아");
//	enqueue("미미");
//	enqueue("효정");
//	enqueue("유빈");
//	enqueue("아린");
//
//	show(6, q);
//
//	dequeue();
//	dequeue();
//	show(6, q);
//
//	peek();
//}
class binarytree {
public:
	binarytree* left;
	string data;
	binarytree* right;


	void dataorder(string data, binarytree* node) {
		binarytree* current = this;
		node->data = data;
		while (1) {
			if (data < current->data) {
				if (current->left == NULL) {
					current->left = node;
					break;
				}
				current = current->left;
			}
			else {
				if (current->right == NULL) {
					current->right = node;
					break;
				}
				current = current->right;
			}
		}
	}
	void search(string a) {
		binarytree* current = this;
		cout << '\n';
		while (1) {
			if (current->data == a) {
				cout << "find" << '\n';
				break;
			}
			else if (current->data > a) {
				if (current->left == NULL) {
					cout << "없음" << '\n';
					break;
				}
				cout << "왼쪽으로 내려감" << '\n';
				current = current->left;
			}
			else{
				if (current->right == NULL) {
					cout << "없음" << '\n';
					break;
				}
				cout << "오른쪽으로 내려감" << '\n';
				current = current->right;
			}
		}
	}

	void del(string data) {
		binarytree* current = this;
		binarytree* parrent = NULL;
		while (1) {
			if (current->data ==data) {
				if (current->left == NULL && current->right == NULL) {
					if (parrent->left == current)
						parrent->left = NULL;
					else
						parrent->right = NULL;
			}
				else if (current->left != NULL && current->right == NULL) {
					if (parrent->left == current)
						parrent->left = current->left;
					else
						parrent->right = current->left;
				}
				else if (current->left == NULL && current->right != NULL) {
					if (parrent->left == current)
						parrent->left = current->right;
					else
						parrent->right = current->right;

				}
				else if (current->left != NULL && current->right != NULL) {
					if (parrent->left == current)
						parrent->left = current->left;
					else
						parrent->right = current->right;
				}
				break;
			}
			else if (current->data > data) {
				if (current->left ==NULL) {
					cout << "못찾음" << '\n';
					break;
				}
				parrent= current;
				current = current->left;
			}
			else {
				if (current->right == NULL) {
					cout << "못찾음" << '\n';
					break;
				}
				parrent = current;
				current = current->right;
			}
		}
	}

	friend void preorder(binarytree* node);
	friend void inorder(binarytree* node);
	friend void postorder(binarytree* node);
	
};
void preorder(binarytree* node) {
	if (node == NULL)
		return;
	cout << node->data << " ";
	preorder(node->left);
	preorder(node->right);
}
void inorder(binarytree* node) {
	if (node == NULL)
		return;
	inorder(node->left);
	cout << node->data << " ";
	inorder(node->right);
}
void postorder(binarytree* node) {
	if (node == NULL) {
		return;
	}
	postorder(node->left);
	postorder(node->right);
	cout << node->data << " ";
}
//효정
//미미       아린
//유아  승희  유빈
void binarytree_main() {
	binarytree* root;
	binarytree* node1 = new binarytree;
	binarytree* node2 = new binarytree;
	binarytree* node3 = new binarytree;
	binarytree* node4 = new binarytree;
	binarytree* node5 = new binarytree;
	binarytree* node6 = new binarytree;

	root = node1;
	node1->data = "효정";
	root->dataorder("미미", node2);
	root->dataorder("아린", node3);
	root->dataorder("유빈", node4);
	root->dataorder("승희", node5);
	root->dataorder("유아", node6);

  

	 postorder(root);
	 cout << '\n';
	 root->del("유아");
	 root->del("아린");
	 postorder(root);
}
class stacks {
public: 
	int* data;
	int s;
	int top = -1;

	stacks(int s) {
		this->s = s;
		data = new int[s];
		for (int i = 0; i < s; i++)
			data[i] = NULL;
	}
	virtual ~stacks() {
		delete[] data;
	}
	bool isfull() {
		if (top == s - 1)
			return true;
		else
			return false;
	}
	bool isempty() {
		if (top == -1)
			return true;
		else
			return false;
	}
	void push(int d) {
		if (isfull()) {
			cout << "full" << '\n';
			return;
		}
		data[++top] = d;
	}
	int pop() {
		if (isempty()) {
			cout << "empty" << '\n';
			return NULL;
		}
		cout << data[top] << '\n';
		int tmp = data[top];
		data[top--] = NULL;
		return tmp;
	}
};
class grape : public stacks{
public:
	int** array;
	int size;
	int* visit;
 int current;
 int next;
 int vc;
	grape(int s): stacks(s) {
		this->size = s;
		array= new int*[size];
		for(int i=0; i<size; i++)
		array[i] = new int[size];

		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++)
			      array[i][j] = 0;
		}

		visit = new int[20];
		for (int i = 0; i < 20; i++)
			visit[i] = NULL;
		vc = -1;
	}
	~grape() {
		delete[] array;
		delete[] visit;
	}
	void show() {
		cout << "-----array----" << '\n';
		for (int i = 0; i < size; i++) {
			for (int j = 0; j < size; j++)
				cout << array[i][j] << " ";
			cout << '\n';
		}
		cout << '\n';

		cout << "-----stack------" << '\n';
		for (int i = 0; i < size; i++)
			cout << data[i] << '\n';
		cout << '\n';

		cout << "-----visit------" << '\n';
		for (int i = 0; i < 20; i++)
			cout << visit[i] << '\n';
		cout << '\n';
	}
	bool checkvisit(int* v,int n) {
		for (int i = 0; i <= 20; i++) {
			if (v[i] == n)
				return true;
		}
			return false;	
	}
	void DFS() {
		//첫 정점 설정
		current = 0;
		push(current);
		visit[++vc] = current;

		while (!this->isempty()) {
			//다음 정점 찾기
			next = -1;
			for (int i = 0; i < size; i++) {
				if (array[current][i] == 1) {  //현재 버텍스에서 연결되어있는 정점인가?
					if (checkvisit(visit,i)) {  //이전에 한 번 방문했는가?

					}
					else {        //이전에 방문하지 않았으며, 현재 정점에 연결되어있음 
						next = i;
						break;
					}
				}
			}
			//찾은 경우 
			if (next != -1) {
				current = next;       //현재 노드를 다음노드로 방문시켜줌
				push(current);    //data 스택에 push
				visit[++vc] = current;  //방문 기록 , i가 visit 배열에 들어있는가를 검사하는 함수가 필요
			}
			//못 찾은 경우
			else {
				current = pop();
			}

		}
	}
};
//  효정
//유아 미미
//  아린
//승희  유빈
void grape_main() {
	grape G1(6);
	int 효정 = 0, 유아 = 1, 미미 = 2, 아린 = 3, 승희 = 4, 유빈 = 5;

	G1.array[효정][유아] = 1; 	G1.array[효정][미미] = 1;
	G1.array[유아][효정] = 1;   G1.array[유아][아린] = 1;
	G1.array[미미][효정] = 1;   G1.array[미미][아린] = 1;
	G1.array[아린][유아] = 1; 	G1.array[아린][미미] = 1; G1.array[아린][승희] = 1; G1.array[아린][유빈] = 1;
	G1.array[승희][아린] = 1;   G1.array[승희][유빈] = 1;
	G1.array[유빈][아린] = 1; 
	G1.DFS();
	G1.show();
}
//1+1+2+3+5+8+13 
double fac(int N) {
	if (N <=1) return 1;
	return N * fac(N - 1);
}
void fac_main() {
	cout << fac(5) << '\n';
	
}
class sort {
public:
	int* data;
	int size;
	sort() {
		cout << "size를 정해봐 : ";
		cin >> size;

		this->size;
		data = new int[size];

		for (int i = 0; i < size; i++) {
			cout << "데이터 입력 : ";
			cin >> data[i];
		}
	}
	  ~sort() {
		delete[] data;
	}
	virtual void onesort() {}

	void swap(int& a, int& b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	void show() {
		for (int i = 0; i < size; i++)
			cout << data[i] << " ";
		cout << '\n';
	}
};
class selectsort : public sort {
public:
	selectsort() : sort() {}
	
	void onesort() {
		int min;
		for (int j = 0; j < size; j++) {
			min = j;
				for (int i = j + 1; i < size; i++)
					if (data[min] > data[i])
						min = i;
			swap(data[j], data[min]);
		}
	}
};
class insertsort : public sort {
public:
	insertsort():sort() {}
	
	void onesort() {
		for (int j = 1; j < size; j++) {
			for (int i = j; i >0; i--) {
				if (data[i-1] > data[i]) {
					swap(data[i - 1], data[i]);
				}
			}
		}
	}
};
class bubblesort : public sort {
public:
	bubblesort() :sort() {}
	void onesort() {
		for (int j = size - 1; j > 0; j--)
			for (int i = 0; i < j; i++)
				if (data[i] > data[i + 1])
					swap(data[i], data[i + 1]);
	}
};
class quicksort : public sort {
public:
	quicksort() :sort() {}
	void onesort(int start, int end){
		if (start >=end)   //매개변수로 들어오는게 같다면 이미 재귀구조가 종말에 도달
			return;
		int low = start, high = end;
		int pivot = data[(low + high) / 2];
		while (low <= high) {   //이 함수내에서 피봇값을 기준으로한 정렬이 마무리되었음을 뜻함
			while (pivot > data[low])
				low++;
			while (pivot < data[high])
				high--;
			if (low <= high) {
				swap(data[low], data[high]);
				low++;
				high--;
			}
		}
		int mid = low;
		onesort(start, mid - 1);
		onesort(mid, end);
	}
};
class linearsearch:public selectsort {
public:
	int index=-1;
	int searchdata=-1;
	linearsearch() : selectsort() {}
	void search() {
	for(int i=0; i<size; i++)
		if (this->data[i] == this->searchdata) {
			index = i;
			return;
		}
	}
	void searchshow() {
		if (index == -1)
			cout << "검색결과를 찾을 수 없습니다 404 ERROR" << '\n';
		else {
			cout << "해당하는 검색데이터의 인덱스 :  " << index << '\n';
		}
	}
	void fullsearch() {
		while (1) {
			index = -1;
			searchdata = -1;
			cout << "검색 하실 데이터를 입력해주세요[종료 0입력] : ";
			cin >> searchdata;

			if (searchdata == 0)
				return;

			search();
			searchshow();
		}
	}
};
class binarysearch : public quicksort {
public: 
	int index = -1;
	int searchdata = -1;
	binarysearch() : quicksort() {}
	void search(int start, int end) {
		if (start > end) 
			return;
		int mid = (start + end) / 2;
		if(data[mid] == searchdata){
			index = mid;
		}
		else if (data[mid] > searchdata) {
			search(start, mid - 1);
		}
		else {
			search(mid + 1, end);
		}
	}
	void searchshow() {
		if (index == -1)
			cout << "검색결과를 찾을 수 없습니다 404 ERROR" << '\n';
		else {
			cout << "해당하는 검색데이터의 인덱스 :  " << index << '\n';
		}
	}
	void fullsearch() {
		while (1) {
			index = -1;
			searchdata = -1;
			cout << "검색 하실 데이터를 입력해주세요[종료 0입력] : ";
			cin >> searchdata;

			if (searchdata == 0)
				return;

			search(0,size-1);
			searchshow();
		}
	}
};
//없음 금괴 수정 루비 진주(고려 순서)
class DP {
public:
	int weight[5] = {0,6,4,3,5};  //보석무게
	int money[5] = {0,13,8,6,12};  //보석가격
	int met[5][8] = { 0 };

	void danamic() {
		for (int i = 1; i < 5; i++) { //i는 고려대상 
			for (int j = 0; j < 8; j++) {  //j는 무게
				if (j >= weight[i])
					met[i][j] = max((money[i] + met[i - 1][j - weight[i]]), met[i-1][j]);
			}
		}
	
	}
	void metshow() {
		for (int i = 0; i < 5; i++) {
			for (int j = 0; j < 8; j++) {
				cout << met[i][j];
				if (met[i][j] >= 10) {
					cout << " ";
				}
				else {
					cout << "  ";
				}
			}
			cout << '\n';
		}
	}

};
//---------------------코딩테스트 문제풀이------------------------------------------------------------------
void ex000() {
	int* data;
	int size;

	cin >> size;
	data = new int[size];
	for (int i = 0; i < size; i++)
		cin >> data[i];
	for(int j=1; j<size;j++)
		for(int i=j; i>0; i--)
			if (data[i] < data[i - 1]) {
				int tmp = data[i];
				data[i] = data[i - 1];
				data[i - 1] = tmp;
			}
	for (int i = 0; i < size; i++)
		cout << data[i] << '\n';
}
class ex001 {
public:
	int N;
	string input;
	int* data;
	int sum;
	void in() {
		cin >>  N;
		cin >> input;
		data = new int[N];
	}
	void convert() {
		for (int i = 0; i < N; i++)
			data[i] = input[i] - '0';
	}
	void calculate() {
		for (int i = 0; i < N; i++)
			sum += data[i];
	}
	void out() {
		cout << '\n';
		cout << sum << '\n';
	}
ex001() {
		sum = 0;
		in();
		convert();
		calculate();
		out();
	}
	~ex001() {
		delete[] data;
	}
};
class ex002 {
public:
	int N, max;
	int* score;
	double average;

	void in() {
		cin >> N;
		score = new int[N];
		for (int i = 0; i < N; i++)
			cin >> score[i];
	}
	void out() {
		cout << average;
	}
	void findmax() {
		max = score[0];
		for (int i = 1; i < N; i++) {
			if (max < score[i])
				max = score[i];
		}
	}
	void calculate() {
		double sum = 0;
		for (int i = 0; i < N; i++)
			sum += (double)score[i] / max * 100;
		average = sum / N;
	}
	ex002() {
		in();
		findmax();
		calculate();
		out();
	}
	~ex002() {
		delete[] score;
	}
};
class ex003 {
public: 
	int* a;
	int* s;
	int* q1;
	int* q2;
	int numbersize, number ,quest, questsize;
	void in() {
		cin >> number >> quest;
		numbersize = number + 1;
		questsize = quest + 1;
		a = new int[numbersize];
		s = new int[numbersize];
		q1 = new int[questsize];
		q2 = new int[questsize];
		for (int i = 1; i < numbersize; i++)
			cin >> a[i];
		for (int i = 1; i < questsize; i++)
			cin >> q1[i] >> q2[i];
	}
	void scal() {
		a[0] = 0;
		s[0] = 0;
		for (int i = 1; i < numbersize; i++) {
			s[i] =s[i-1]+ a[i];
		}
	}
	void out() {
		for (int i = 1; i < questsize; i++) {
			cout << s[q2[i]] - s[q1[i] - 1] << '\n';
		}
	}
	ex003() {
		in();
		scal();
		out();
	}
	~ex003() {
		delete[] a, s, q1, q2;
	}
};
class ex004 {
public:
	int number, numbersize, quest, questsize;
	vector<vector<int>> a;
	vector<vector<int>> s;
	vector<vector<int>> q;
	vector<int> result;
	

	void input() {
		cin >> number >> quest;
		numbersize = number + 1;
		questsize = quest + 1;
		
        a.resize(numbersize, vector<int>(numbersize,0));
		s.resize(numbersize, vector<int>(numbersize,0));
		q.resize(questsize, vector<int>(4,0));
	
		for (int y = 1; y < numbersize; y++)
			for (int x = 1; x < numbersize; x++)
				cin >> a[y][x];
		for (int i = 1; i < questsize; i++)
			cin >> q[i][0] >> q[i][1]>>q[i][2] >> q[i][3];
	}
	void preprocess() {
		for (int y = 1; y < numbersize; y++)
			for (int x = 1; x < numbersize; x++)
				s[y][x] = s[y][x-1] +s[y - 1][x] + a[y][x] - s[y - 1][x - 1];
	}
	void postprocess() {
		result.resize(questsize);
		for (int i = 1; i < questsize; i++) {
			int x1 = q[i][0], y1 = q[i][1], x2 = q[i][2], y2 = q[i][3];
			result[i] = (s[y2][x2] - s[y1 - 1][x2] - s[y2][x1 - 1] + s[y1 - 1][x1 - 1]);
		}
	}
	void output() {
		for (int i = 1; i < questsize; i++)
			cout << result[i] << '\n';
	}
	void run() {
		input();
		preprocess();
		postprocess();
		output();
	}
	ex004() {
		number = numbersize = quest = questsize = 0;
	}
};
class ex005 {
public:
	int N, M, rows, answer;
	vector<int> inputarray, prefixsum,modcount;

	ex005() {
		N = M = rows= answer=0;
	}
	bool isrange(int a) {
		if (a > 0)
			return false;
		else
			return true;
	}
	void input() {
		cin >> N >> M;
		if (isrange(N) && isrange(M) == 0) {
			cout << "N과 M의 범위가 적절하지 않습니다" << '\n';
			return;
		}
        rows = N + 1;
		inputarray.assign(rows,0);
		modcount.assign(M, 0);
		for (int i = 1; i < inputarray.size(); i++)
			cin >> inputarray.at(i);
	}
	 int solve(int a) {
		 return (a * (a - 1)) / 2;
	}
	void preprocess() {
		prefixsum.assign(rows, 0);
		for (int i = 1; i < prefixsum.size(); i++)
			prefixsum.at(i) = prefixsum.at(i - 1) + inputarray.at(i);
	}
	void process() {
		int mod = 0;
		for (int i = 1; i < prefixsum.size(); i++) {
			mod = prefixsum[i] % M;
			modcount[mod]++;
		}
	}
	void postprocess() {
		for (int i = 0; i < modcount.size(); i++) {
			answer += solve(modcount[i]);
		}
		answer += modcount[0];
	}
	void output() {
		cout << answer << '\n';
	}
	void run() {
		ios_base::sync_with_stdio(false);
		cin.tie(NULL);
		input();
		preprocess();
		process();
		postprocess();
		output();
	}
};
class ex006 {
public:
	int N, front, rear,answer,rows,sum;
	vector<int> data;
	ex006() {
		N = answer=rows=sum=0;
		front = rear = 1;
	}
	bool range() {
		if (N < 1 ) {
			cout << "N의 범위가 올바르지 않습니다" << '\n';
			return false;
		}
		else
			return true;
	}
	void input() {
		cin >> N;
		if (range() == false)
			return;
		rows = N + 1;
		data.assign(rows, 0);
		for (int i = 0; i < data.size(); i++)
			data[i] = i;
	}
	int calculate(int a, int b) {
		int cal = 0;
		for (int i = a; i <= b; i++) {
			if (data.size() > i)
				cal += data[i];
		}
			return cal;
	}
	void process() {
		while (front <= N) {
			sum = calculate(front, rear);  //sum과 N이 같은 case를 찾았을 때
			if (sum == N) {
				answer++;
				front++;
				rear = front;
			}
			else if (sum > N || rear >N) { 
				front++;
				rear = front;
			}
			else {         
				rear++;
			}
		}
	}
	void output() {
		cout << answer <<'\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex007 {
public:
	vector<int> data;
	int rows, N, M, answer, front, rear, sum;
	ex007() {
		rows = N = M = answer = front = rear = sum = 0;
	}
	bool isErrorrange(int variable, int start, int end ) {
		if (variable < start || variable > end) {
			cout << "N의 범위가 올바르지 않습니다" << '\n';
			return true;
		}
		else
			return false;
	}
	void input() {
		cin >> N;
		if (isErrorrange(N, 1, 15000))
			return;
		cin >> M;
		if (isErrorrange(M, 1, 10000000))
			return;
		rows = N;
		data.assign(rows, 0);
		for (int i = 0; i < N; i++)
			cin >> data[i];
	}
	void sumf() {
		if (front >= N)
			return;
		sum = 0;
		for (int i = front; i <= rear; i++)
			sum += data[i];
	}
	void swapf(int& a, int& b) {
		int tmp = a;
		a= b;
		b = tmp;
	}
	void quicksortf(int start, int end) {
		if (start >= end)
			return;
		int pivot = data[(start + end) / 2];
		int low = start, high = end;
		while (low <= high) {
			while (pivot > data[low])
				low++;
			while (pivot < data[high])
				high--;
			if (low <= high) {
				swapf(data[low], data[high]);
				low++;
				high--;
			}
		}
		int mid = low;
		quicksortf(start, mid - 1);
		quicksortf(mid, end);
	}
	void process() {
		quicksortf(0, N - 1);
		while (front< N && rear < N) {
			sumf();
			if (M == sum) {
					rear = ++front;
				    answer++;
			}
			else if (sum > M||rear >= N) {
				rear = ++front;
			}
			else {
				rear++;
			}
		}
	}
	void output() {
		cout << answer << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex008 {
public:
	vector<int> data;
	int front, rear, N, sum,answer;
	ex008() {
		front = N = sum =answer= 0;
		rear = front + 1;
	}
	void sumf() {
		sum = data[front] + data[rear];
	}
	bool rangef() {
		if (N <= 2000 && N >= 1)
			return true;
		else {
			cout << "RANGE ERROR" << '\n';
			return false;
		}
	}
	void input() {
		cin >> N;
		if (!rangef()) return;
		data.assign(N, 0);
		for (int i = 0; i < N; i++)
			cin >> data[i];
	}
	void process() {
		int key=0;

		for (int i = 2; i < N; i++) {
			 key = data[i];
			 front = 0;
			 rear = i-1;  //key바로 뒤에 붙임
			while (front < rear) {  //front가 rear보다 작은동안만
				sumf();
				if (key == sum) {   //찾았을때
					answer++;            // 좋은수 count++       
					break;               //루프를 빠져나가게
				}
				else if (key > sum) {  //sum이 좀 작음
					front++;
				}
				else    //sum이 큼
					rear--;
			}
		}
	}
	void output() {
		cout << answer << '\n';
	}
	void run() {
		input();
		std::sort(data.begin(), data.end());
		process();
		output();
	}
};
class ex009 {
public:
	vector<char> str;
	vector<int> data, alpha;
	int N, M, answer,front,rear;
	ex009() {
		N = M = answer = 0;
	}
	void input() {
		cin >> N >> M;
		if (N >= 1 && N <= 1000000 && N >= M) {}
		else {
			cout << "범위를 벗어남";
			return;
		}
		str.assign(N, 0);
		alpha.assign(4, 0);
		data.assign(4, 0);

		for (int i = 0; i < N; i++)
			cin >> str[i];
		for (int i = 0; i < 4; i++)
			cin >> alpha[i];
	}
	bool inspect() {
		int result = 0;
		for (int i = 0; i < 4; i++)
			if (alpha[i] == data[i])
				result++;

		if (result == 4)
			return true;
		else
			return false;
	}
	void update(char remove, char add) {
		if (remove == 'A') data[0]--;
		else if (remove == 'C')data[1]--;
		else if (remove == 'G') data[2]--;
		else data[3]--;

		if (add == 'A') data[0]++;
		else if (add == 'C')data[1]++;
		else if (add == 'G') data[2]++;
		else data[3]++;

	}

	void preprocess() {
		front = 0;
		rear = M - 1;
		for (int i = front; i <= rear; i++) {
			if (str[i] == 'A')
				data[0]++;
			else if (str[i] == 'C')
				data[1]++;
			else if (str[i] == 'G')
				data[2]++;
			else {
				data[3]++;
			}
		}
	}
	void process() {
		while (1) {
			if (inspect()) {
				answer++;
			}
			rear++;
			if (rear >= N) break;
			update(str[front], str[rear]);
			front++;
		}
	}
	void output() {
		cout << answer <<'\n';
	}
	void run() {
		input();
		preprocess();
		process();
		output();
	}

};
class dec {
public:
	int index = 0;
	int data = 0;
};
class ex010 : public dec{
public:
	vector<int> A, D, Q;
	int N, L, front, rear, start,end;
	dec* queue;
	ex010() {
		N = L =start=end=0;
		front = rear = -1;
	}
	~ex010() {
		delete[] queue;
	}
	void input() {
		cin >> N >> L;
		if (N < 1 || N>5000000) { cout << "범위초과"; return; }
		A.assign(N, 0);
		D.assign(N, 0);
		D.assign(N, 0);
		queue = new dec[N];
		for (int i = 0; i < N; i++)
			cin >> A[i];
	}
	void output() {
		for (int i = 0; i < N; i++)
			cout << D[i] << " ";
	}
	void rear_pop() {
		if (rear < 0) return;
		while (queue[rear].data >= A[end]) {
			queue[rear].data = 0;
			queue[rear].index = 0;
			rear--;
		}
	}
	void rear_push() {
		if (rear >= N) return;
		rear++;
		queue[rear].data = A[end];
		queue[rear].index = end;
	}
	void front_pop() {         
		if (front >= rear) return; 
		front++;
		queue[front].data = 0;
		queue[front].index = 0;
	}
	void process(){  
		start = 1 - L;
		end = 0;
		while (end < N) {
			rear_pop();
			rear_push();
			if (queue[front + 1].index < start)
				front_pop();

			D[end] = queue[front + 1].data;
			start++;
			end++;
		}
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex011 {
public:
	vector<char> result;
	vector<int> A, stack;
	int top,N,count,rc;
	bool nob;
	ex011() {
		nob = false;
		top = rc=-1;
		count = 0;
		N = 0;
	}
	void input() {
		cin >> N;
		A.resize(N, 0);
		stack.resize(N, 0);
		result.resize(2 * N, 0);
		for (int i = 0; i < N; i++) {
			cin >> A[i];
		}
	}
	void push() {
		count++;
		top++;
		stack[top] = count;
		result[++rc] = '+';
	}
	void pop() {
		stack[top--] = 0;
		result[++rc] = '-';
	}
	void process() {
		for (int i = 0; i < N; i++) {
			if (top == -1) push();
			while (1) {
				if (count > N) {
					nob = true;
					return;
				}
				if (A[i] == stack[top]) {
					pop();
					break;
				}
				else
					push();
			}
		}
	}
	void output() {
		if (nob == true)
			cout << "NO" << '\n';
		else {
			for (int i = 0; i <= rc; i++)
				cout << result[i] << '\n';
		}
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex012 {
public:
	vector<int> A, stack, result;
	int top, N,count;
	ex012() {
		top =count= -1;
		N =0;
	}
	void input() {
		cin >> N;
		A.resize(N, 0);
		stack.resize(N, 0);
		result.resize(N, 0);
		for (int i = 0; i < N; i++)
			cin >> A[i];
	}
	void push(int a) {  //push일때만 인덱스 count변화
		stack[++top] = a;
	}
	int pop() {
		int tmp = stack[top];
		stack[top--] = 0;
		return tmp;
	}
	int peak() {
		return stack[top];
	}
	void process() {
		for (int i = 0; i < N-1; i++) {
			push(i);
			 if(A[i] < A[i+1]) {
				while (top != -1) {
					if(A[peak()] = A[i+1])
					result[pop()] = A[i + 1];
				}
			 }
		}
		push(N - 1);
		for (int i = 0; i <= top; i++)
			result[stack[i]] = -1;
	}
	void output() {
		for (int i = 0; i < N; i++)
			cout << result[i] << " ";
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex013 {
public:
	vector<int> inputarray;
	int N, card_count, rear, front, result;
	ex013() {
		N = result = 0;
		rear = front = 0;
		card_count = 0;
	}
	void push(int a) {
		rear = (rear + 1) % (N+1);
		inputarray[rear] = a;
	}
	int pop() {
		front = (front + 1) % (N+1);
		int tmp = inputarray[front];
		inputarray[front] = 0;
		return tmp;
	}
	int peek() {
		return inputarray[(front + 1)%(N+1)];
	}
	void input() {
		cin >> N;
		inputarray.assign(N+1, 0);
		for (int i = 0; i < N; i++)
			push(++card_count);
	}
	void process() {
		for (int i = 0; i < N - 1; i++) {
			pop();
			push(pop());
		}
		result = peek();
	}
	void output() {
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
#include <queue>
class ex014 {
public:
	vector<int> inputarray, resultarray;
	int N, result_count=-1;

	ex014() { N =0, front = rear = -1; }
	void input() {
		cin >> N;
		inputarray.assign(N, 0);
        resultarray.resize(N, 0);
		for (int i = 0; i < N; i++)
			cin >> inputarray[i];
	}
	struct compare {
		bool operator() (const int& t1, const int& t2) {
			if (abs(t1) == abs(t2))
				return t1 > t2;   //min heap
			else {
				return abs(t1) > abs(t2);
			}
		}
	};
	priority_queue < int, vector<int>, compare> queue;
	void process() {
		for (int i = 0; i < N; i++) {
			if (inputarray[i] != 0)
				queue.push(inputarray[i]);
			else {
				if (queue.empty())
					resultarray[++result_count] = 0;
				else {
					resultarray[++result_count] = queue.top();
					queue.pop();
				}
			}
		}
	}
	void output() {
		for (int i = 0; i <= result_count; i++)
			cout <<resultarray[i] << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex015 {
public:
	int N;
	vector<int> inputarray;
	ex015() : N(0) {}
	void run() {
		cin >> N;
	   inputarray.assign(N, 0);
	   for (int i = 0; i < N; i++)
		   cin >> inputarray[i];
		for (int j = inputarray.size()-1; j >= 0; j--)
			for (int i = 0; i < j; i++)
				if (inputarray[i] > inputarray[i + 1])
					swap(inputarray[i], inputarray[i + 1]);
		for (int i = 0; i < N; i++)
			cout << inputarray[i] << '\n';
	}
};
class ex016 {
public:
	int N,result;
	vector<pair<int, int>> inputarray;

	ex016() : N(0), result(0) {}
	void input() {
		cin >> N;
		inputarray.resize(N);

		for (int i = 0; i < N; i++) {
			cin >> inputarray[i].first;
			inputarray[i].second = i;
		}
	}
	void process() {
		std::sort(inputarray.begin(), inputarray.end());

		int max = 0;
		for (int i = 0; i < N; i++) {
			if (max < inputarray[i].second - i)
				max = inputarray[i].second - i;
		}
		result = max + 1;
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex017 {
public:
	string str,result;
	vector<int> data;
	int N;

	ex017(){}
	void input() {
		cin >> str;
		N = str.size();
		data.resize(N);
		
	    for(int i=0; i<N; i++)
			data[i] = str[i]-'0';
	
	}
	void swap(int& a, int& b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	void process() {
		int max = 0;
		for(int i=0; i<N; i++){
			max = i;
			for (int j = i + 1; j < N; j++) {
				if (data[j] > data[max])
					max = j;
			}
			swap(data[i], data[max]);
		}
		for (int i = 0; i <N; i++)
			result += data[i] + '0';
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex018 {
public:
	vector<int> inputarray;
	int N,result;
	void input() {
		cin >> N;
		inputarray.resize(N);
		for (int i = 0; i < N; i++)
			cin >> inputarray[i];
	}
	int add_sum(int b) {
		int sum = 0;
		for (int i = 0; i <= b; i++)
			sum += inputarray[i];
		return sum;
	}
	void process() {
		std::sort(inputarray.begin(), inputarray.end());
		int tmp=0;
		for (int i = 0; i < N; i++)
			tmp+=add_sum(i);
		result = tmp;
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex019 {
public:
	vector<int> inputarray;
	int N, k,result;
	void input() {
		cin >> N >> k;
		inputarray.resize(N);
		for (int i = 0; i < N; i++)
			cin >> inputarray[i];
	}
	void swap(int& a, int& b) {
		int tmp = a;
		a = b;
		b = tmp;
	}
	void process() {
		std::sort(inputarray.begin(), inputarray.end());
		result = inputarray[k-1];
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
void merge(vector<int>&arr, int left, int right) {
	    int mid = (left + right) / 2;
		int n1 = mid - left + 1;
		int n2 = right - mid;
		vector<int> L(n1), R(n2);  //L이 mid를 포함, R이 mid+1 항부터, 각 start포인트 지점에서 시작하는 건 같다.
		for (int i = 0; i < n1; i++)
			L[i] = arr[left + i];
		for (int j = 0; j < n2; j++)
			R[j] = arr[mid + 1 + j];     //먼저 두 배열로 나눴네

		int i = 0, j = 0, k = left;
		while (i < n1 && j < n2) { //두 포인터 중 한쪽이 인덱스 탐색을 모두 끝냈을 때까지 루프
			if (L[i] <= R[j]) { //
				arr[k] = L[i];
				i++;
			}
			else {
				arr[k] = R[j];
				j++;
			}
			k++;
		}
		while (i < n1) {  //L이 남았을 때 
			arr[k] = L[i];
			i++;
			k++;
		}
		while (j < n2) { //R이 남았을 때
			arr[k] = R[j];
			j++;
			k++;
		}
	}
void mergeSort(vector<int>& arr, int left, int right) {
	if (left >= right) return;
	int mid = (right + left) / 2;

	mergeSort(arr, left, mid);                   //left~mid 재귀
	mergeSort(arr, mid + 1, right);              //mid+1~ right 재귀
	merge(arr, left, right);
}
class ex020 {
public:
	vector<int> L, R, inputarray;
	int n1, n2, N;
	void merge(vector<int>& arr, int left, int right) {
		int mid = (left + right) / 2;
		n1 = mid - left + 1;
		n2 = right - mid;
		L.resize(n1);
		R.resize(n2);
		   for(int i=0; i<n1; i++)
			L[i] = arr[left + i];
		   for (int j = 0; j < n2; j++)
			R[j] = arr[mid + 1 + j];
		int i = 0, j = 0, k = left;
		while (i < n1 && j < n2) {
			if (L[i] < R[j])
				arr[k++] = L[i++];
			else
				arr[k++] = R[j++];
		}
		while (i < n1)
			arr[k++] = L[i++];
		while (j < n2)
			arr[k++] = R[j++];
	}
	void mergesort(vector<int>& arr, int left, int right) {
		if (left >= right) return;
		int mid = (left + right) / 2;
		mergesort(arr, left, mid);
		mergesort(arr, mid + 1, right);
		merge(arr, left, right);
	}
	void input() {
		cin >> N;
		inputarray.resize(N);

	    for(int i=0; i<N; i++)
			cin >> inputarray[i];
	}
	void output() {
	
		for (int i = 0; i < N; i++)
			cout << inputarray[i]<<'\n';
		cout << '\n';
	}
	void run() {
		input();
		mergesort(inputarray, 0, inputarray.size() - 1);
		output();
	}
};
class ex023 {
public:
	int N, M, count=0, s, e;
	vector<vector<int>> A; //벡터 쌍을 벡터로
	vector<bool> visit;
	void input() {
		cin >> N >> M;
		A.resize(N + 1);
		visit.resize(N + 1, false);
		for (int i = 0; i < M; i++) {
			cin >> s >> e;
			A[s].push_back(e);
			A[e].push_back(s);
		}
	}
	void dfs(int v) {
		if (visit[v] == true) return;

		visit[v] = true;

		for (int i : A[v]) {
			if (visit[i] == false)
				dfs(i);
		}
	}
	void process() {
		for (int i = 1; i < N + 1; i++) {
			if (visit[i] == false) {
				count++;
				dfs(i);
			}
		}
	}
	void output() {
		cout << count << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex024 {
public:
	int N;
	vector<int> prime = { 2,3,5,7 };
	bool isprime(int a) {
		for (int i = 2; i < a / 2; i++)
			if (a % i == 0)
				return false;
		return true;
	}
	void dfs(int number, int size) {
		if (size == N) {
			if (isprime(number))
				cout << number << '\n';
			else
				return;
		}
		else {
			if (isprime(number)) {
				for (int i = 1; i < 10; i++)
					dfs(number * 10 + i, size + 1);
			}
			else
				return;
		}
	}
	void run() {
		cin >> N;
		for (int i : prime)
			dfs(i, 1);
	}

};
class ex025 {
public:
	int N, M, count;
	bool result = false;
	vector<vector<int>> A;
	vector<bool> visit;
	void dfs(int v) {
		if (visit[v] == true) return;
		visit[v] = true;
		for (int i : A[v])
			if (visit[i] == false) {
				if (++count == 4) {
					result = true;
					return;
				}
				dfs(i);
			}
	}
	void run() {
		cin >> N >> M;
		A.resize(N);
		visit.resize(N);
		for (int i = 0; i < M; i++) {
			int e, s;
			cin >> e >> s;
			A[e].push_back(s);
			A[s].push_back(e);
		}
		for (int i = 0; i < N; i++) {
			count = 0;
			dfs(i);
			if (count >= 4)
				result = true;
		}
		cout << result << '\n';
	}

};

class ex027 {
public:
	int dx[4] = { -1, 1, 0, 0 };
	int dy[4] = { 0, 0, -1, 1 };
	vector<string> inputarray;
	vector<vector<int>> visit;
	queue<int> qy, qx;
	int N, M,result;
	void input() {
		cin >> N >> M;
		inputarray.resize(N);		
	
		for (int j = 0; j < N; j++) 
			cin >> inputarray[j];
		
		
		visit.resize(N);
		for (int i = 0; i < N; i++)
			visit[i].resize(M, 0);
	}
	void bfs() {
		qy.push(0);
		qx.push(0);
		visit[0][0] = 1;
	
		while (!qy.empty()&&!qx.empty()) {
			int xcur = qx.front();
			int ycur = qy.front();
			qx.pop(), qy.pop();
		

			for (int i = 0; i < 4; i++) {
				int xnext = xcur + dx[i];
				int ynext = ycur + dy[i];
				if(N > ynext && 0 <= ynext && M > xnext && 0 <= xnext)
				 if (inputarray[ynext][xnext] != '0' && !visit[ynext][xnext]) {
					qx.push(xnext); 
					qy.push(ynext);
					visit[ynext][xnext] = visit[ycur][xcur]+1;
					if (ynext == N - 1 && xnext == M - 1) return;
				 }
			}
		}
	}
	void process() {
		bfs();
		result = visit[N - 1][M - 1];
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex028 {
public:
	struct data {
		int node;
		int edge;
	};
	vector<vector<data>> Adj;
	vector<bool> visit;
	vector<int> distance;
	queue<int> q;
	int N,result;
	void input() {
		cin >> N;
		Adj.resize(N+1);
		visit.resize(N + 1, false);
		distance.resize(N + 1);
		
		for (int i = 1; i < N+1; i++) {
			int N1;
			cin >> N1;
			while (1) {
				data a;
				cin >> a.node;
				if (a.node == -1) 
					break;
				cin >> a.edge;
				Adj[N1].push_back(a);
				int N2 = a.node;
				a.node = N1;
				Adj[N2].push_back(a);
			}
		}
	}
	void bfs() {
		q.push(1);
		visit[1] = true;
		distance[1] = 0;

		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			for (data next : Adj[cur]) 
			 if(!visit[next.node]) {
				visit[next.node] = true;
				distance[next.node] = next.edge + distance[cur];
				q.push(next.node);
			}
		}
	}
	void process() {
		bfs();
		int max = 0;
		for (int i = 1; i < N + 1; i++)
			if (max < distance[i])
				max = distance[i];
		result = max;
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}

};
class ex029 {
public:
	int N,M,rcount=-1;
	vector<int> inputarray, request;
	vector<bool> result;
	void input() {
		cin >> N;
		inputarray.resize(N);
		request.resize(N);
		result.resize(N,false);
		for (int i = 0; i < N; i++)
			cin >> inputarray[i];
		cin >> M;
		for (int i = 0; i < M; i++)
			cin >> request[i];
	}
	void binary_search(int data,int left, int right) {
		if (left > right) { 
			result[++rcount] = false;
			return; 
		}
		int mid = (left + right) / 2;
		int pivot = inputarray[mid];

		if (pivot == data)
			result[++rcount] = true;
		else if (pivot > data)
			binary_search(data, left, mid - 1);
		else
			binary_search(data, mid+1, right);
	}
	void process() {
		std::sort(inputarray.begin(), inputarray.end());
		for(int i=0; i<M; i++)
			binary_search(request[i], 0, N - 1);
	}
	void output() {
		for (int i = 0; i < M; i++) {
			cout << result[i] << '\n';
		}
	}
	void run() {
		input();
		process();
		output();
	}

};
#include <stack>
class ex030 {
public:
	std::stack<int> s;
	int N, M,result=0;
	vector<int> inputarray;
	void input() {
		cin >> N >> M;
		inputarray.resize(N);
		for (int i = 0; i < N; i++)
			cin >> inputarray[i];
	}
	int is_sum() {
		std::stack<int> y = s;
		int max = 0;
		while (!y.empty()) {
			max += y.top();
			y.pop();
		}
		return max;
	}
	void reset() {
		while (!s.empty()) {
			s.pop();
		}
	}
	int is_blueray_number(int time) {
		reset();
		int number = 0;
		for (int i = 0; i < N; i++) {
			s.push(inputarray[i]);
			int max = is_sum();
			if (max == time) {
				number++;
				reset();
			}
			else if (max > time) {
				number++;
				i--;
				reset();
			}
			else {}
		}
		if (s.empty())
			return number;
		else
			return number + 1;
	}
	int is_time(int low, int high) {
		if (low > high) return -1;
		int mid = (low + high) / 2;
		int pivot = is_blueray_number(mid);
		if (pivot == M)
			return mid;
		else if (pivot > M) {
			return is_time(mid + 1, high);
		}
		else
		 return is_time(low, mid - 1);
	}
	void process() {
		int max = 0, sum=0;
		for (int i = 0; i < N; i++) {
			sum += inputarray[i];
			if (max < inputarray[i])
				max = inputarray[i];
		}
		int low = max;
		int high = sum;
		result=is_time(low, high);
		while (1) {
			result--;
			int num = is_blueray_number(result);
			if (num > M)
				break;
		}
		result++;
	}
	void output() {
		cout << '\n';
		cout << result<<'\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex031 {
public:
	int N, M,result=0;

	void input() {
		cin >> N;
		cin >> M;
	}
	int is_count(int k) {//k보다 작거나 같은 수가 몇개인가
		int sum = 0;
		for (int i = 1; i <= N; i++) {
			int add = k / i;
			if (add > N) add = N;
			sum += add;
		}
		return sum;
	}
	void binarysearch() {
		int low = 1, high = M;
		while (low <= high) {
			int mid = (low + high) / 2;
			int key = is_count(mid);
			if (key == M || key - 1 == M) {
				result = mid;
				return;
			}
			else if (key > M)
				high = mid - 1;
			else
				low = mid + 1;
		}
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		binarysearch();
		output();
	}
};
class ex032 {
public:
	int N, K,result = 0;
	vector<int> cointype;
	void input() {
		cin >> N >> K;
		cointype.resize(N);
		for (int i = 0; i < N; i++)
			cin >> cointype[i];
	}
	void process() {
		for (int i = N - 1; i >= 0; i--) {
			if (K > cointype[i]) {
				result+=(K/ cointype[i]);
				K %= cointype[i];
			}
			if (K == 0) return;
		}
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex033 {
public:
	int N,result=0;
	vector<int> card;
	struct compare {
		bool operator()(const int& t1, const int& t2) {
			return t1 > t2;
		}
	};
	priority_queue<int, vector<int>, compare> prqueue;
	void input() {
		cin >> N;
		card.resize(N);
		for (int i = 0; i < N; i++)
			cin >> card[i];
	}
	void process() {
		for (int i = 0; i < N; i++)
			prqueue.push(card[i]);
		while (!prqueue.empty()) {
			if (prqueue.size() == 1) break;
			int min1 = prqueue.top();
			prqueue.pop();
			int min2 = prqueue.top();
			prqueue.pop();
			int sum = min1 + min2;
			prqueue.push(sum);
			result += sum;
		}
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex034 {
public:
	vector<int> inputarray;
	int one = 0, zero = 0, N, result=0;
	struct compare {
		bool operator()(const int& t1, const int& t2) {
			return t1 < t2;
		}
	};
	struct compare2 {
		bool operator()(const int& t1, const int& t2) {
			return t1 > t2;
		}
	};
	priority_queue<int, vector<int>, compare> plusq;
	priority_queue<int, vector<int>, compare2> minusq;
	void input() {
		cin >> N;
		inputarray.resize(N);
		for (int i = 0; i < N; i++)
			cin >> inputarray[i];
	}
	void preprocess() {
		for (int i = 0; i < N; i++) {
			if (inputarray[i] > 1)
				plusq.push(inputarray[i]);
			else if (inputarray[i] == 1)
				one++;
			else if (inputarray[i] == 0)
				zero++;
			else
				minusq.push(inputarray[i]);
		}
	}
	void process() {
		while (!plusq.empty()) {
			if (plusq.size() == 1) { result += plusq.top(); break; }
			int max1 = plusq.top(); plusq.pop();
			int max2 = plusq.top(); plusq.pop();
			result += (max1 * max2);
		}
		while (!minusq.empty()) {
			if (minusq.size() == 1) {
				if (zero > 0) {}
				else 
				 result += minusq.top(); 
				break;
			}
			int min1 = minusq.top(); minusq.pop();
			int min2 = minusq.top(); minusq.pop();
			result += (min1 * min2);
		}
		result += one;
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		preprocess();
		process();
		output();
	}
};
class ex035 {
public:
	int N, result = 0;
	vector<pair<int, int>> inputarray;
	struct compare {
		bool operator()(const pair<int, int>& t1, const pair<int, int>& t2) {
			if (t1.second == t2.second)
				return t1.first > t2.first;
			else
				return t1.second > t2.second;
		}
	};
	priority_queue<pair<int, int>, vector<pair<int, int>>, compare> prqueue;
	void input() {
		cin >> N;
		inputarray.resize(N);
		for (int i = 0; i < N; i++) {
			cin >> inputarray[i].first >> inputarray[i].second;
			prqueue.push(pair<int, int>(inputarray[i].first, inputarray[i].second));
		}
	}
	void process() {
		int usein = 0;
		while (!prqueue.empty()) {
			pair<int, int> a = prqueue.top(); prqueue.pop();
			if (usein <= a.first) {
				usein = a.second;
				result++;
			}
		}
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
#include <sstream>
#include <string>
class ex036 {
public:
	int result=0;
	string str, coin;
	vector<string> buffer;
	vector<int> data;
	void run() {
		cin >> str;
		stringstream ss(str);
		while (getline(ss, coin, '-')) {
			  buffer.push_back(coin);
		}
		for(int i=0; i<buffer.size(); i++){
			stringstream aa(buffer[i]);
			int add = 0;
			while (getline(aa, coin, '+')) {
				add += stoi(coin);
			}
			data.push_back(add);
		}
		result = data[0];
		for (int i = 1; i < data.size(); i++)
			result -= data[i];
		cout << result << '\n';
	}

};
class ex037 {
public:
	vector<bool> prime;
	int start, end;
	void input() {
		cin >> start >> end;
		prime.resize(end + 1, true);
	}
	bool isprime(int number) {
		bool check = true;
		for (int i = 2; i < number / 2; i++)
			if (number % i == 0)
				check = false;
		return check;
	}
	void eratostenes_s_che() {
		for (int i = 2; i <= end; i++) {
			if (isprime(i)) {
				for (int j = 2; j <= end / i; j++)
					prime[i * j] = false;
			}
		}
	}
	  void process() {
		  prime[0] = prime[1] = false;
		  eratostenes_s_che();
	  }
	  void output() {
		  cout << '\n';
		  for (int i = start; i <= end; i++) {
			  if(prime[i]==true)
			  cout << i << '\n';
		  }
	  }
	  void run() {
		  input();
		  process();
		  output();
	  }
};
class ex038 {
public:
	int M, N, result = 0;
	void input() {
		cin >> M >> N;
	}
	bool isprime(int number) {
		bool check = true;
		for (int i = 2; i <= number/2; i++)
			if (number % i == 0)
				check = false;
		return check;
	}
	void process() {
		for (int i = 2; i <= N; i++)
			if (isprime(i)) {
				int tmp = i;
				tmp *= i;
				while (tmp <= N) {
					result++;
					tmp *= i;
				}
			}
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
#include <stack>
class ex039 {
public:
	int N, result=0;
	bool check;
	queue<int> q;
	bool isprime(int number) {
		check = true;
		for (int i = 2; i <= number / 2; i++)
			if (number % i == 0)
				check = false;
		return check;
	}
	int pow(int number) {
		int sum = 1;
		while (number > 0) {
			sum *= 10;
			number--;
		}
		return sum;
	}
	bool isfelin(int number) {  
		int tmp = number;
		while (number > 0) {
			int buffer=number % 10;
			number /= 10;
			q.push(buffer);
		}
		int sum = 0;
        while(!q.empty()){
			sum+=q.front()* pow(q.size() - 1);
			q.pop();
		}
		if (tmp == sum)
			return true;
		else
			return false;
	}
	void run() {
		cin >> N;
		int number = N;
		while (1) {
			if (isprime(number))
				if (isfelin(number)) {
					result = number;
					break;
				}
			number++;
		}
		cout << '\n';
		cout << result << '\n';
	}
};
class ex040 {
public:
	int min, max, result=0;
	vector<bool> isnumber;
	void input() {
		cin >> min >> max;
		isnumber.resize(max + 1,true);
		for (int i = 0; i < min; i++)
			isnumber[i] = false;
	}
	bool isprime(int number) {
		bool check = true;
		for (int i = 2; i <= number / 2; i++)
			if (number % i == 0)
				check = false;
		return check;
	}
	void iseratos() {
		for (int i = min; i <= max; i++) {
			if (i>=2&&isprime(i)) {
				for (int j = i * i; j <= max; j = j * i) {
					isnumber[j] = false;
			  }
			}
		}
	}
	void output() {
		for (int i = min; i <= max; i++)
			if (isnumber[i] == true)
				result++;
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		iseratos();
		output();
	}

};
class ex041 {
public:
	int N, result = 0;
	vector<int> oil;
	bool isprime(int number) {
		bool check = true;
		for (int i = 2; i < number / 2; i++) {
			if (number % i == 0)
				check = false;
		  }
		return check;
	}
	void run() {
		cin >> N;
		oil.resize(N + 1);
		for (int i = 1; i <= N; i++)
			oil[i] = i;

		for (int i = 2; i <= N; i++) {
			if (isprime(i)) {
				for (int j = 1; j <= N/i; j++)
					oil[j*i] -= oil[j*i] / i;
			}
		}
		result = oil[N];
		cout << '\n';
		cout << result << '\n';
	}

};
class ex042 {
public:
	int N, gcd;
	vector<pair<int, int>> test;
	vector<int> result;
	int ucle(int A, int B){
		int cmod, nmod,number;
		number = B;
		cmod = A;
		while (1) {
			nmod = number % cmod;
			if (nmod == 0)
				return cmod;
			number = cmod;
			cmod = nmod;
	    }
	}
	void run() {
		cin >> N;
		test.resize(N);
		result.resize(N);
		for (int i = 0; i < N; i++) {
			cin >> test[i].first >> test[i].second;
			int gcd = ucle(test[i].first, test[i].second);
			result[i] = test[i].first * test[i].second / gcd;
		}
		for (int i = 0; i < N; i++)
			cout << result[i] << '\n';
	}
};
class ex043 {
public:
	long int A, B, result;
	int gcd() {
		long int number = B, cur = A;
		long int next;
		while (1) {
			next = number % cur;
			if (next == 0)
				return cur;
			number = cur;
			cur = next;
		}
	}
	void run() {
		cin >> A >> B;
		result = gcd();
		while (result > 0) {
			cout << 1;
			result--;
		}
	}
	
};
class ex044 {
public:
	int N, result=1;
	struct data {
		int a, b, p, q;
	};
	vector<data> inputarray;
	int gcd(int a, int b){
		int number = a, cur = b;
		int next;
		while (1) {
			next = number % cur;
			if (next == 0)
				return cur;
			number = cur;
			cur = next;
		}
	}
	void run() {
		cin >> N;
		inputarray.resize(N-1);
		for (int i = 0; i < N-1; i++)
			cin >> inputarray[i].a >> inputarray[i].b >> inputarray[i].p >> inputarray[i].q;
	    
		for (int i = 0; i < N-1; i++) {
			int buffer = inputarray[i].p * inputarray[i].q /gcd(inputarray[i].p , inputarray[i].q);
			result = result*buffer/gcd(result, buffer);
		}
		for (int i = 0; i < N-1; i++) {
			cout << result * inputarray[i].q / inputarray[i].p << " ";
		}
		cout << result;
	}
};
class ex044_2 {
public:
	vector<vector<int>> matrix;
	vector<vector<int>> adj;
	vector<bool> visit;
	int N, result = 1;
	void input() {
		cin >> N;
		matrix.resize(N);
		for (int i = 0; i < N; i++)
			matrix[i].resize(N);
		adj.resize(N);
	    visit.resize(N,false);
	
		int timer = N;
		while (--timer>0){
			int y, x, p, q;
			cin >> y >> x >> p >> q;      //y -p, x-q
			matrix[y][x] = p;
			matrix[x][y] = q;
			adj[y].push_back(x);
			adj[x].push_back(y);

		}
	}
	int gcd(int a, int b) {
		int buf, cbuf, nbuf;
		buf = b; cbuf = a;
		while (1) {
			nbuf = buf % cbuf;
			if (nbuf == 0) {
				return cbuf;
			}
			buf = cbuf;
			cbuf = nbuf;
		}
	}
	int lcm(int a, int b) {
		return a * b / gcd(a, b);
	}
	void dfs(int vertex){
			if (visit[vertex] == true) return;
			visit[vertex] = true;
			for (int h : adj[vertex]) {
			   if (visit[h] == false) { //연결된 인접노드에 방문한적이 없으면 dfs방문
				
						int p = matrix[vertex][h];
						int q = matrix[h][vertex];
						int buf = lcm(p, q);
						result = lcm(buf, result);
						dfs(h);
					}
					  
				}
	}
	void process() {
		for (int i = 0; i < N; i++) {
			if (visit[i] == false)
				dfs(i);
		}
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex046 {
public:
	int N, M, K, X;
	vector<vector<int>> adj;
	vector<int> visit;
	vector<int> result;
	queue<int> q;
	void input() {
		cin >> N >> M >> K >> X;
		adj.resize(N + 1);
		visit.resize(N + 1,-1);
		for (int i = 0; i < M; i++) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
	}
	void bfs() {
		q.push(X);
		visit[X] = 0;
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			if (visit[cur] == K) {
				result.push_back(cur);
			}
			for (int i : adj[cur]) {
				if (visit[i] == -1) {
					visit[i] = visit[cur]+1;
					q.push(i);
				}
			}
		}
	}
	void output() {
		if (result.empty()) {
			cout << -1;
			return;
		}
		while (!result.empty()) {
			cout << result.back();
			result.pop_back();
		}
	}
	void run() {
		input();
		bfs();
		output();
	}

};
class ex047 {
public:
	int N, M;
	vector<bool> visit;
	vector<int> credit;
	queue<int> q,result;
	vector<vector<int>> adj;
	void input() {
		cin >> N >> M;
		visit.resize(N + 1, false);
		credit.resize(N + 1, 0);
		adj.resize(N + 1);
		for (int i = 0; i < M; i++) {
			int p, q;
			cin >> p >> q;
			adj[p].push_back(q);
		}
	}
	void visit_irr() {
		for (int i = 0; i <= N; i++)
			visit[i] = false;
	}
	void bfs(int number) {
		q.push(number);
		visit[number] = true;
		credit[number]++;
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			for (int i : adj[cur]) {
				if (visit[i] == false) {
					visit[i] = true;
					credit[i]++;
					q.push(i);
				}
			}
		}
	}
	void process() {
		for (int i = 1; i <= N; i++) {
			visit_irr();
			bfs(i);
		}
	}
	void output() {
		int max = 0;
		for (int i = 1; i <= N; i++)
			if (credit[i] > max)
				max = credit[i];
		for (int i = 1; i <= N; i++)
			if (credit[i] == max)
				result.push(i);
		while (!result.empty()) {
			cout << result.front() << " ";
			result.pop();
		}
	}
	void run() {
		input();
		process();
		output();
	}

};
class ex048 {
public:
	vector<vector<vector<int>>> adj;
	vector<vector<char>> visit;
	int T;
	vector<int> N, M;
	vector<bool> isanswer;
	void input() {
		cin >> T;
		N.resize(T);
		M.resize(T);
		isanswer.resize(T,true);
		visit.resize(T);
		adj.resize(T);
		for (int i = 0; i < T; i++) {
			cin >> N[i] >> M[i];
			adj[i].resize(N[i]+1);
			visit[i].resize(N[i] + 1,'W');
			for (int j = 0; j < M[i]; j++) {
				int a, b;
				cin >> a >> b;
				adj[i][a].push_back(b);
				adj[i][b].push_back(a);
			}
		}
	}
	void dfs(int t, int cur) {
			for (int next : adj[t][cur]) {
				if (visit[t][next] == 'W') {
					if (visit[t][cur] == 'R')
						visit[t][next] = 'B';
					else
						visit[t][next] = 'R';
					dfs(t, next);
				}
				else {
					if (visit[t][next] == visit[t][cur]) {
						isanswer[t] = false;
						return;
					}
				}
			}
	}
	void process() {
		for (int i = 0; i < T; i++) {
			visit[i][1] = 'R';
			if (isanswer[i]) {
				for(int j=1; j<=N[i]; j++)
				  dfs(i, j);
			}
		}
	}
	void output() {
		for (int i = 0; i < T; i++) {
			if (isanswer[i])
				cout << "YES" << '\n';
			else
				cout << "NO" << '\n';
		}
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex049 {
public:
	vector<int> burket;
	vector<vector<vector<bool>>> visit;
	struct adj {
		int cur;
		int next;
	};
	struct in_water {
		int A;
		int B;
		int C;
	}iw = {0,0,10};
	vector<adj> water_case = { {3,1},{3,2},{1,2},{1,3},{2,1},{2,3} };
	queue<in_water> q;
	struct compare {
		bool operator()(const int& t1, const int& t2) {
			return t1 > t2;
		}
	};
	priority_queue<int, vector<int>, compare> result;
	void input() {
		burket.resize(4);
		cin >> burket[1] >> burket[2] >> burket[3];
		visit.resize(burket[1]+1);
		for (int i = 0; i <= burket[1]; i++) {
			visit[i].resize(burket[2]+1);
			for(int j=0; j<=burket[2]; j++)
			visit[i][j].resize(burket[3]+1, false);
		}
	}
	void bfs() {
		q.push(iw);
		while (!q.empty()) {
			in_water cw = q.front();
			q.pop();
			for (int k = 0; k < 6; k++) {
				iw = cw;
				int water[4] = { 0,iw.A, iw.B, iw.C };
				int cur = water_case[k].cur;
				int next = water_case[k].next;
				int movewater = burket[next] - water[next];
				if (movewater <= water[cur]) {
					water[next] += movewater;
					water[cur] -= movewater;
				}
				else {
					water[next] += water[cur];
					water[cur] = 0;
				}
				iw.A = water[1];
				iw.B = water[2];
				iw.C = water[3];
				if (visit[iw.A][iw.B][iw.C] == false) {
					visit[iw.A][iw.B][iw.C] = true;
					q.push(iw);
					if (iw.A == 0)
						result.push(iw.C);
				}
			}
		}
	}
	void output() {
		while (!result.empty()) {
			cout << result.top() << " ";
			result.pop();
		}
	}
	void run() {
		input();
		bfs();
		output();
	}
};
class ex050 {
public:
	struct oper {
		int select;
		int v1;
		int v2;
	};
	vector<oper> op;
	int N, M;
	vector<bool> result;
	vector<int> uf;
	void input() {
		cin >> N >> M;
		uf.resize(N+1);
		for (int i = 0; i <= N; i++)
			uf[i] = i;
		op.resize(M);
		uf.resize(N + 1);
		for (int i = 0; i < M; i++)
			cin >> op[i].select >> op[i].v1 >> op[i].v2;
	}
	void uni(int v1, int v2) {
		uf[v2] = v1;
	}
	int isrep(int v1) {
		if (uf[v1] == v1)
			return v1;
		else
			return uf[v1] = isrep(uf[v1]);
	}
	void check(int v1, int v2) {
		if (isrep(v1) == isrep(v2))
			result.push_back(true);
		else
			result.push_back(false);
	}
	void process() {
		for (int i = 0; i < M; i++) {
			if (op[i].select)
				check(op[i].v1, op[i].v2);
			else
				uni(op[i].v1, op[i].v2);
		}
	}
	void output() {
		for (int i = 0; i < result.size(); i++) {
			if (result[i])
				cout << "yes" << '\n';
			else
				cout << "no" << '\n';
		}
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex051 {
public:
	vector<vector<int>> path;
	int N, M;
	bool result=true;
	vector<int> plan,grape,rank;
	void input() {
		cin >> N;
		cin >> M;
		rank.resize(N + 1);
		path.resize(N + 1);
		for (int i = 0; i <= N; i++)
			path[i].resize(N + 1);
		grape.resize(N + 1);
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				cin >> path[i][j];
		plan.resize(M);
		for (int i = 1; i <= N; i++)
			grape[i] = i;
		for (int i = 0; i < M; i++)
			cin >> plan[i];
	}
	int find(int n) {
		if (grape[n] == n)
			return n;
		else
			return grape[n] = find(grape[n]);
	}
	void unionset(int n1, int n2) {
		int R1 = find(n1);
		int R2 = find(n2);
		if (R1 != R2) {
			if (rank[R1] < rank[R2])
				grape[R1] = R2;
			else if (rank[R1] > rank[R2])
				grape[R2] = R1;
			else {
				grape[R2] = R1;
				rank[R1]++;
			}
		}
	}
	bool linkcheck(int n1, int n2) {
		int R1 = find(n1);
		int R2 = find(n2);
		
		if (R1 == R2)
			return true;
		else
			return false;
	}
	void process() {
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
				if (path[i][j] == 1)
					unionset(i, j);
		for (int i = 1; i < M; i++) {
			bool check = linkcheck(plan[i - 1], plan[i]);
			result = result && check;
		}
	}
	void output() {
		if (result)
			cout << "yes" << '\n';
		else
			cout << "no" << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex052 {
public:
	vector<bool> result;
	vector<int> grape, trueman,rank;
	vector<vector<int>> party;
	int N, M, T, answer=0;

	void input() {
		cin >> N >> M;
		cin >> T;
		trueman.resize(T);
		for (int i = 0; i < T; i++)
			cin >> trueman[i];
		grape.resize(N + 1);
	    rank.resize(N + 1);
		for (int i = 1; i <= N; i++)
			grape[i] = i;
		party.resize(M);
		for (int i = 0; i < M; i++) {
			int count;
			cin >> count;
			for (int t = 0; t < count; t++) {
				int buffer;
				cin >> buffer;
				party[i].push_back(buffer);
			}
		}
	}
	int find(int n) {
		if (n == grape[n])
			return n;
		else
			return grape[n] = find(grape[n]);
	}
	void unionset(int n1, int n2) {
		int R1 = find(n1);
		int R2 = find(n2);
		if (R1 != R2) {
			if (rank[R1] < rank[R2])
				grape[R1] = R2;
			else if(rank[R1] > rank[R2])
				grape[R2] = R1; 
			else {
				rank[R1]++;
				grape[R2] = R1;
			}
		}
	}
	void check(int n1, int n2) {
		int R1 = find(n1);
		int R2 = find(n2);
		if (R1 == R2)
			result.push_back(true);
		else
			result.push_back(false);
	}
	void grapeirr() {
		for (int i = 1; i <= N; i++)
			grape[i] = i;
	}
	void resultcalculation() {
		bool sumcheck = false;
		while (!result.empty()) {
			sumcheck = sumcheck || result.back();
			result.pop_back();
		}
		if (!sumcheck)
			answer++;
	}
	void process() {
		for (int i = 0; i < M; i++) {
			grapeirr();
			for (int j = 1; j < party[i].size(); j++)
				unionset(party[i][j - 1], party[i][j]);
			for (int j = 0; j < T; j++)
				check(trueman[j], party[i][0]);
			resultcalculation();
		}
	}
	void output() {
		cout << answer << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex053 {
public:
	int N, M;
	queue<int> q;
	vector<vector<int>> adj;
	vector<int> D;
	void input() {
		cin >> N >> M;
		adj.resize(N+1);
		D.resize(N+1);
		for (int i = 0; i < M; i++) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
			D[b]++;
		}
	}
	void indegree() {
		for (int i = 1; i <= N; i++)
			if (D[i] == 0) 
				q.push(i);

		while (!q.empty()) {
			int cur= q.front();
			q.pop();
			cout << cur << " ";

			for (int next : adj[cur]){
				if(--D[next]==0)
				  q.push(next);
			}
		}
	}
	void run() {
		input();
		indegree();
	}
};
class ex054 {
public:
	int N;
	vector<int> time,D,sumtime;
	vector<vector<int>> adj;
	queue<int> q;
	void input() {
		cin >> N;
		time.resize(N + 1);
		sumtime.resize(N + 1);
		D.resize(N + 1);
		adj.resize(N + 1);
		for (int i = 1; i <= N; i++) {
			cin >> time[i];
			int p;
			while (1) {
				cin >> p;
				if (p == -1)
					break;
				else {
					adj[p].push_back(i);
					D[i]++;
				}
			}
		}
	}
	void topology() {
		for (int i = 1; i <= N; i++)
			if (D[i] == 0)
				q.push(i);
		while (!q.empty()) {
			int cur = q.front();
			sumtime[cur] += time[cur];
			q.pop();
			for (int next : adj[cur]) {
				sumtime[next] = max(sumtime[next], sumtime[cur]);
				if (--D[next] == 0) {
					q.push(next);
				}
			}
		}
	}
	void process() {
		topology();
	}
	void output() {
		for (int i = 1; i <= N; i++)
			cout << sumtime[i] << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex055 {
public:
	int N, M, start, end, result = 1;

	struct path {
		int node;
		int distanse;
	};

	vector<vector<path>> adj, radj;
	vector<int> D, RD, ST, RST;
	queue<path> q;

	void input() {
		cin >> N >> M;
		adj.resize(N + 1);
		radj.resize(N + 1);
		D.assign(N + 1, 0);
		RD.assign(N + 1, 0);
		ST.assign(N + 1, 0);
		RST.assign(N + 1, 0);

		for (int i = 0; i < M; i++) {
			int a, b, c;
			cin >> a >> b >> c;
			adj[a].push_back({ b, c });
			radj[b].push_back({ a, c });
			D[b]++;
			RD[a]++;
		}
		cin >> start >> end;
	}

	void topology_sort() {
		queue<int> q;
		q.push(start);

		while (!q.empty()) {
			int cur = q.front();
			q.pop();

			for (path next : adj[cur]) {
				if (ST[next.node] < ST[cur] + next.distanse) {
					ST[next.node] = ST[cur] + next.distanse;
				}

				if (--D[next.node] == 0) {
					q.push(next.node);
				}
			}
		}
	}

	void reverse_topology_sort() {
		topology_sort();
		int longtime = ST[end];

		queue<int> q;
		q.push(end);

		while (!q.empty()) {
			int cur = q.front();
			q.pop();

			for (path pre : radj[cur]) {
				if (ST[pre.node] + pre.distanse == ST[cur]) {
					result++;

					if (--RD[pre.node] == 0) {
						q.push(pre.node);
					}
				}
			}
		}
	}

	void output() {
		cout << ST[end] << '\n' << result << '\n';
	}

	void run() {
		input();
		reverse_topology_sort();
		output();
	}
};
#include <limits.h>
class ex056 {
public:
	int V, E,start;
	struct nd {
		int node;
		int distance;
	};
	struct compare {
		bool operator()(const nd& t1, const nd& t2) {
			return t1.distance > t2.distance;
		}
	};
	vector<vector<nd>> adj;
	vector<int> D;
	vector<bool> visit;
	priority_queue<nd, vector<nd>, compare> q;
	void input() {
		cin >> V >> E;
		cin >> start;
		D.resize(V + 1, INT_MAX);
		adj.resize(V + 1);
		visit.resize(V + 1, false);
		D[start] = 0;
		for (int i = 0; i < E; i++) {
			int u, v, w;
			cin >> u >> v >> w;
			adj[u].push_back({ v,w });
		}
	}
	void daijkstra() {
		q.push({ start,0 });
		while (!q.empty()) {
			nd cur = q.top();
			q.pop();
			if (cur.distance > D[cur.node]) continue;
			for (nd next : adj[cur.node]) {
				if (D[next.node] >= D[cur.node] + next.distance) {
					D[next.node] = D[cur.node] + next.distance;
					q.push({ next.node, D[next.node] });
				}
			}
		}
	}
	void output() {
		for (int i = 1; i <= V; i++) {
			if (D[i] == INT_MAX)
				cout << "INF"<<'\n';
			else
				cout << D[i]<<'\n';
		}
	}
	void run() {
		input();
		daijkstra();
		output();
	}

};
class ex057 {
public:
	int N, M,start,end;
	struct trip {
		int n;
		int w;
	};
	struct compare {
		bool operator()(const trip& t1, const trip& t2) {
			return t1.w > t2.w;
		}
	};
	priority_queue <trip, vector<trip>, compare> pq;
	vector<vector<trip>> adj;
	vector<int> d;
	
	void input() {
		cin >> N;
		cin >> M;
		adj.resize(N+1);
		d.resize(N+1,INT_MAX);
		for (int i = 0; i < M; i++) {
			int s, e, w;
			cin >> s >> e >> w;
			adj[s].push_back({ e,w });
		}
		cin >> start >> end;
		d[start] = 0;
	}
	void daijstra() {
		pq.push({ start,0 });
		while (!pq.empty()) {
			trip cur = pq.top();
			pq.pop();
			for (trip next : adj[cur.n]) {
				if (d[next.n] > d[cur.n] + next.w) {
					d[next.n] = d[cur.n] + next.w;
					pq.push({ next.n, d[next.n]});
				}
			}
		}
	}
	void output() {
		cout << '\n';
		cout << d[end] << '\n';
	}
	void run() {
		input();
		daijstra();
		output();
	}
};
class ex058 {
public:
	int N, M, k,start =1;
	struct grape {
		int n;
		int w;
	};
	struct compare {
		bool operator()(const grape& t1, const grape& t2) {
			return t1.w > t2.w;
		}
	};
	struct compare2 {
		bool operator()(const int& t1, const int& t2) {
			return t1 > t2;
		}
	};
	priority_queue<grape, vector<grape>, compare> pq;
	vector<priority_queue<int, vector<int>, compare2>> d;
	vector<vector<grape>> adj;
	vector<int> E;

	void input() {
		cin >> N >> M >> k;
		d.resize(N + 1);
		for (int i = 1; i <= N; i++)
			d[i].push(INT_MAX);
		adj.resize(N + 1);
		E.resize(N + 1,0);
		for (int i = 0; i < M; i++) {
			int s, e, w;
			cin >> s >> e >> w;
			adj[s].push_back({ e,w });
			E[e]++;
		}
		d[start].push(0);
	}
	int iszeroE() {
		int sum = 0;
		for (int i = 1; i <= N; i++)
			sum += E[i];
		return sum;
	}
	void daijkstra() {
		pq.push({ start,0 });
		while (iszeroE()!=0) {
			grape cur = pq.top();
			pq.pop();
			for (grape next : adj[cur.n]) {
				E[next.n]--;
				vector<priority_queue<int, vector<int>, compare2>> buf = d;
				while (buf[cur.n].top() != INT_MAX) {
					d[next.n].push(buf[cur.n].top() + next.w);
					buf[cur.n].pop();
					pq.push({ next.n, buf[cur.n].top() + next.w });
				}	
			}  
		}
	}
	void output() {
		cout << '\n';
		for (int i = 1; i <= N; i++) {
			for (int h = 1; h < k; h++) {
				if(!d[i].empty())
				 d[i].pop();
			}
			if (d[i].empty() || d[i].top() == INT_MAX)
				cout << -1 << '\n';
			else
				cout << d[i].top()<<'\n';
		}
	}
	 void run(){
		 input();
		 daijkstra();
		 output();
	 }
};
class ex059 {
public:
	bool isminusw = false;
	int N, M,start = 1;
	struct edge {
		int n;
		int w;
	};
	vector<vector<edge>> adj;
	vector<int> d;
	
	void input() {
		cin >> N >> M;
		adj.resize(N + 1);
		d.resize(N + 1, INT_MAX);
		for (int i = 0; i < M; i++) {
			int s, e, w;
			cin >> s >> e >> w;
			adj[s].push_back({ e,w });
		}
		d[start] = 0;
	}
	void bellmanford() {
		for (int i = 1; i < N; i++) {
			for (int k = 1; k <= N; k++) {
				for (edge next : adj[k]) {
					if (d[next.n] > d[k] + next.w) {
						d[next.n] = d[k] + next.w;
					}
				}
			}
		}
		for (int k = 1; k <= N; k++) {
			for (edge next : adj[k]) {
				if (d[next.n] > d[k] + next.w) {
					isminusw = true;
				}
			}
		}
	}
	void output() {
		cout << '\n';
		if (isminusw)
			cout << -1 << '\n';
		else {
			for (int i = start+1; i <= N; i++) {
				if (d[i] == INT_MAX)
					cout << -1 << '\n';
				else
					cout << d[i] << '\n';
			}
		}
	}
	void run() {
		input();
		bellmanford();
		output();
	}
};
class ex060{
public: 
	bool isminus=false;
	int N, M, start, end;
	struct edge {
		int s;
		int e;
		int w;
	};
    vector<edge> E;
	vector<int> P, MO;
	void input() {
		cin >> N >> start >> end >> M;
		E.resize(M);
		P.resize(N);
		MO.resize(N, -INT_MAX);
	    
		for (int i = 0; i < M; i++) 
			cin >> E[i].s >> E[i].e >> E[i].w;
		     
		for (int i = 0; i < N; i++)
			cin >> P[i];
	}
	void bellmanford() {
		MO[start] = P[start];
		for (int i = 1; i < N; i++) {
			for (int j = 0; j < M; j++) {
				int cur = E[j].s;
				int next = E[j].e;
				int loss = E[j].w;
				if (MO[next] < MO[cur] + P[next] - loss)
					MO[next] = MO[cur] + P[next] - loss;
			}
		}
		
		for (int j = 0; j < M; j++) {
			int cur = E[j].s;
			int next = E[j].e;
			int loss = E[j].w;
			if (MO[next] < MO[cur] + P[next] - loss)
				isminus = true;
		}
		
	}
	void output() {
		cout << '\n';
		if (isminus)
			cout << "Gee" << '\n';
		else {
		    if (MO[end]==-INT_MAX)  
		    	cout << "gg" << '\n';
			else
				cout << MO[end] << '\n';
		}
	}
	void run() {
		input();
		bellmanford();
		output();
	}
};
class ex061 {
public:
	int N, M;
	vector<vector<int>> D;

	void input() {
		cin >> N >> M;
		D.resize(N+1, vector<int>(N+1, INT_MAX));
		for (int i = 0; i < M; i++) {
			int s, e, w;
			cin >> s >> e >> w;
			D[s][e] =min(D[s][e], w);
		}
		for (int i = 1; i <= N; i++)
			D[i][i] = 0;
    }
	void ploydwarshall() {
		for (int k = 1; k <= N; k++)
			for (int i = 1; i <= N; i++)
				for (int j = 1; j <= N; j++)
					if (D[i][k] != INT_MAX && D[k][j] != INT_MAX) {
						if (D[i][k] + D[k][j] < D[i][j])
							D[i][j] = D[i][k] + D[k][j];
					}
	}
	void output() {
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				if (D[i][j] == INT_MAX)
					cout << 0 << " ";
				else
					cout << D[i][j] << " ";
			}
			cout << '\n';
		}
	}
	void run() {
		input();
		ploydwarshall();
		output();
	}
};
class ex062 {
public:
	int N;
	vector<vector<int>> grape;
	void input() {
		cin >> N;
		grape.resize(N + 1, vector<int>(N + 1,0));
		for (int i = 1; i <= N; i++)
			for (int j = 1; j <= N; j++)
			  cin >> grape[i][j];
	}
	void ploydwarshall() {
		for (int k = 1; k <= N; k++)
			for (int i = 1; i <= N; i++)
				for (int j = 1; j <= N; j++) {
					if (grape[i][k] == 1 && grape[k][j]==1)
						grape[i][j] = 1;
				}
	}
	void output() {
		for (int i = 1; i <= N; i++) {
			cout << '\n';
			for (int j = 1; j <= N; j++)
				cout << grape[i][j]<<" ";
		}
	}
	void run() {
		input();
		ploydwarshall();
		output();
	}
};
class ex063 {
public:
	int N, M,result;
	vector<vector<int>> grape;
	vector<int> sum;
	void input() {
		cin >> N >> M;
		grape.assign(N + 1, vector<int>(N + 1, INT_MAX));
		for (int i = 1; i <= N; i++)
			grape[i][i] = 0;
		sum.assign(N + 1,0);
		for (int i = 0; i < M; i++) {
			int a, b;
			cin >> a >> b;
			grape[a][b] = 1;
			grape[b][a] = 1;
		}
	}
	void ploydwarshall() {
		for (int k = 1; k <= N; k++)
			for (int i = 1; i <= N; i++)
				for (int j = 1; j <= N; j++)
					if (grape[i][k] != INT_MAX && grape[k][j] != INT_MAX) //부분경로가 성립하는가?
						grape[i][j] = min(grape[i][k] + grape[k][j], grape[i][j]); //부분경로가 최단경로인가?
	}
	void process() {
		ploydwarshall();
		result = INT_MAX;
		for (int i = 1; i <= N; i++) {
			for (int j = 1; j <= N; j++) {
				sum[i] += grape[i][j];
			}
			result = min(result, sum[i]);
		}
	}
	void output() {
		cout << '\n';
		for(int i=1; i<=N; i++)
			if (result == sum[i]) {
				cout << i << '\n';
				return;
			}
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex065 {
public:
	bool iso = false;
	int N, M, cw = 0, ecount = 0, linkcount = 0, nodecount = 0;;
	vector<vector<int>> grape;
	vector<vector<int>> rank, vrank,nrank;
	struct xy {
		int y;
		int x;
	};
	vector<vector<xy>> visit;
	vector<vector<bool>> node;
	struct edge {
		xy s;
		xy e;
		int w;
	};
	struct compare {
		bool operator()(const edge& t1, const edge& t2) {
			return t1.w > t2.w;
		}
	};
	priority_queue<edge, vector<edge>, compare> E;
	vector<vector<xy>> P;
	void input() {
		cin >> N >> M;
		grape.resize(N, vector<int>(M, 0));
		visit.resize(N, vector<xy>(M));
		rank.resize(N, vector<int>(M, 0));
		vrank.resize(N, vector<int>(M, 0));
		node.resize(N, vector<bool>(M,false));
		nrank.resize(N, vector<int>(M, 0));
		P.resize(N, vector<xy>(M));

		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++) {
				P[i][j].y = i;
				P[i][j].x = j;
				visit[i][j].y = i;
				visit[i][j].x = j;
			}
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++) {
				cin >> grape[i][j];
			}
	}
	int yfind(xy n, vector<vector<xy>>& P) {
		if (P[n.y][n.x].y == n.y)
			return n.y;
		else
			return P[n.y][n.x].y = yfind(P[n.y][n.x], P);
	}
	int xfind(xy n, vector<vector<xy>>& P) {
		if (P[n.y][n.x].x == n.x)
			return n.x;
		else
			return P[n.y][n.x].x = xfind(P[n.y][n.x], P);
	}
	void unionset(xy n1, xy n2, vector<vector<xy>>& P, vector<vector<int>>& rank) {
		xy r1, r2;
		r1.y = yfind(n1, P);
		r1.x = xfind(n1, P);
		r2.y = yfind(n2, P);
		r2.x = xfind(n2, P);
		if (r1.y != r2.y || r1.x != r2.x) {
			if (rank[r1.y][r1.x] > rank[r2.y][r2.x]) {
				P[r2.y][r2.x].y = r1.y;
				P[r2.y][r2.x].x = r1.x;
			}
			else if (rank[r1.y][r1.x] < rank[r2.y][r2.x]) {
				P[r1.y][r1.x].y = r2.y;
				P[r1.y][r1.x].x = r2.x;
			}
			else {
				P[r2.y][r2.x].y = r1.y;
				P[r2.y][r2.x].x = r1.x;
				rank[r1.y][r1.x]++;
			}
		}
	}
	bool isborder_down(xy a) {
		bool check = false;
		if (a.y + 1 < N) {
			if (grape[a.y + 1][a.x] == 0) {
				check = true;
			}
		}
		return check;
	}
	bool isborder_up(xy a) {
		bool check = false;
		if (a.y - 1 >= 0) {
			if (grape[a.y - 1][a.x] == 0) {
				check = true;
			}
		}
		return check;
	}
	bool isborder_left(xy a) {
		bool check = false;
		if (a.x - 1 >= 0) {
			if (grape[a.y][a.x - 1] == 0) {
				check = true;
			}
		}
		return check;
	}
	bool isborder_right(xy a) {
		bool check = false;
		if (a.x + 1 < M) {
			if (grape[a.y][a.x + 1] == 0) {
				check = true;
			}
		}
		return check;
	}
	void leftgo(xy a) {
		if (!isborder_left(a)) return;
		edge o;
		o.s = a;
		int buf = 1;
		int distance = -1;
		while (a.x - buf >= 0) {
			distance++;
			if (grape[a.y][a.x - buf] == 1 && ((P[a.y][a.x - buf].y != P[a.y][a.x].y) || (P[a.y][a.x - buf].x != P[a.y][a.x].x))) {
				o.e = { a.y,a.x - buf };
				o.w = distance;
				if (o.w >= 2)
					E.push(o);
				return;
			}
			buf++;
		}
	}
	void upgo(xy a) {
		if (!isborder_up(a)) return;
		edge o;
		o.s = a;
		int buf = 1;
		int distance = -1;
		while (a.y - buf >= 0) {
			distance++;
			if (grape[a.y - buf][a.x] == 1 && ((P[a.y - buf][a.x].y != P[a.y][a.x].y) || (P[a.y - buf][a.x].x != P[a.y][a.x].x))) {
				o.e = { a.y - buf,a.x };
				o.w = distance;
				if (o.w >= 2)
					E.push(o);
				return;
			}
			buf++;
		}
	}
	void rightgo(xy a) {
		if (!isborder_right(a)) return;
		edge o;
		o.s = a;
		int buf = 1;
		int distance = -1;
		while (a.x + buf < M) {
			distance++;
			if (grape[a.y][a.x + buf] == 1 && ((P[a.y][a.x + buf].y != P[a.y][a.x].y) || (P[a.y][a.x + buf].x != P[a.y][a.x].x))) {
				o.e = { a.y,a.x + buf };
				o.w = distance;
				if (o.w >= 2)
					E.push(o);
				return;
			}
			buf++;
		}
	}
	void downgo(xy a) {
		if (!isborder_down(a)) return;
		edge o;
		o.s = a;
		int buf = 1;
		int distance = -1;
		while (a.y + buf < N) {
			distance++;
			if (grape[a.y + buf][a.x] == 1 && ((P[a.y + buf][a.x].y != P[a.y][a.x].y) || (P[a.y + buf][a.x].x != P[a.y][a.x].x))) {
				o.e = { a.y + buf,a.x };
				o.w = distance;
				if (o.w >= 2)
					E.push(o);
				return;
			}
			buf++;
		}
	}
	void preprocess() {
		int dy[4] = { -1,0,1,0 };
		int dx[4] = { 0,-1,0,1 };
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++) {
				if (grape[i][j] == 1) {
					for (int k = 0; k < 4; k++) {
						if (i + dy[k] >= 0 && i + dy[k] < N && j + dx[k] >= 0 && j + dx[k] < M) {
							if (grape[i + dy[k]][j + dx[k]] == 1)
								unionset({ i,j }, { i + dy[k], j + dx[k] }, P, rank);
						}
					}
				}

			}
		for (int i = 0; i < N; i++)
			for (int j = 0; j < M; j++) {
				if (grape[i][j] == 1) {
					downgo({ i,j });
					leftgo({ i,j });
					upgo({ i,j });
					rightgo({ i,j });

				}
			}
	}
	void process() {
		while (!E.empty()) {
			edge cur = E.top();
			E.pop();
			xy a = P[cur.s.y][cur.s.x];
			xy b = P[cur.e.y][cur.e.x];
			if ((visit[a.y][a.x].y != visit[b.y][b.x].y) || (visit[a.y][a.x].x != visit[b.y][b.x].x )) {
				unionset(a,b, visit, vrank);
				linkcount++;
				cw += cur.w;
			}
		}
	}
	void postprocess() {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (grape[i][j] == 1) {
					int rx = P[i][j].x;
					int ry = P[i][j].y;
					node[ry][rx] = true;
				}
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (node[i][j] == true)
					nodecount++;
			}
		}
		if (nodecount == linkcount +1)
			iso = false;
		else
			iso = true;
	}
	void output() {
		if (iso)
			cout << -1 << '\n';
		else
			cout << cw << '\n';
	}
	void run() {
		input();
		preprocess();
		process();
		postprocess();
		output();
	}
};
#include <string.h>
class ex066 {
public:
	bool islink = false;
	int N,sum_weight=0,edge_count=0,sum_LAN=0,result=0;
	vector<vector<int>> grape;
	vector<int> P,rank;
	struct edge {
		int s;
		int e;
		int w;
	};
	struct compare {
		bool operator()(const edge& t1, const edge& t2) {
			return t1.w > t2.w;
		}
	};
	priority_queue<edge, vector<edge>, compare> q;
	void input() {
		cin >> N;
		P.resize(N);
		rank.resize(N);
		grape.resize(N, vector<int>(N+1, 0));
		for (int i = 0; i < N; i++) {
			string str;
			cin >> str;
			for (int j = 0; j < N; j++) {
				grape[i][j] = str[j] - 'a' + 1;
				sum_LAN += grape[i][j];
            }
			P[i] = i;
		}
	}
	void preprocess(){
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (i == j) continue;
				edge test;
				test.s = i;
				test.e = j;
				test.w = grape[i][j];
				q.push(test);
			}
		}
	}
	int find(int node) {
		if (node == P[node])
			return node;
		else
			return P[node] = find(P[node]);
	}
	void unionset(int node1, int node2) {
		int r1 = find(node1);
		int r2 = find(node2);
		if (rank[r1] > rank[r2]) 
			P[r2] = r1;
		else if (rank[r1] < rank[r2])
			P[r1] = r2;
		else {
			P[r2] = r1;
			rank[r1]++;
		}
	}
	void minimum_spaning_tree() {
		while (!q.empty()) {
			edge cur = q.top();
			q.pop();
			if (find(cur.s) != find(cur.e)) {
				unionset(cur.s, cur.e);
				sum_weight += cur.w;
				edge_count++;
				if (edge_count == N - 1) break;
			}
		}
	}
	void is_all_link() {
		if (edge_count == N - 1)
			islink = true;
		else
			islink = false;
	}
	void process() {
		minimum_spaning_tree();
		is_all_link();
	}
	void postprocess() {
		result = sum_LAN - sum_weight;
	}
	void output() {
		cout << '\n';
		if (islink)
			cout << result << '\n';
		else
			cout << -1 << '\n';
	}
	void run() {
		input();
		preprocess();
		process();
		postprocess();
		output();
	}
};
class ex067 {
public:
	int N;
	vector<vector<int>> adj;
	vector<int> R,visit;
	void input() {
		cin >> N;
		adj.resize(N + 1);
		R.resize(N + 1);
		visit.resize(N + 1,false);
		for (int i = 1; i < N; i++) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
	}
	void dfs(int node) {
		visit[node] = true; 
		int cur = node;
		for (int next : adj[cur]) { 
			if (visit[next] == false) { 
				R[next] = cur; 
				dfs(next); 
			}
		}
	}
	void process() {
		R[1] = 1;
		dfs(1);
	}
	void output() {
		for (int i = 2; i <= N; i++)
			cout << R[i] << '\n';
	}
	
	void run() {
		input();
		process();
		output();
	
	}
};
class ex068 {
public:
	int N, Leefcount = 0, Exitnode, StartNode;
	vector<vector<int>> adj;
	vector<bool> visit;
	void input() {
		cin >> N;
		adj.resize(N);
		visit.resize(N, false);
		for (int i = 0; i < N; i++) {
			int in;
			cin >> in;
			if (in == -1) {
				StartNode = i;
			}
			else {
				adj[in].push_back(i);
				adj[i].push_back(in);
			}
		}
		cin >> Exitnode;
	}
	void dfs(int node) {
		visit[node] = true;
		if (Exitnode == node) return;
		if (adj[node].size() == 1 && node != StartNode)
			Leefcount++;
		for (int next : adj[node]) {
			if (visit[next] == false) {
				dfs(next);
			}
		}
	}
	void process() {
		dfs(StartNode);
	}
	void output() {
		cout << '\n';
		cout << Leefcount << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex069 {
public:
	int N, M,result=0;
	vector<string> istr;
	struct trie {
		trie* child[26];
		bool isend;
		trie() {
			isend = false;
			for (int i = 0; i < 26; i++) {
				child[i] = nullptr;
			}
		}
	};
	trie* root = new trie();
	void insert(trie* root, string str) {
		if (root == nullptr) return;
		for (char data : str) {
			int index = data - 'a';
			if (root->child[index] == nullptr) {
				root->child[index] = new trie();
			}
			root = root->child[index];
		}
		root->isend = true;
	}
	void search(trie* root, string str) {
		if (root == nullptr) return;
		for (char data : str) {
			int index = data - 'a';
			if (root->child[index] == nullptr) {
				return;
			}
			root = root->child[index];
		}
		if (root->isend == true) result++;
	}
	void input() {
		cin >> N >> M;
		istr.resize(N+M);
		for (int i = 0; i < N+M; i++)
			cin >> istr[i];
	}
	void process() {
		for (int i = 0; i < N; i++) 
			insert(root, istr[i]);
		for (int j = N; j < N+M; j++)
			search(root, istr[j]);
				
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex070 {
public:
	int N;
	vector<vector<int>> tree;

	void input() {
		cin >> N;
		tree.resize(N, vector<int>(2));
		for (int i = 0; i < N; i++) {
			char a, b, c;
			cin >> a >> b >> c;
			int index = a - 'A';
			tree[index][0] = b;
			tree[index][1] = c;
		}
	}
	void preorder(int index) {
		if (index + 'A' == '.') return;
			char outch = index + 'A';
			cout << outch;
		int ldex = tree[index][0] - 'A';
		preorder(ldex);
		int rdex = tree[index][1] - 'A';
		preorder(rdex);
	}
	void inorder(int index) {
		if (index + 'A' == '.') return;
		int ldex = tree[index][0] - 'A';
		preorder(ldex);
		char outch = index + 'A';
		cout << outch;
		int rdex = tree[index][1] - 'A';
		preorder(rdex);
	}
	void postorder(int index) {
		if (index + 'A' == '.') return;
		int ldex = tree[index][0] - 'A';
		preorder(ldex);
		int rdex = tree[index][1] - 'A';
		preorder(rdex);
		char outch = index + 'A';
		cout << outch;
	}

	void output() {
		preorder(0);
		cout << '\n';
		inorder(0);
		cout << '\n';
		postorder(0);
		cout << '\n';
	
	}
	void run() {
		input();
		output();
	}

};
class ex071 {
private: 
	vector<int> tree;
	int n;
	void build(vector<int> arr, int node, int start, int end) {
		if (start == end) { 
			tree[node] = arr[start];
		}
		else {
			int mid = (start + end)/ 2;
			build(arr, node * 2, start, mid);
			build(arr, node * 2+1, mid+1, end);
			tree[node]= tree[2 * node] + tree[2 * node + 1];
		}
	}
	int query(vector<int> arr, int node, int start, int end, int L, int R) {
		if (R < start || end< L) return 0;
		if (L <= start && end <= R) return tree[node];
		int mid = (start + end) / 2;
		return query(arr, 2 * node, start, mid, L, R) + query(arr, 2 * node + 1, mid + 1, end, L, R);
	}
	void update(int node, int start, int end, int index, int dif){
		if (start > index || index > end) return;
		tree[node] += dif;
		if (start != end) {
			int mid = (start + end) / 2;
			update(node*2, start, mid, index, dif);
			update(node*2+1, mid + 1, end, index, dif);
		}
	}
public:
	int N, M, K;
	vector<int> arr,result;
	struct opr {
		int a, b, c;
	};
	vector<opr> o1;
	void set(vector<int> arr) {
		n = arr.size()-1;
		tree.resize(4 * n);
		build(arr, 1, 1, n);
	}
	int query(vector<int> arr, int L, int R) {
		return query(arr, 1, 1, n, L, R);
	}
	void update(vector<int> arr, int index, int value) {
		int differ = value-arr[index];
		arr[index] = value;
		update(1, 1, n, index, differ);
	}
	void input() {
		cin >> N >> M >> K;
		arr.resize(N+1);
		o1.resize(M + K);
		for (int i = 1; i <= N; i++) 
			cin >> arr[i];
		
		for (int i = 0; i < M + K; i++) 
			cin >> o1[i].a >> o1[i].b >> o1[i].c;
	}
	void process() {
		set(arr);
		for (int i = 0; i < M + K; i++) {
			if (o1[i].a == 1) {
				update(arr, o1[i].b, o1[i].c);
			}
			if (o1[i].a == 2) {
				result.push_back(query(arr, o1[i].b, o1[i].c));
			}
		}
	}
	void output() {
		cout << '\n';
		for (int i = 0; i < result.size(); i++)
			cout << result[i] << '\n';
	}
	void run() {
		input();
		process();
		output();
	
	}
};
class ex072 {
private:
	vector<int> tree;
	int n,min=INT_MAX;
	void build(vector<int> arr, int node, int start, int end) {
		if (start == end) {
			tree[node] = arr[start];
		}
		else {
			int mid = (start + end) / 2;
			build(arr, node * 2, start, mid);
			build(arr, node * 2 + 1, mid + 1, end);
			tree[node] = tree[2 * node] + tree[2 * node + 1];
		}
	}
	void query(vector<int> arr, int node, int start, int end, int L, int R) {
		if (R < start || end < L) return;
		if (start == end) {
			if (min > tree[node]) {
				min = tree[node];
				return;
			}
		}
		else {
			int mid = (start + end) / 2;
			query(arr, 2 * node, start, mid, L, R);
			query(arr, 2 * node + 1, mid + 1, end, L, R);
		}
	}
public:
	int N, M;
	vector<int> arr, result;
	struct opr {
		int a, b;
	};
	vector<opr> o1;
	void set(vector<int> arr) {
		n = arr.size() - 1;
		tree.resize(4 * n);
		build(arr, 1, 1, n);
	}
	void query(vector<int> arr, int L, int R) {
		query(arr, 1, 1, n, L, R);
	}
	void input() {
		cin >> N >> M;
		arr.resize(N + 1);
		result.resize(M);
		o1.resize(M);
		for (int i = 1; i <= N; i++)
			cin >> arr[i];

		for (int i = 0; i < M; i++)
			cin >> o1[i].a >> o1[i].b;
	}
	void process() {
		set(arr);
		for (int i = 0; i < M; i++) {
			min = INT_MAX;
			query(arr, o1[i].a, o1[i].b);
			result[i] = min;
		}
	}
	void output() {
		cout << '\n';
		for (int i = 0; i < result.size(); i++)
			cout << result[i] << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex073 {
public:
	int N, M, K;
	vector<int>  arr;
	vector<double> tree,result;
	struct q {
		int a, b, c;
	};
	vector<q> oper;
	void input() {
		cin >> N >> M >> K;
		tree.resize(4 * N);
		arr.resize(N + 1);
		oper.resize(M + K);
		for (int i = 1; i <= N; i++)
			cin >> arr[i];
		for (int i = 0; i < M + K; i++)
			cin >> oper[i].a >> oper[i].b >> oper[i].c;
	}
	void build(int node, int start, int end) {
		if (start == end) {
			tree[node] = arr[start];
		}
		else {
			int mid = (start + end) / 2;
			build(2 * node, start, mid);
		    build(2 * node+1, mid+1, end);
			tree[node] = tree[node * 2]*tree[node * 2 + 1];
		}
	} 
	int query(int node, int start, int end, int L, int R) {
		if (L > end || R < start) return 1;
		if (start == end) return tree[node];
		else {
			int mid = (start + end) / 2;
			return query(2 * node, start, mid, L, R) * query(2 * node + 1, mid + 1, end, L, R);
		}
	}
	void update(int node, int start, int end, int index, double ratio) {
		if (index < start || index > end) return;
		tree[node] *= ratio;
		if (start != end) {
			int mid = (start + end) / 2;
			update(2 * node, start, mid, index, ratio);
			update(2 * node+1, mid+1,end, index, ratio);
		}
	}
	void process() {
		build(1, 1, N);
		for (int i = 0; i < M + K; i++) {
			if (oper[i].a == 1) {
				double ratio = (double)oper[i].c / arr[oper[i].b];
				update(1, 1, N, oper[i].b, ratio);
			}
			if (oper[i].a == 2) {
				result.push_back(query(1, 1, N, oper[i].b, oper[i].c));
			}
		}
	}
	void output() {	
		cout << '\n';
		for (int i = 0; i < K; i++)
			cout << result[i] << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex074 {
public:
	int N, M;
	vector<int> depth, parent, result;
	vector<bool> visit;
	vector<vector<int>> tree;
	struct pair {
		int a, b;
	};
	vector<pair> oper;
	void input() {
		cin >> N;
		depth.resize(N + 1);
		visit.resize(N + 1, false);
		parent.resize(N+1);
        tree.resize(N+1);

		for (int i = 1; i < N; i++) {
			int a, b;
			cin >> a >> b;
			tree[a].push_back(b);
			tree[b].push_back(a);
		}
		cin >> M;
		oper.resize(M);
		result.resize(M);
		for (int i = 0; i < M; i++) 
			cin >> oper[i].a >> oper[i].b;
	}
	void dfs(int cur, int d) {
		visit[cur] = true;
		depth[cur] = d;
		for (int next : tree[cur]) {
			if (!visit[next]) {
				parent[next] = cur;
				dfs(next, d + 1);
			}
		}
	}
	int LCA(int n1, int n2) {
		if (depth[n1] != depth[n2]) {
			while (depth[n1] > depth[n2]) {
				n1 = parent[n1];
			}
			while (depth[n1] < depth[n2]) {
				n2 = parent[n2];
			}
		}
		while (n1 != n2) {
			n1 = parent[n1];
			n2 = parent[n2];
		}
		return n1;
	}
	void process() {
		parent[1] = 1;
		dfs(1,0);
		for (int i = 0; i < M; i++) {
			result[i] = LCA(oper[i].a, oper[i].b);
		}
	}
	void output() {
		cout << '\n';
		for (int i = 0; i < M; i++) {
			cout << result[i] << '\n';
		}
	}
	void run() {
		input();
		process();
		output();
	}
};
#include <cmath>
class ex075 {
public:
	int N, M, D;
	struct q {
		int a, b;
	};
	vector<q> oper;
	vector<bool> visit;
	vector<int> depth;
	vector<vector<int>> parent, tree;
	void input() {
		cin >> N;
		D = log2(N)+1;
		tree.resize(N+1);
		depth.resize(N + 1);
		visit.resize(N + 1,false);
		parent.resize(N + 1, vector<int>(D));
	
		for (int i = 1; i < N; i++) {
			int r, t;
			cin >> r >> t;
			tree[r].push_back(t);
			tree[t].push_back(r);
		}
		cin >> M;
		oper.resize(M);
		for (int i = 0; i < M; i++) {
			cin >> oper[i].a >> oper[i].b;
		}
	}
	void dfs(int cur, int d) {
		visit[cur] = true;
		depth[cur] = d;
		for (int next : tree[cur]) {
			if (visit[next] == false) {
				parent[next][0] = cur;
				dfs(next,d+1);
			}
		}
	}
	void init() {
		for (int next = N; next >0; next--) 
			for (int k = 1; k < D; k++)
				if(parent[parent[next][k]][k] !=0)
				 parent[next][k] = parent[parent[next][k]][k];
	}
	int LCA(int a, int b) {
		int dif = depth[b] - depth[a];
		for (int k = 0; dif; k++) {
			if (dif & 1 << k) {
				b = parent[b][k];
				dif -= (1 << k);
			}
		}
		if (a == b) return a;
		else {
			for (int i = 0; i < D; i++) 
				if (parent[a][i] == parent[b][i])
					return parent[a][i];
		}
	}
	void process() {
		dfs(1, 0);
		init();
		for (int i = 0; i < M; i++) {
			if(oper[i].a < oper[i].b)
			    cout << LCA(oper[i].a, oper[i].b);
		   	else
				cout << LCA(oper[i].b, oper[i].a);
		}
	}
	void run() {
		input();
		process();
	}
};
class ex076 {
public:
	int N, K,result=0;
	vector<vector<long long>> nCr;
	void input() {
		cin >> N >> K;
		nCr.resize(N + 1, vector<long long>(N + 1));
	}
	void nCr_set() {
		for (int i = 0; i <= N; i++) {
			for (int j = 0; j <= i; j++) {
				if (j == 0 || i == j)
					nCr[i][j] = 1;
				else
					nCr[i][j] = nCr[i - 1][j] + nCr[i - 1][j - 1];
			}
		}
	}
	void process() {
		nCr_set();
		result = nCr[N][K];
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex077 {
public:
	int N, K, result = 0;
	vector<vector<long long>> nCr;
	void input() {
		cin >> N >> K;
		nCr.resize(N + 1, vector<long long>(N + 1));
	}
	void nCr_set() {
		for (int i = 0; i <= N; i++) {
			for (int j = 0; j <= i; j++) {
				if (j == 0 || i == j)
					nCr[i][j] = 1;
				else 
					nCr[i][j] = nCr[i - 1][j] + nCr[i - 1][j - 1];
				
				nCr[i][j] %= 10007;
			}
		}
	}
	void process() {
		nCr_set();
		result = nCr[N][K];
	}
	void output() {
		cout << '\n';
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex078 {
public:
	int T;
	struct ab {
		int a, b;
	};
	vector<int> result;
	vector<ab> oper;
	void nCr_set(int k, int n) {
		vector<vector<long long>> nCr;
		nCr.resize(k+1, vector<long long>(n + 1));
		for (int i = 0; i <= k; i++) {
			for (int j = 0; j <= n; j++) {
				if (i == 0)
					nCr[i][j] = j;
				else {
					int sum = 0;
					for (int k = 0; k <= j; k++)
						sum += nCr[i - 1][k];
					nCr[i][j] = sum;
				}
			}
		}
		 result.push_back(nCr[k][n]);
	}
	void run() {
		cin >> T;
		oper.resize(T);
		for (int i = 0; i < T; i++) {
			cin >> oper[i].a >> oper[i].b;
		    nCr_set(oper[i].a, oper[i].b);
		}
		cout<< '\n';
		for (int i = 0; i < T; i++)
		  cout << result[i]<<'\n';
	}

};
class ex079 {
public:
	int T;
	vector<int> result;
	void nCr_set(int N, int M) {
		vector<vector<long long>> nCr(M+1, vector<long long>(M+1));
		for (int i = 0; i <= M; i++) {
			for (int j = 0; j <= i; j++) {
				if (j == 0 || i == j)
					nCr[i][j] = 1;
				else
					nCr[i][j] = nCr[i - 1][j] + nCr[i - 1][j - 1];
			}
		}
		result.push_back(nCr[M][N]);
	}
	void input() {
		cin >> T;
		for (int i = 0; i < T; i++) {
			int N, M;
			cin >> N >> M;
			nCr_set(N, M);
		}
	}
	void output() {
		cout << '\n';
		for (int i = 0; i < T; i++)
			cout << result[i] << '\n';
	}
	void run() {
		input();
		output();
	}
};
class ex080 {
public:
	int kindcolor, chooserock,combsize;
	vector<int> color;
	vector<vector<long long>> comb;
	double result = 0;
	void input() {
		cin >> kindcolor;
		color.resize(kindcolor);
		int sum = 0;
		for (int i = 0; i < kindcolor; i++) {
			cin >> color[i];
			sum += color[i];
		}
		combsize = sum;
		comb.resize(combsize + 1, vector<long long>(combsize + 1));
		cin >> chooserock;
	}
	void set_comb() {
	 for(int i =0; i<=combsize; i++)
		 for (int j = 0; j <= i; j++) {
			 if (j == 0 || i == j)
				 comb[i][j] = 1;
			 else
				 comb[i][j] = comb[i - 1][j - 1] + comb[i - 1][j];
		 }
	}
	void process() {
		set_comb();
		double res = 0;
		for (int i = 0; i < kindcolor; i++) {
			res += comb[color[i]][chooserock];
		}
		result = res / (double)comb[combsize][chooserock];
	}
	void output() {
		cout << '\n';	
		cout << result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex082 {
public:
	int N, M, K,sequence;
	vector<char> arr;
	int factorial(int n){
		int res = 1;
		for (int i = n; i > 0; i--)
			res *= i;
		return res;
	}
	void run() {
		cin >> N >> M >> K;
		if (N + M < K) {
			cout << -1;
			return;
		}
		arr.resize(N + M + 1);
		sequence = K;
		int acount = N, zcount = M;
		for (int i = N+M; i > 0; i--) {
			int fac = factorial(i - 1);
			if (acount>0 && zcount>0) {
				if (sequence / fac >0) {
					arr[i] = 'z';
					zcount--;
				}
				else {
					arr[i] = 'a';
					acount--;
				}
			}
			else if (acount > 0) {
				arr[i] = 'a';
				acount--;
			}
			else {
				arr[i] = 'z';
				zcount--;
			}
			sequence %= fac;
		}
		for (int i = N+M; i > 0; i--) {
			cout << arr[i];
		}
	}
};
class ex083 {
public:
	int N, result = 0;
	vector<int> dp;
	void set(int n) {
		dp.resize(n+1);
		dp[1] = 0;
		dp[2] = 1;
		for (int i = 3; i <= n; i++) {
			dp[i] = (i - 1) * (dp[i - 1] + dp[i - 2]);
		}
	}
	void run() {
		cin >> N;
		if (N < 3) {
			if (N == 2)
				cout << 1;
			if (N <= 1)
				cout << 0;
		}
		else {
			set(N);
			cout << dp[N];
		}
	}
};
class ex084 {
public:
	int N;
	vector<int> dp;
	void run() {
		cin >> N;
		dp.resize(N + 1);
		dp[1] = 0;
		for (int i = 2; i <= N; i++) {
			dp[i] = dp[i - 1] + 1;
			if (i % 2 == 0)
				dp[i] = min(dp[i], dp[i / 2] + 1);
			if (i % 3 == 0)
				dp[i] = min(dp[i], dp[i / 3] + 1);
		}
		cout << '\n';
		cout << dp[N] <<'\n';
	}
};
class ex085 {
public:
	int  T;
	struct meet {
		int time, money;
	};
	vector<meet> plan;
	vector<int> dp;
	void input() {
		cin >> T;
		dp.resize(T+2);
		plan.resize(T+1);
		for (int i = 1; i <= T; i++)
			cin >> plan[i].time >> plan[i].money;
	}
	void process() {
		dp[1] = 0;
		for (int data = 2; data <= T+1; data++) {
			dp[data] = max(dp[data], dp[data - 1]);
			for (int i = 1; i <= data - 1; i++) {
				if (plan[i].time + i == data) {
					dp[data] = max(dp[data], dp[i] + plan[i].money);
				}
			}
		}
	}
	void output() {
		cout << '\n';
		cout << dp[T+1] << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class ex086 {
public:
	int N,result=0;
	vector<vector<int>> dp;
	void run() {
		cin >> N;
		dp.resize(N + 1, vector<int>(2));
		dp[1][1] = 1;
		for (int cur = 2; cur <= N; cur++) {
			int pre = cur - 1;
			int zero = dp[pre][0];
			int one = dp[pre][1];
			dp[cur][0] = one + zero;
			dp[cur][1] = zero;
		}
		result = dp[N][0] + dp[N][1];
		cout << result <<'\n';
	}
};
class ex087 {
public:
	int N;
	vector<int> dp;
	void run() {
		cin >> N;
		dp.resize(N + 1);
		dp[1] = 1; dp[2] = 2;
		for (int cur = 3; cur <= N; cur++)
			dp[cur] = dp[cur - 1] + dp[cur - 2];
		cout << dp[N] << '\n';
	}
};
class ex088 {
public:
	int N;
	vector<int> D;
	void run() {
		cin >> N;
		D.resize(N+1);
		D[1] = 9;
		D[2] = 17;
		for (int i = 3; i <= N; i++)
			D[i] = 2 * D[i - 1] - 2;
		cout << D[N] << '\n';
	}
};
class ex089 {
public:
	int N;
	vector<int> A, R, L, D;
	void run() {
		cin >> N;
		A.resize(N + 1);
		R.resize(N + 1);
		L.resize(N + 1);
		D.resize(N + 1);
		for (int i = 1; i <= N; i++)
			cin >> A[i];
		for (int i = 1; i <= N; i++)
			R[i] = max(R[i - 1], A[i] + R[i - 1]);

	}

};
class baekjoon2606 {
public:
	int N,M,linkedNodeCount=-1;
	vector<bool> visit;
	vector<vector<int>> adj;
	void input() {
		cin >> N >> M;
		visit.resize(N + 1);
		adj.resize(N + 1);
		for (int i = 0; i < M; i++) {
			int a, b;
			cin >> a >> b;
			adj[a].push_back(b);
			adj[b].push_back(a);
		}
	}
	void dfs(int cur) {
		visit[cur] = true;
		linkedNodeCount++;
		for (int next : adj[cur]) 
			if (!visit[next])
				dfs(next);
	}
	void output() {
		cout << '\n';
		cout << linkedNodeCount << '\n';
	}
	void run() {
		input();
		dfs(1);
		output();
	}
};
class baekjoon10026 {
public:
	int dy[4] = { -1,0,1,0 }, dx[4] = {0,-1,0,1};
	int N, R=0, B=0, G=0, areaCount = 0, RGareaCount = 0;
	vector<vector<bool>> visit;
	vector<vector<char>> area;
	void input() {
		cin >> N;
		visit.resize(N, vector<bool>(N, false));
		area.resize(N, vector<char>(N));
		for (int i = 0; i < N; i++)
			for (int j = 0; j < N; j++) {
				cin >> area[i][j];
			}
	}
	void dfs(int y, int x) {
		visit[y][x] = true;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i], nx = x + dx[i];
			if (ny >= 0 && ny < N && nx >= 0 && nx <N) {
				if (visit[ny][nx] == false) {
					if (area[ny][nx] == area[y][x]) {
						dfs(ny, nx);
					}
				}
			}
		}
	}
	void check(int y, int x) {
		char ch = area[y][x];
		switch (ch) {
		case 'B':
			B++;
			break;
		case 'G':
			G++;
			break;
		case 'R':
			R++;
			break;
		}
	}
	void process() {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (visit[i][j] == false) {
					check(i, j);
					dfs(i, j);
				}
			}
		}
		areaCount = B + R + G;

		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				visit[i][j] = false;
				if (area[i][j] == 'G')
					area[i][j] = 'R';
			}
		}

		B = 0, R = 0, G = 0;
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (visit[i][j] == false) {
					check(i, j);
					dfs(i, j);
				}
			}
		}
		RGareaCount = B + R;
	}
	void output() {
		cout << areaCount << " " << RGareaCount << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class baekjoon1987 {
public:
	int R, C,distence=0;
	int dy[4] = { -1,0,1,0 }, dx[4] = {0,-1,0,1};
	struct data {
		int x, y, d;
	};
	vector<vector<char>> arr;
	vector<bool> visit;
	stack<data> s;
	void input() {
		cin >> R >> C;
		visit.resize(100, false);
		arr.resize(R + 1, vector<char>(C + 1));
		for (int i = 1; i <= R; i++)
			for (int j = 1; j <= C; j++)
				cin >> arr[i][j];
	}
	void dfs(int x, int y, int d ) { 
			distence = max(distence, d);
			visit[arr[y][x]] = true;
			for (int i = 0; i < 4; i++) {
				int ny = y + dy[i], nx = x + dx[i];
				if (ny >= 1 && ny <= R && nx >= 1 && nx <= C)
					if (visit[arr[ny][nx]] == false) {
							dfs(nx, ny, d + 1);
						visit[arr[ny][nx]] = false;
					}
			}
		
	}
	void output() {
		cout << distence;
	}
	void run() {
		input();
		dfs(1,1,1);
		output();
	}
};
class baekjoon2667 {
public:
	int N, dy[4] = { -1,0,1,0 }, dx[4] = { 0,-1,0,1 };
	int distence;
	vector<vector<int>> arr;
	vector<vector<bool>> visit;
	struct compare {
		bool operator()(const int& t1, const int& t2) {
			return t1 > t2;
		}
	};
	priority_queue<int, vector<int>, compare> q;
	void input() {
		cin >> N;
		arr.resize(N, vector<int>(N));
		visit.resize(N, vector<bool>(N, false));
		for (int i = 0; i < N; i++) {
			string line;
			cin >> line;
			for (int j = 0; j < N; j++) {
				arr[i][j] =line[j]-'0';
			}
		}
	}
	void dfs(int y,int x) {
		visit[y][x] = true;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i], nx = x + dx[i];
			if (ny >= 0 && ny < N && nx >= 0 && nx < N) {
				if ((arr[ny][nx]==1) && (visit[ny][nx]==false)){
					distence++;
					dfs(ny, nx);
				}
			}
		}
	}
	void process() {
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < N; j++) {
				if (visit[i][j]==false && arr[i][j]==1) {
					distence = 1;
					dfs(i, j);
				    q.push(distence);
				}
			}
		}
	}
	void output() {
		cout << q.size()<<'\n';
		while (!q.empty()) {
			cout << q.top() << '\n';
			q.pop();
		}
	}
	void run() {
		input();
		process();
		output();
	}
};
class beakjoon1012 {
public:
	int T, dy[4] = { -1,0,1,0 }, dx[4] = {0,-1,0,1};
	struct data {
		int	N, M, K,result=0;
	};
	vector<data> info;
	vector<vector<vector<int>>> arr;
	vector<vector<vector<bool>>> visit;
	void input() {
		cin >> T;
		info.resize(T);
		arr.resize(T);
		visit.resize(T);
		for (int i = 0; i < T; i++) {
			cin >> info[i].M >> info[i].N >> info[i].K;
			arr[i].resize(info[i].N, vector<int>(info[i].M));
			visit[i].resize(info[i].N, vector<bool>(info[i].M, false));
			for (int j = 0; j < info[i].K; j++) {
				int a, b;
				cin >> a >> b;
				arr[i][b][a] = 1;
			}
		}
	}
	void dfs(int t, int y, int x) {
		visit[t][y][x] = true;
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i], nx = x + dx[i];
			if (ny >= 0 && ny < info[t].N && nx >= 0 && nx < info[t].M) {
				if ((arr[t][ny][nx] == 1) && (visit[t][ny][nx] == false)) {
					dfs(t, ny, nx);
				}
			}
		}
	}
	void process() {
		for (int t = 0; t < T; t++) {
			for (int i = 0; i < info[t].N; i++) {
				for (int j = 0; j < info[t].M; j++) {
					if (arr[t][i][j] == 1 && visit[t][i][j] == false) {
						dfs(t, i, j);
						info[t].result++;
					}
				}
			}
		}
	}
	void output() {
		for (int t = 0; t < T; t++)
			cout << info[t].result << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class beakjoon11724 {
public:
	int N,M, linkcount=0;
	vector<vector<int>> adj;
	vector<bool> visit;
	void input() {
		cin >> N>> M;
		adj.resize(N+1);
		visit.resize(N + 1,false);
		for (int i = 0; i < M; i++) {
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
	}
	void dfs(int cur) {
		visit[cur] = true;
		for (int next : adj[cur]) {
			if (visit[next] == false) {
				dfs(next);
			}
		}
	}
	void process() {
		for (int i = 1; i <= N; i++) {
			if (visit[i] == false) {
				linkcount++;
				dfs(i);
			}
		}
	}
	void output() {
		cout << linkcount;
	}
	void run() {
		input();
		process();
		output();
	}
};
class beakjoon11725 {
public:
	int N;
	vector<vector<int>> adj;
	vector<bool> visit;
	vector<int> P;
	void input() {
		cin >> N;
		adj.resize(N + 1);
		visit.resize(N + 1,false);
		P.resize(N + 1);
		for (int i = 1; i < N; i++) {
			int u, v;
			cin >> u >> v;
			adj[u].push_back(v);
			adj[v].push_back(u);
		}
	}
	void dfs(int cur) {
		visit[cur] = true;
		for (int next : adj[cur]) {
			if (visit[next] == false) {
				P[next] = cur;
				dfs(next);
			}
		}
	}
	void process() {
		for (int i = 1; i <= N; i++) {
			if (visit[i] == false)
				dfs(i);
		}
	}
	void output() {
		for (int i = 2; i <= N; i++)
			cout << P[i] << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class baekjoon2573 {
public:
	int N, M, dy[4] = { -1,0,1,0 }, dx[4] = {0,-1,0,1}, yearcount=0;
	bool ismelt = false, allmelt =false;
	vector<vector<int>> buf_ice;
	vector<vector<int>> ice;
	vector<vector<bool>> visit;

	void input() {
		cin >> N >> M;
		ice.resize(N, vector<int>(M)); 
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				cin >> ice[i][j];
			}
		}
	}
	void dfs(int y, int x) {
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i], nx = x + dx[i];
			if (ny >= 0 && ny < N && nx >= 0 && nx < M) {
				if (visit[ny][nx]==false && ice[ny][nx] != 0) {
					visit[ny][nx] = true;
					dfs(ny, nx);
				}
			}
		}
	}
	void melt(int x, int y, vector<vector<int>>& buf_ice) {
		for (int i = 0; i < 4; i++) {
			int ny = y + dy[i], nx = x + dx[i];
			if (ny >= 0 && ny < N && nx >= 0 && nx < M) {
				if (ice[ny][nx] == 0) {
					buf_ice[y][x]--;
				}
			}
		}
	}
	void melt_check() {
		int icecount = 0;
		visit.assign(N, vector<bool>(M, false));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (visit[i][j] == false && ice[i][j]!=0) {
					dfs(i, j);
					icecount++;
				}
			}
		}
		if (icecount > 1)
			ismelt= true;
		if (icecount == 0)
			allmelt = true;
	}
	void melting() {
		buf_ice.assign(N, vector<int>(M,0));
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (ice[i][j] != 0)
					melt(i, j, buf_ice);
			}
		}
		for (int i = 0; i < N; i++) {
			for (int j = 0; j < M; j++) {
				if (ice[i][j] > 0)
					ice[i][j] += buf_ice[i][j];
				ice[i][j] = max(ice[i][j], 0);
			}
		}
		
	}
	void process() {
		while (!ismelt) {
			if (allmelt) break;
			yearcount++;
			melting();
			melt_check();
		}
	}
	void output() {
		if (allmelt)
			cout << 0;
		else
		    cout << yearcount;
	}
	void run() {
		input();
		process();
		output();
	}
};

class test {
public:
	int N, M, start;
	vector<bool> visit;
	struct compare {
		bool operator()(const int& t1, const int& t2) {
			return t1 > t2;
		}
	};
	queue<int> q;
	vector<	priority_queue<int, vector<int>, compare>> adj,dfs_adj,bfs_adj;
	void input() {
		cin >> N >> M>>start;
		adj.resize(N + 1);
		visit.resize(N + 1, false);
		for (int i = 0; i < M; i++) {
			int a, b;
			cin >> a >> b;
			adj[a].push(b);
			adj[b].push(a);
		}
		dfs_adj = adj;
		bfs_adj = adj;
	}
	void dfs(int cur) {
		cout << cur << " ";
		  while(!dfs_adj[cur].empty()) {
			  int next = dfs_adj[cur].top();
			  dfs_adj[cur].pop();
			if (visit[next] == false) {
				visit[next] = true;
				dfs(next);
			}
		  }
	}
	void bfs(int start) {
		q.push(start);
		visit[start] = true;
		
		while (!q.empty()) {
			int cur = q.front();
			q.pop();
			cout << cur << " ";
			while(!bfs_adj[cur].empty()) {
				int next = bfs_adj[cur].top();
				bfs_adj[cur].pop();
				if (visit[next] == false) {
					visit[next] = true;
					q.push(next);
				}
			}
		}
	}
	void process() {
		visit[start] = true;
		dfs(start);
		cout << '\n';
		visit.assign(N + 1, false);
		bfs(start);
	}
	void run() {
		input();
		process();
	}
};
class baekjoon14502 {
public:
	int N, M, dy[4] = { -1,0,1,0 }, dx[4] = { 0,-1,0,1 }, area = 0, sumarea = 0, maxarea=0;
	struct xy {
		int x, y;
	};
	queue<xy> q;
	vector<vector<int>> arr, safe_arr;
	vector<xy> land;
	vector<vector<bool>> visit;
	void input() {
		cin >> N >> M;
		arr.resize(N, vector<int>(M));		
		visit.resize(N, vector<bool>(M, false));
        for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				cin >> arr[y][x];
			}
		}
		safe_arr = arr;
	}
	void virerse(xy cur) {
		for (int i = 0; i < 4; i++) {
			int nx = cur.x + dx[i], ny = cur.y + dy[i];
			if (ny >= 0 && ny < N && nx >= 0 && nx < M) {
				if (arr[ny][nx] != 1) {
					arr[ny][nx] = 2;
					xy next = { nx, ny };
					if (visit[ny][nx] == false) {
						visit[ny][nx] = true;
						virerse(next);
					}
				}
			}
		}
	}
	void safearea(xy cur) {
		for (int i = 0; i < 4; i++) {
			int nx = cur.x + dx[i], ny = cur.y + dy[i];
			if (ny >= 0 && ny < N && nx >= 0 && nx < M) {
				if (arr[ny][nx] == 0) {
					arr[ny][nx] = 2;
					xy next = { nx, ny };
					if (visit[ny][nx] == false) {
						visit[ny][nx] = true;
						area++;
						safearea(next);
					}
				}
			}
		}
	}
	void test() {
		visit.assign(N, vector<bool>(M, false));
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				if (arr[y][x] == 2) {
					visit[y][x] = true;
					virerse({ x,y });
				}
			}
		}
		visit.assign(N, vector<bool>(M, false));
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				if (arr[y][x] == 0) {
					visit[y][x] = true;
					area = 1;
					safearea({ x,y });
					sumarea += area;
				}
			}
		}
	}
	void wall_bulid(int a) {
		xy cur = land[a];
		arr[cur.y][cur.x] = 1;
	}
	void wall_destroy(int a) {
		xy cur = land[a];
		arr[cur.y][cur.x] = 0;
	}
	void process() {
		for (int y = 0; y < N; y++) {
			for (int x = 0; x < M; x++) {
				if (arr[y][x] == 0) {
					land.push_back({ x,y });
				}
			}
		}
		int ls = land.size();
		for (int i = 0; i < ls; i++) {
			for (int j = i+1; j < ls; j++) {
				for (int k = j+1; k < ls; k++) {
					sumarea = 0;
					arr = safe_arr;
					wall_bulid(i);
					wall_bulid(j);
                    wall_bulid(k);
					test();
					wall_destroy(i);
					wall_destroy(j);
					wall_destroy(k);
					if (maxarea < sumarea)
						maxarea = sumarea;
				}
			}
		}
	}
	void output() {
		cout << maxarea;
	}
	void run() {
		input();
		process();
		output();
	}
};
class baekjoon7569 {
public:
	int M, N,H, spoil_day = 0, 
		dz[6] = {-1,0,0,1,0,0 }, dy[6] = { 0,-1,0,0,1,0 }, dx[6] = { 0,0,-1,0,0,1 };
	vector<vector<vector<int>>> tomato;
	vector<vector<vector<bool>>> visit;
	struct xyz {
		int x, y, z, d;
	};
	queue<xyz> q;
	void input() {
		cin >> M>> N >> H;
		tomato.resize(H, vector<vector<int>>(N, vector<int>(M)));
		visit.resize(H, vector<vector<bool>>(N, vector<bool>(M, false)));
		for (int k = 0; k < H; k++) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					cin >> tomato[k][i][j];
				}
			}
		}
	}
	void spoiled_tomato_push() {
		for (int k = 0; k < H; k++) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (tomato[k][i][j] == 1) {
						visit[k][i][j] = true;
						q.push({j,i,k,0});
					}
				}
			}
		}
	}
	void spoiling() {
        while (!q.empty()) {
			xyz cur = q.front();
			q.pop();
			spoil_day = max(spoil_day, cur.d);
			for (int i = 0; i < 6; i++) {
				int nx = cur.x+dx[i], ny = cur.y+dy[i], nz = cur.z+dz[i], nd = cur.d + 1;
				if (nx >= 0 && nx < M && ny >= 0 && ny < N && nz >= 0 && nz < H) {
					if (tomato[nz][ny][nx] == 0 && visit[nz][ny][nx] == false) {
						visit[nz][ny][nx] = true;
						tomato[nz][ny][nx] = 1;
						q.push({ nx, ny, nz, nd });
					}
				}
			}
		}
	}
	void tomato_check() {
		for (int k = 0; k < H; k++) {
			for (int i = 0; i < N; i++) {
				for (int j = 0; j < M; j++) {
					if (tomato[k][i][j] == 0) {
						cout << -1;
						return;
					}
				}
			}
		}
		if (spoil_day == 0) {
			cout << 0;
		}
		else
			cout << spoil_day;
	}
	void run() {
		input();
		spoiled_tomato_push();
		spoiling();
		tomato_check();
	}
};
class baekjoon2206 {
public:
	int N, M, dx[4] = { -1,0,1,0 }, dy[4] = {0,-1,0,1}, ld=INT_MAX;
	struct xy {
		int x, y, d;
		bool wall;
	};
	queue<xy> q;
	vector<vector<int>> map;
	vector<vector<vector<bool>>> visit;
	void input() {
		cin >> N >> M;
		map.resize(N + 1, vector<int>(M + 1));
		visit.resize(N + 1, vector<vector<bool>>(M + 1, vector<bool>(2, false)));
		for (int i = 1; i<=N; i++){
			string str;
			cin >> str;
			for (int j = 1; j <= M; j++){
				map[i][j] = str[j - 1] - '0';
			}
		}
	}
	void map_bfs() {
		q.push({ 1,1,1,false });
		visit[1][1] = { true,true };
		while (!q.empty()) {
			xy cur = q.front();
			q.pop();
			if (cur.y == N && cur.x == M) 
				ld = min(ld, cur.d);
			
			for (int i = 0; i < 4; i++) { 
				xy next = { cur.x + dx[i], cur.y + dy[i], cur.d+1,cur.wall};
				if (next.x >= 1 && next.x <= M && next.y >= 1 && next.y <= N) {
					if (map[next.y][next.x] == 0 && visit[next.y][next.x][next.wall]==false) {
						visit[next.y][next.x][next.wall] = true;
						q.push(next);
					}
					if (map[next.y][next.x] == 1&& visit[next.y][next.x][1]==false && next.wall==false) {
						visit[next.y][next.x][1] = true;
						next.wall = true;
						q.push(next);
					}
				}
			}
		}
	}
	void output() {
		if (ld == INT_MAX)
			cout << -1;
		else
		    cout << ld;
	}
	void run() {
		input();
		map_bfs();
		output();
	}
};
class baekjoon2470 {
public:
	int N;
	vector<int> arr;
	struct compare {
		bool operator()(const int& t1, const int& t2) {
			return t1 > t2;
		}
	};
	priority_queue<int, vector<int>, compare> q;
	struct info {
		int high, low, w;
	};
	struct compare2 {
		bool operator()(const info& t1, const info& t2) {
			return t1.w > t2.w;
		}
	};
	priority_queue<info, vector<info>, compare2> rq;

	void input() {
		cin >> N;
		arr.resize(N);
		for (int i = 0; i < N; i++) {
			int data;
			cin >> data;
			q.push(data);
		}
		int count = 0;
		while (!q.empty()) {	
			arr[count++] = q.top();
			q.pop();
		}
	}
	void use_two_pointer() {
		int low = 0, high = arr.size() - 1, water;
		while (low < high) {
			water = arr[low]+ arr[high];
			rq.push({ high,low,abs(water) });
			if (water > 0)
				high--;
			else if (water < 0)
				low++;
			else
				break;
		}
		info result = rq.top();
		int a = arr[result.high], b = arr[result.low];
		if (a<b)
			cout << a << " " << b;
		else
			cout << b<< " " << a;
	}
	void run() {
		input();
		use_two_pointer();
	}
};
class baekjoon13549 {
public:
	int N, K,size;
	vector<int> d;
	struct compare {
		bool operator()(const int& t1, const int& t2) {
			return t1 > t2;
		}

	};
	priority_queue<int, vector<int>, compare> q;
	void input() {
		cin >> N >> K;
		size = max(N, K) * 2;
		d.resize(size, INT_MAX);
	}
	void daijk() {
		q.push(N);
		d[N] = 0;
		while (!q.empty()) {
			int cur = q.top();
			q.pop();
   
			int next1 = cur * 2,
				next2 = cur + 1,
				next3 = cur - 1;

			if (next1 < size) {
				if (d[next1] > d[cur]) {
					d[next1] = d[cur];
					q.push(next1);
				}
			}
			if (next2 < size) {
				if (d[next2] > d[cur] + 1) {
					d[next2] = d[cur] + 1;
					q.push(next2);
				}
			}
			if (next3 >= 0) {
				if (d[next3] > d[cur] + 1) {
					d[next3] = d[cur] + 1;
					q.push(next3);
				}
			}
		}
	}
	void output() {
		cout << d[K];
	}
	void run() {
		input();
		daijk();
		output();
	}
};
class bj11000 {
public:
	int N, lesson_room = 0;
	struct  lesson_time {
		int start, end;
	};
	struct lesson_compare {
		bool operator()(const lesson_time& l1, const lesson_time& l2) {
			if (l1.start == l2.start)
				return l1.end > l2.end;
			else
				return l1.start > l2.start;
		}
	};
	struct plan {
		bool operator()(const int& t1, const int& t2) {
			return t1 > t2;
		}
	};
	priority_queue<int, vector<int>, plan> q;
	priority_queue<lesson_time, vector<lesson_time>, lesson_compare> lesson;
	void input() {
		cin >> N;
		for (int i = 0; i < N; i++) {
			lesson_time a;
			cin >> a.start >> a.end;
			lesson.push(a);
		}
	}
	void process() {
		while (!lesson.empty()) {
			lesson_time cur = lesson.top();
			lesson.pop();
			if (q.empty()) {
				q.push(cur.end);
				lesson_room++;
			}
			else if (q.top() <= cur.start) {
				q.pop();
				q.push(cur.end);
			}
			else {
				q.push(cur.end);
				lesson_room++;
			}
		}
	}
	void output() {
		cout << lesson_room;
	}
	void run() {
		input();
		process();
		output();
	}
};
class bj12865 {
public:
	int N, K;
	struct item {
		int w, v;
	};
	vector<item> items;
	vector<vector<int>> D;
	void input() {
		cin >> N >> K;
		items.resize(N + 1);
		D.resize(N+1, vector<int>(K+1));
		for (int i = 1; i <= N; i++) 
			cin >> items[i].w >> items[i].v;
	}
	void process() {
		for (int i = 1; i <= N; i++) {
			for (int j = 0; j <= K; j++) {
				if (j >= items[i].w)
					D[i][j] = max(D[i - 1][j], D[i-1][j - items[i].w] + items[i].v);
				else
					D[i][j] = D[i-1][j];
			}
		}
	}
	void output() {
		cout << D[N][K];
	}
	void run() {
		input();
		process();
		output();
	}
};
class bj2042 {
public:
	long long N, M, K;
	vector<long long> tree, arr, result;
	struct oper {
		long long a, b, c;
	};
	vector<oper> opers;
	void input() {
		cin >> N >> M >> K;
		arr.resize(N + 1);
		tree.resize(4 * N);
		opers.resize(M + K);
		for (long long i = 1; i <= N; i++)
			cin >> arr[i];
		for (long long i = 0; i < M + K; i++)
			cin >> opers[i].a >> opers[i].b >> opers[i].c;
	}
	void build(long long node, long long start, long long end) {
		if (start == end)
			tree[node] = arr[start];
		else {
			long long mid = (start + end) / 2;
			build(2 * node, start, mid);
			build(2 * node + 1, mid + 1, end);
			tree[node] = tree[node * 2] + tree[2 * node + 1];
		}
	}
	void update(int node, int index, int dif, int start, int end) {
		if (index > end || start > index) return;
		tree[node] += dif;
		if (start != end) {
			int mid = (start + end) / 2;
			update(2 * node, index, dif, start, mid);
			update(2 * node + 1, index, dif, mid + 1, end);
		}
		else
			arr[index] += dif;
	}
	int query(int node, int start, int end, int L, int R) {
		if (end < L || R < start) return 0;
		if (L<=start && end <= R) return tree[node];
		if (start != end) {
			int mid = (start + end) / 2;
			return query(2 * node, start, mid, L, R) + query(2 * node + 1, mid + 1, end, L, R);
		}
	}
	void process() {
		build(1, 1, N);
		for (long long i = 0; i < M + K; i++) {
			if (opers[i].a == 1) {
				long long dif = opers[i].c - arr[opers[i].b];
				update(1, opers[i].b, dif, 1, N);
			}
			else if (opers[i].a == 2)
				result.push_back(query(1, 1, N, opers[i].b, opers[i].c));
		}
	}
	void output() {
		for (long long i = 0; i < result.size(); i++)
			cout << result[i] << '\n';
	}
	void run() {
		input();
		process();
		output();
	}
};
class bj2110 {
public:
	int N,C;
	vector<int> arr;
	struct compare {
		bool operator()(const int& t1, const int& t2){
			return  t1 > t2;
		}
	};
	priority_queue<int, vector<int>, compare> q;
	void input() {
		cin >> N >> C;
		arr.resize(N);
		for (int i = 0; i < N; i++) {
			int a;
			cin >> a;
			q.push(a);
		}
		int count = 0;
		while (!q.empty()) {
			arr[count++] = q.top();
			q.pop();
		}
	}
	void binary_search() {
		int low = 0, high = N - 1;
		int mid = N / C;
		while (low < high) {
		if(arr[mid]- arr[low] > mid)
		
		}
	}

};
int main() {
	bj2042 R;
	R.run();
	return 0;
}