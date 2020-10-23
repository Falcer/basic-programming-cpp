#include <iostream>
using namespace std;

int main()
{
    // deklarasi tipe data variabel float
    double pi, jari, hasil;
    pi = 3.14159;

    // proses input
    cout << "Masukkan jari-jari lingkaran : ";

    // menyimpan data ke variabel
    cin >> jari;

    // proses output
    hasil = pi * jari * jari;
    cout << "Hasil luas lingkaran adalah " << hasil;

    return 0;
}