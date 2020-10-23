#include <iostream>
using namespace std;

int main()
{
    // Deklarasi tipe data boolean
    int angka;
    bool hasil;

    // Proses input
    cout << "Masukkan angka :";

    // Menyimpan data ke variabel
    cin >> angka;

    // Proses output
    hasil = angka < 10;
    cout << hasil;

    // Jika output = 1 (Benar) , Jika output = 0 (salah)
    return 0;
}