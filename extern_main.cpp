#include <iostream>

using namespace std;

int count;
extern void write_extern();
main(){

	count = 200;
	write_extern();

}
