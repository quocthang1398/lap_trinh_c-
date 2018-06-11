#include <iostream>
#include <cmath>

using namespace std;

main(){ 
	int month;	
	cout << "nhap mot thang bat ki :" <<endl;
	cin >> month;
		if(month >=1 && month <=12)
			if(month ==1 || month == 3 || month ==2 )	cout << "thang "<<month<<" thuoc quy 1" <<endl;	 			
			else if(month ==4 || month ==5 || month ==6) cout << "thang "<<month<<" thuoc quy 2 " <<endl;
					else if (month ==7 || month ==8 || month ==9) cout << "thang "<<month<<" thuoc quy 3 " <<endl;
     						else  cout << "thang "<<month<<" thuoc quy 4" << endl;					
		else cout << "nhap sai!!!" <<endl;	

}
