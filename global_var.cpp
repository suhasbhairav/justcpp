#include <iostream>

using namespace std;


int var = 100;    /*  Global variable  */

int main(){
	int var = 110;    /* Local variable  */
	
	cout << "Local Variable:"<< var << endl;
	cout << "Global Variable:" << ::var << endl;

	return 0;
}
