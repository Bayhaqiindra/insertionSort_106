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

	for (int i = 0; i < n; i++)		//Mengggunakan perulangan for untuk menyimpan data pada array
	{
		cout << "Data ke-" << (i + 1) << ": ";	//Memasukkan atau menginput nilai data n
		cin >> arr[i];		//Memasukkan nilai data n kedalam array arr
	}
};
// Procedure Insertionsort
void insertionsort()
{

	int temp; //Membuat variable data temporer atau penyiimpanan sementara
	int j; //Membuat variable j sebagai penanda

	for (int i = 1; i < n; i++) //1.Looping dengan i dimulai hari 1 hingga n-1
	{

		temp = arr[i];	//2.Simpan nilai arr[i] ke variabel sementara temp

		j = i - 1;	//3.Setting  nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp)	// 4. Looping while dimana nilai j lebih besar
		{								// arr[j] lebih besar daripada  temp
			arr[j + 1] = arr[j];		// a. simpan arr[j] ke dalam variable arr[j + 1]
			j--;						// b. Decrement nilai j by 1
		}

		arr[j + 1] = temp;		//5. Simpan nilai temp ke dalam arr[j+1]


		cout << endl;
		cout << "\nPass " << i << ": ";		//Output ke layar
		for (int k = 0; k < n; k++)			//Looping nilai k dimulai dari 0 hingga
		{
			cout << arr[k] << " ";			//Output ke layar
		}
	}
};

void display()
{
	cout << endl;												//Output garis kosong
	cout << "Total element movement= " << n - 1 << endl;	// cout movement element
