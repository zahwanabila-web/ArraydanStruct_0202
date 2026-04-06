#include <iostream>
using namespace std;

struct Orang
{
    string nama;
    string alamat;
    int umur;
};

int main() {
    Orang mhs;
    //Mengisi data
    cout << "mengisi data" << endl;
    cout << "Nama : " ;
    cin >> mhs.nama;
    cout << "Alamat : " ;
    cin >> mhs.alamat;
    cout << "Umur : " ;
    cout << endl;
}