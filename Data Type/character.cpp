#include <iostream>
using namespace std;

int main()
{
    // Deklarasi tipe data variabel character
    char nama[10];

    // Proses input
    cout << "Masukkan nama anda : ";

    // Menyimpan data ke variabel
    cin >> nama;

    // Proses output
    cout << "Selamat datang " << nama;

    return 0;
}