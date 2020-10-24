#include <iostream>
using namespace std;

int main()
{
    // Deklarasi dan inisialisasi array
    int angka[2][5];

    // Proses input
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Masukkan angka : ";
            cin >> angka[i][j];
        }
    }

    // Cara memanggil semua data
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            cout << "Angka [" << i << "] [" << j << "] : " << angka[i][j] << endl;
        }
    }

    return 0;
}