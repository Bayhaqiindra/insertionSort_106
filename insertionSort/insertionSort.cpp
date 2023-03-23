#include <iostream>
using namespace std;

int arr[20];	 //Membuat array dengan panjang data 20
int n;          //Membuat variable inputan n

void input()
{	// Procedure Input
	while (true)
	{
		cout << "Masukkan jumlah data pada Array : ";	// Membuat inputan Jumlah element Array
		cin >> n;

		if (n <= 20)
		{	// Mmembuat kondisi n tidak llebih dari 20
			break;

		}

