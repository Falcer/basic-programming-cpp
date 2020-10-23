#include <iostream>
using namespace std;

int main()
{
    // Deklarasi tipe data variabel integer
    int a, b;

    // Proses input
    cout << "Masukkan angka pertama : ";
    // Menyimpan data ke dalam variabel
    cin >> a;

    // Sama seperti diatas
    cout << "Masukkan angka kedua : ";
    cin >> b;

    // Proses Output
    if (a != b)
    {
        if (a > b)
        {
            cout << "Angka A lebih besar dari B";
        }
        else
        {
            cout << "Angka A lebih kecil dari B";
        }
    }
    else
    {
        cout << "A dan B memiliki angka yang sama";
    }
    return 0;
}