#include <iostream>
using namespace std;

int arr[20];        //membuat array dengan panjang data 
int n;              //membuat variabel inputan n .

void input() {            //prosedur input
	while (true)
	{
		cout << "masukan jumlah data pada array :";   //membuat inputan jumlah element array
		cin >> n;                         //memanggil variabel inputan n

		if (n <= 20) {                   //membuat kondisi n tidak lebih dari 20
			break;
		}
		else
		{
			cout << "\nArray yang anda masukan makksimal 20 elemen , \n"; //menampilkan pesan jika data lebih dari 20
		}
	}
	cout << endl;
	cout << "====================" << endl;   //membuat tampilan susunan data pada elemen array
	cout << "masukan elemen array" << endl;
	cout << "====================" << endl;

	for (int i = 0; i < n; i++)
	{
		cout << "data ke-" << (i + 1) << " :";
		cin >> arr[i];
	}
}
