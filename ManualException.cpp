#include <iostream>
using namespace std;

int main()
{
    try
    {
        cout << "Selamat belajar di Prodi TI UMY" << endl;
        throw 0.5; // melemparkan sebuah integer maka
        cout << "Pernyataan tidak akan dieksekusi" << endl;
    }

    catch(int a)
    {
        // blok ini akan dieksekusi
        cout << "Pengecualian akan dieksekusi" << endl;
    }

    catch(...)
    {
        /*jika selain integer maka block ini akan dieksekusi*/
        cout << "Default pengecualian dieksekusi" << endl;
    }

    return 0;
}