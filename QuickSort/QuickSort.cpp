#include <iostream>
using namespace std;

int arr[20] //array of integers to hold values
int cmp_count = 0; // number of comparison
int mov_count = 0; // number of data movements
int n;

void input() {
	while (true)
	{
		cout << "Masukkan panjang element array : ";
		cin >> n;

		if (n <= 20)
			break;
		else
			cout << "\nMaksimum panjang array adalah 20" << endl;
	}
	
	cout << "\n-------------------" << endl;
	cout << "\nEnter Array Element" << endl;
	cout << "\n-------------------" << endl;
}