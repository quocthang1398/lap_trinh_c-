#include <iostream>

using namespace std;

main(){
	int number =1;
	while(number <=5){
		for(int i=1;i<=number;i++)
			cout << i << " ";
		cout << endl;
		number++;
	}
}
	//tam giac can
//int number =1;
//		while(number <=4) {
//		for(int i=1;i<=4-number;i++) 
//			cout << "  ";
//		
//		for(int i=number*2;i >= 2;i--) 
//			cout << "* ";
//			
//		cout << endl;	
//		number++;
//		}

	//tam giac vuong nguoc
//	int number =1;
//	while(number <=5){
//		for(int j=1;j<=5-number;j++)
//			cout << "  ";
//		for(int i=1;i<=number;i++)
//			cout << "* ";
//		cout << endl;
//		number++;
//	}
