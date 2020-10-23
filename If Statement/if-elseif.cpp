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

    // Deklarasi tipe data variabel float dan char
    float nilai;
    char hasil;

    // Proses input
    cout << "Masukkan nilai anda : ";
    // Menyimpan data kedalam variabel
    cin >> nilai;

    // Proses if - else if - else
    if (nilai >= 85)
    {
        hasil = 'A';
    }
    else if (nilai >= 75)
    {
        hasil = 'B';
    }
    else if (nilai >= 65)
    {
        hasil = 'C';
    }
    else if (nilai >= 55)
    {
        hasil = 'D';
    }
    else
    {
        hasil = 'D';
    }

    cout << "Nilai yang kamu peroleh adalah " << hasil;

    return 0;
}