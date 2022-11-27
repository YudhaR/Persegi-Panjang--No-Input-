#include <iostream>

/*
    Program Persegi Panjang
    Ket : Program mencari luas dan keliling persegi panjang
    By  : Yudha Rizqia Grafer
    Tgl : 14 September 2022

*/

using namespace std;

int main()
{
    //Kamus
    int panjang, lebar, keliling, luas;
    panjang = 5;
    lebar = 7;

    //Algoritma
    keliling = 2 * (panjang + lebar);
    luas = panjang * lebar;
    cout << "Program Mencari Keliling dan Luas Persegi Panjang" << endl;
    cout << "=================================================" << endl;
    cout << "Keliling : " << keliling << endl;
    cout << "Luas : " << luas << endl;
    return 0;
}
