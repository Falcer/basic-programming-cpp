#include <iostream>
using namespace std;

int main()
{
    // Deklarasi dan inisialisasi array
    int angka[2][5] = {{1, 2, 3, 4, 5},
                       {6, 7, 8, 9, 10}};

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