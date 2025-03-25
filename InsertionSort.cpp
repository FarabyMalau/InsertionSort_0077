#include <iostream>
using namespace std;

int arr[20]; // Membuat Array dengan panjang data 20
int n; // Membuat Variable inputan n

void input()
{ // Procedure INput
    while (true)
    {
        cout <<"Masukkan Jumlah Data pada Array : "; // Membuat Inputan jumlah element Array
        cin >> n; // memanggil variable inputan n

        if (n <= 20)
        { // Membuat Kondisi n tidak lebih dari 20
        break;
        }
        else
        {
            cout << "\nArray yang anda masukkan maksimal 20 Elemen.\n"; // Menampilkan pesan jika data lebih dari 20
        }
    
    }   
}
