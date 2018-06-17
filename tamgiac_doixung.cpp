#include <iostream>

using namespace std;

main(){
	int number=1;
	while(number<=5){
		for(int i=5;i>number;i--)
			cout << " ";
		for(int j=number;j>=1;j--)
			cout << j;
		for(int k=2;k<=number;k++)
			cout << k;
		cout << endl;
		number++;
	}
}
