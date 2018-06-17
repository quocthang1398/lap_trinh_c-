#include <iostream>

using namespace std;

main(){
	const int lenght=7;
	int number =1;
	while(number <=lenght){
		for(int i=1;i<=lenght;i++)
			if(i>=2 && i<=lenght-1 && number >=2 && number <=lenght-1)
			cout << "  ";
			else cout << "* ";
		cout << endl;
		number++;
	}
}
