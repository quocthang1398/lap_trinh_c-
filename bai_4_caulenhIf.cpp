#include <iostream>
#include <cmath>

using namespace std;

main(){ 
	int month,year;	
	cout << "nhap thang :" <<endl;
	cin >> month;
		if(month >=1 && month <=12)
			if(month ==1 || month == 3 || month ==5 || month ==7 || month ==8 || month ==10 || month ==12)	cout << "thang "<<month<<" co 31 ngay" <<endl;	 			
			else if(month ==2)
					if(year%4 == 0 && year%100 !=0 || year % 400 == 0) cout << " thang "<<month<<" co 29 ngay" << endl;
     				else  cout << "thang "<<month<<" co 28 ngay" << endl;
			else if(month ==4) cout<<"thang "<<month<<" co 30 ngay" <<endl;					
		else cout << "nhap sai!!!" <<endl;	

}
