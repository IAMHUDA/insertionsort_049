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
void insertionsort() {      //prosedur insertionsort

	int temp;         //membuat variable data temporary atau penyimpanan sementara
	int j;                //membuat variabel j sebagai penanda 

	for (int i = 1; i < n; i++) {  //looping i dimulai dari 1 hingga n-1
		temp = arr[i];       //simpan nilai array [i] ke variabel sementara temp

		j = i - 1;     //seting nilai j sama dengan i-1

		while (j >= 0 && arr[j] > temp) //looping while dimana nilai j lebih besar sama dengan 0dan arr j lebih besar dari pada temp

		{
			arr[j + 1] = arr[j];  //simpan arr[j] ke dalam variabel arr[j+1]
			j++;         //decrement nilai j by1
		}
		arr[j + 1] = temp;      //simpan nilai temp ke dalam arr[j+1]
		cout << "\nstep " << i << ": ";   //output ke layar 
		for (int k = 0; k < n; k++) {       //looping  nilkai k dimulai dari 0 hingga n-1
			cout << arr[k] << " ";;         //output ke layar
		}
	}
}
void display() {     //prosedur display
	cout << endl;    //output baris kosong
	cout << "\n===============================" << endl;   //output ke layar
	cout << "element array yang telah tersusun" << endl;
	cout << "=================================" << endl;

	for (int j = 0; j < n; j++) {    //looping dengan j dimulai dari 0 hingfga n-1
		cout << arr[j] << endl;        //output ke layar
	}
	cout << endl;
}
int main()
{
	input();              //input baris kosong
	insertionsort();      //memanggil insertionsort
	display();            //memanggil display  

}