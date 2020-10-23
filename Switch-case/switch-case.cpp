#include <iostream>
using namespace std;

int main()
{
    /*
        Jika nilai >= 85, maka mendapat nilai A
        Jika nilai >= 75, maka mendapat nilai B
        Jika nilai >= 65, maka mendapat nilai C
        Jika nilai >= 55, maka mendapat nilai D
        Jika nilai < 55, maka mendapat nilai E
    */

    // Deklarasi tipe data variabel int
    int pilihan;

    // Proses input
    cout << "Tentukan pilihan mu (1 - 4) : ";
    // Menyimpan data ke dalam variabel
    cin >> pilihan;

    // Proses switch case
    switch (pilihan)
    {
    case 1:
        cout << "Anda Memilih angka 1";
        break;

    case 2:
        cout << "Anda memilih angka 2";
        break;

    case 3:
        cout << "Anda memilih angka 3";
        break;

    case 4:
        cout << "Anda memilih angka 4";
        break;

    default:
        cout << "Pilihan anda tidak ada dalam list ";
        break;
    }

    return 0;
}