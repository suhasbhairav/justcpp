#include <iostream>

using namespace std;


void test1(int, int);
void test2(double, double);

void test1(int a, int b){
	cout << a+b << endl;	
}

void test2(double a, double b){
	cout << a+b << endl;
}



int main(){
	test1(10,20);
	test2(10.20,20.30);

	return 0;
}

