#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    fstream plik;
    char tresc[100];
    plik.open("artykul.txt", ios::in | ios::out | ios::trunc);
    cout << "Wprowadz artykul: " << endl;
    cin.getline(tresc, 100, '\n');

    plik << tresc;
    plik.close();
    system("pause");
    //-------------------------------------------------------
    ifstream plikOdczyt;//to bez sensu ale pod ćwiczenia
    plikOdczyt.open("artykul.txt");

    if (plikOdczyt.is_open()) {
        string linia, zawartosc;
        char znak;
        
        while (!plikOdczyt.eof())
        {
            znak = plikOdczyt.get();
            if (plikOdczyt.good()) cout << znak << endl;
            else cout << "Nie moge otworzyć pliku blyac" << endl;
        }
    }

    plikOdczyt.close();
    system("pause");



    EXIT_SUCCESS;
}
