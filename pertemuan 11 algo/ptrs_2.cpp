#include <iostream>
using namespace std;

//int main() {
//	int ilham, amir, *raka;
//	ilham = 75;
//	amir = ilham;
//	raka = &ilham;
//	cout << "nilai ilham = " << ilham << endl;
//	cout << "nilai amir = " << amir << endl;
//	cout << "nilai raka = " << *raka << endl;
//	return 0;
//}

int main () {
	int yofrie = 93;
	int *hadiansyah;
	cout << "nilai awal yofrie = " << yofrie << endl;
	hadiansyah =&yofrie;
	cout << "nilai hadiansyah sekarang = " << *hadiansyah << endl;
	*hadiansyah = 50;
	cout << "nilai hadiansyah sekarang = " << *hadiansyah << endl;
	return 0; 
}
//
//int main () {
//	int ilham;
//	int *raka;
//	int **amir;
//	int ***bob;
//	
//	ilham = 75;
//	cout << "nilai ilham = " << ilham << endl;
//	raka = &ilham;
//	amir = &raka;
//	bob = &amir;
//	
//	cout << "nilai raka mengakses ilham = " << *raka << endl;
//	cout << "nilai amir mengakses amir = " << **amir << endl;
//	cout << "nilai bob hasil mengakses amir = " << ***bob << endl;
//	return 0;
//}
