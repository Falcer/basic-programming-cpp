#include <iostream>
using namespace std;

int main()
{
    // Deklarasi dan inisialisasi array
    int nilai_ipa[5] = {100,
                        50,
                        75,
                        80,
                        85};

    // Cara memanggil semua data array
    // Yaitu dengan menggunakan control statement for

    cout << "Nilai ipa terdiri dari : ";
    for (int i = 0; i < 5; i++)
    {
        cout << nilai_ipa[i] << " ";
    }

    return 0;
}