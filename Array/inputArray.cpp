#include <iostream>
using namespace std;

int main()
{
    // Deklarasi dan inisialisasi array
    int nilai_ipa[5];

    // Proses Input
    for (int i = 0; i < 5; i++)
    {
        cout << "Masukkan angka : ";
        cin >> nilai_ipa[i];
    }

    // Cara memanggil semua data array
    // Yaitu dengan menggunakan control statement for

    cout << "Nilai yang anda masukkan : ";
    for (int i = 0; i < 5; i++)
    {
        cout << nilai_ipa[i] << " ";
    }

    return 0;
}