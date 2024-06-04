#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main ()
{
    string baris;

    // membuka file dalam mode menulis.
    ofstream outfile;
    // menunjuk ke sebuah nama file
    outfile.open("ContohFile.txt");

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;

    // unlimited loap untuk menulis
    while (true)
    {
        cout << "- ";
        // mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
    }
}