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
		else
		{
			cout << "\nArray yang anda masukkan maksimal 20 elemen. \n";		// Menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;										// Membuat jarak per baris program
	cout << "======================" << endl;				// Membuat tampilan susunan data element array
	cout << "Masukkan Element Array" << endl;
	cout << "======================" << endl;

