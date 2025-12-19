#include <iostream>
#include <conio.h>
#include <stdio.h>
using namespace std;

void tambah(int *c, int *d);

int main () {
	int a, b;
	a = 4;
	b = 6;
	
	cout << "nilai sebelum pemanggilan fungsi";
	cout << "\na = " << a << " b = " << b;
	tambah(&a, &b);
	cout << endl;
	cout << "\nnilai setelah pemanggilan fungsi";
	cout << "\na =" << a << " b = " << b;
	getch(); 
}

void tambah(int *c, int *d) {
	*c += 7;
	*d += 5;
	cout << endl;
	cout << "\nnilai di akhir fungsi tambah()";
	cout << "\nc = " << *c << " d = " << *d;
 }
