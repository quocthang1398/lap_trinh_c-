#include <iostream>
#include <cmath>

using namespace std;

main(){ 
	string name;
	double toan,li,hoa;
	cout << "ten hoc sinh :" << endl;
	getline(cin,name);
	cout << "nhap so toan" << endl; cin >> toan;
	cout << "nhap so li" << endl; cin >> li;
	cout << "nhap so hoa" << endl;cin >> hoa;
	double DTB=(toan+li+hoa)/3;		
	if(DTB>=5) 
		if(DTB >=8) cout <<"hoc sinh : "<<name<<" - co diem trung binh:"<<DTB<<"  "<<"xep loai xuat sac";
		else if (DTB <=7 && DTB <8) cout <<"hoc sinh "<<name<<" - co diem trung binh:"<<DTB<<"  "<<"xep loai gioi ";
		else if (DTB <=6 && DTB <7) cout <<"hoc sinh "<<name<<" - co diem trung binh:"<<DTB<<"  "<<"xep loai kha";
		else cout <<"hoc sinh "<<name<<" - co diem trung binh:"<<DTB<<"  "<<"xep loai trung binh";
	else cout <<"hoc sinh "<<name<<" - co diem trung binh:"<<DTB<<"  "<<"xep loai yeu";
}
	
