#include <iostream>
#include <fstream>
using namespace std;
//Wczytywanie konkretnych znaków z plik od znaku X do Y
int main()
{
    fstream plik;
    char tresc[10] = {};
    plik.open("artykul.txt", ios::out);

    if (plik.good()) {
        plik.seekp(3);
        plik.read(tresc, 4);

    }
    else {
        cout << "Plik nie istnieje" << endl;

    }
    plik.close();
    system("pause");



    EXIT_SUCCESS;
}
