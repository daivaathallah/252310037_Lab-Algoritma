#include <iostream>
using namespace std;

int faktorial(int x) {
	int hasil=1;
	for(int i=x; i>0; i--) {
		hasil*=i;
	}
	return hasil;
}

int main() {
	int a;
	cout << "masukkan angka: ";
	cin >> a;
	int hasil = faktorial(a);
	cout << "\nhasil faktorial " << a << " = " << hasil << endl;
}
