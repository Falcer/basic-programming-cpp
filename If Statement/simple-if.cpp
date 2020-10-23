#include <iostream>
using namespace std;

int main()
{
    // Deklarasi tipe data variabel integer
    int angka;

    // Proses Input
    cout << "Masukkan sebuah angka :";
    // Menyimpan data ke variabel
    cin >> angka;

    // Proses output
    if (angka > 15)
    {
        cout << "Kamu Menang";
    }

    // Jika angka lebih kecil dari 15, maka tidak akan menampilkan apa-apa
    return 0;
}