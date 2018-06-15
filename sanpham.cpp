#include <iostream>

using namespace std;

main(){
	int maSP ,ComputerStationery,sComputerStationery,sCS,FixedDisks,sFD,sFixedDisks,Computer,sComputer,sC;
	cout << "nhap ma san pham:";cin >> maSP;	
	if(maSP==1 && maSP <3){ 
		cout << "nhap so luong san pham ComputerStationery:"; cin >> ComputerStationery;
		sComputerStationery=ComputerStationery*70;
		if(sComputerStationery >= 300 && sComputerStationery <500){		
			sCS=(float)sComputerStationery*(1-0.2);
			cout << sCS <<"$";
		}else if(sComputerStationery > 500){
			sCS=(float)sComputerStationery*(1-0.88);
			cout << sCS <<"$";
			}else if(sComputerStationery < 300)
				sCS=(float)sComputerStationery*(1-0.8);
				cout << sCS <<"$";
	}else if(maSP==2 && maSP < 3){
			cout << "nhap so luong san pham FixedDisks:"; cin >> FixedDisks;
			sFixedDisks=FixedDisks*90;
				if(sFixedDisks > 2000){
					sFD=(float)sFixedDisks*(1-0.9);
					cout << sFD <<"$";
				}else if (sFixedDisks >=1200 && sFixedDisks <2000){
							sFD=(float)sFixedDisks*(1-0.5);
							cout << sFD <<"$"; }
						else if(sFixedDisks <1200) cout << sFixedDisks << "$";
	}else if(maSP == 3){
				cout << "nhap so luong san pham Computer:"; cin >> Computer;
				sComputer=Computer*200;
				if(sComputer > 5000){
					sC=sComputer*(1-0.9);
					cout << sC << "$";
				}else if(sComputer >= 2500 && sComputer <=5000){
					sC=sComputer*(1-0.5);
					cout << sC << "$";
				}else if(sComputer <2500) cout << sComputer <<"$";}
	else cout << "nhai sai ma san pham!!!";
}				

