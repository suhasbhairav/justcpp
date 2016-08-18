#include <iostream>

using namespace std;
#define MAX 120

int main(){

	const int var = 200;
	cout << "Const:" << var * 200 << endl;
	cout << "#define preprocessor:" << MAX * var << endl;

	return 0;
}
