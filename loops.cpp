#include <iostream>
using namespace std;

int main(){
	cout << "For Loop" <<endl;
	for(int i=0;i<100;i++){
		cout << i << endl;

	}
	int i=0;
	cout << "While loop" << endl;
	while(i<10){
		cout << i << endl;
		i++;
	}
	i=100;
	cout << "Switch statement" << endl;
	switch(i){
		case 10:
			cout << 10 << endl;
			break;
		case 100:
			cout << 100 << endl;
			break;
		default:
			break;
	}


	return 0;
}
