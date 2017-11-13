//Acquisire tre valori e ordinarli
#include <iostream>
using namespace std;

int main(){
    int valore, valore1, valore2, valore3;
    cout << "Dammi tre valori" << endl;
    cin >> valore1;
    cin >> valore2;
    cin >> valore3;




    if (valore1>valore2){
        valore=valore2;
        valore2=valore1;
        valore1=valore;
    }

    if(valore1>valore3){
        valore=valore3;
        valore3=valore1;
        valore1=valore;
    }

    if (valore2>valore3){
            valore=valore3;
            valore3=valore2;
            valore2=valore;
    }
    cout << valore1 << " " << valore2 << " "<< valore3 << endl;

    return 0;
}
