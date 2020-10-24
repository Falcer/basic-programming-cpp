#include <iostream>
using namespace std;

int main()
{
    // Deklarasi tipe data variabel integer
    int absen;

    // Proses Input
    cout << "Masukkan nomor absen anda :";
    // Menyimpan data ke variabel
    cin >> absen;

    // Proses output
    if (absen > 5 || absen < 10)
    {
        cout << "dipanggil dosen";
    }
    else
    {
        cout << "ga dipanggil";
    }

    return 0;
}
