#include <iostream>
using namespace std;

int main() {
	int r, c, a[100][100], b[100][100], sum[100][100], i, j;
	
	cout << "masukkan jumlah baris (1 - 100): ";
	cin >> r;
	
	cout << "masukkan jumlah kolom(1 - 100); ";
	cin >> c;
	
	cout << endl << "masukkan matriks pertama: " << endl;
	for(i=0; i<r; ++i) {
		for(j = 0; j < c; ++j) {
			cout << "matriks a[" << i + 1 << "][" << j + 1 << "]: ";
			cin >> a[i][j];
		}
	}
	
	cout << endl << "masukkan matriks kedua:" << endl;
	for(i=0; i < r; ++i) {
		for(j=0; j,c; ++j) {
			cout << "matriks b[" << i + 1 << "][" << j +1 << "]:";
			cin >> b[i][j];
		}
	}
	
	for(i = 0; i < r; ++i) {
		for(j=0; j<c; ++j) {
			sum[i][j] = a[i][j] + b[i][j];
		}
	}
	
	cout << endl << "hasil penjumlahan kedua matriks: " << endl;
	for(i=0; i<r; i++) {
		for(j=0; j<c; j++) {
			cout << sum[i][j] << " ";
		}
		cout << endl;
	}
	return 0;
}
