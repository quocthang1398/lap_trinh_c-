#include <iostream>
#include <cmath>

using namespace std;

main(){ 
	
	int a,b,c, max;
	cout << "nhap 3 so nguyen a,b,c :";
	cin >> a >> b >> c ;
	if(a >= b && a >= c) max=a;
    else if(b >=a && b >= c) max=b;
    		else max=c;
    cout << ""<<max<<" la so lon nhat trong ba so "<<a<<","<<b<<","<<c<<"";

}
