#include <iostream>
#include <conio.h>

using namespace std;

int even(int no) {
	if (no % 2 == 0) {
		return 1;
	} else {
		return 0;
	}
		
}

int main() {
	int no;
	int result = 0;

	cout << "\n Masukkan Nomor Apapun  : ";
	cin >> no;

	result = even(no);

	if (result == 1) {
		cout << "\n No is even";
	} else {
		cout << "\n No is odd";
	}
		


	cout << "\n Masukkan Nomor Apapun  : ";
	cin >> no;

	result = even(no);

	if (result == 1) {
		cout << "\n No is even";
	} else {
		cout << "\n No is odd";
	}
		
	cout << "\n Masukkan Nomor Apapun  : ";
	cin >> no;

	result = even(no);

	if (result == 1) {
		cout << "\n No is even";
	} else {
		cout << "\n No is odd";
	}
		
	cout << "\n Masukkan Nomor Apapun  : ";
	cin >> no;

	result = even(no);

	if (result == 1) {
		cout << "\n No is even";
	} else {
		cout << "\n No is odd";
	}
		
	_getch();
	return 0;
}