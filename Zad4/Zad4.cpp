#include <iostream>
#include <fstream>
#include <string>
using namespace std;
int main()
{
    fstream plik;
    string linia, zawartosc;


    plik.open("imona.txt", ios::in | ios::out | ios::app);
    cout << "Napisz imie = "; cin >> zawartosc;
    if (plik.good()) {
        plik << zawartosc << "\n";
        while (getline(plik, linia)) {
            cout << linia << endl;
        }

    }
    else {
        cout << "nie ma takiego pliku" << endl;
    }
    
   


    plik.close();

    EXIT_SUCCESS;
}
