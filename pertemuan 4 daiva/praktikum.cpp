#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cout << "masukan nilai A : ";
	cin >> a;
	cout << "masukan nilai B : ";
	cin >> b;
	
	if(a>b){
	
	cout << "A-B = " << a-b << endl;
	}
	else if(a<b){
	
	cout << "B-A = " << b-a << endl;
}
	else if(a==b){
	
	cout << "A+B = " << a+b << endl;
}
	return 0;
	
}
