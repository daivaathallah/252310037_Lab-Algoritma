#include <iostream>
using namespace std;

void valNilai(int *nilai) {
	if(*nilai < 0) {
		*nilai = 0;
	}
	else if(*nilai > 100) {
		*nilai = 100;
	}
}

int main() {
	int angka;
	
	cout << "Masukkan Nilai:" ;
	cin >> angka;
	
	valNilai(&angka);
	
	cout << "Nilai yang telah divalidasi: " << angka;
	
	return 0;
}
