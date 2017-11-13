#include <iostream>
using namespace std;

 // Programma che calcola modulo

int main (){
    int valore, quoz, resto;
    cout << "Benvenuto"<< endl;
    cout << "Oggi e' lunedi" << endl;
    cout << "Inserisci Valore"<< endl;
    cin >> valore;

    /*
    quoz = valore / 2;
    resto = valore - (quoz*2);
    if(resto == 0)
        cout << "Il Numero " << valore << " e' Pari";
    else
        cout << "Il Numero " << valore << " e' Dispari";
    */

    /*
    if(valore - valore/2*2 == 0)
        cout << "Il Numero " << valore << " e' Pari";  piú pulito eliminando il resto delle variabili
    else
        cout << "Il Numero " << valore << " e' Dispari";

    */

    if(valore%2 == 0)
        cout << "Il Numero " << valore << " e' Pari";
    else
        cout << "Il Numero " << valore << " e' Dispari";
    /*
    cout << valore << endl;
    somma = valore+1;
    cout << "somma = " << somma << endl;
    */
    return 0;
    }
