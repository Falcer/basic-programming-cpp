#include <iostream>
using namespace std;

int main()
{
    // deklarasi tipe data variabel integer
    int number1, number2;

    // proses input
    cout << "Masukkan angka pertama : ";

    // menyimpan data ke variabel
    cin >> number1;

    cout << "Masukkan angka kedua  : ";
	cin >> number2;
	
    // proses output
    cout << "angka pertama + angka kedua : " << number1 + number2 << endl;
    
    //assignment
    cout << "kalau pake += hasilnya : ";
    number1 += number2;
    cout << number1;
    
	return 0;
}
