#include <iostream>
using namespace std;

int main() {
	int r, c, matrix[3][3], i, j;
	
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			cout<< "masukkan nilai matrix[" << i << "][" << j << "]:";
			cin >> matrix[i][j];
		}
	}
	
	cout << "\nHasil matrix:\n";
	for(i=0; i<3; i++) {
		for(j=0; j<3; j++) {
			cout << matrix[i][j] << " ";
		}
		cout<< endl;
	}
	return 0;
}
