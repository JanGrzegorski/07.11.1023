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
     
        EXIT_SUCCESS;
}
