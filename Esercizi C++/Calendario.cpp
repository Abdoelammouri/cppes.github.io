/*
Acquisire un valore intero >1582 e dire se corrisponde a un anno bisestile oppure no
Un anno é bisestile se divisibile per 400( se centenario) o se sono divisibili per 4 (no centenario)
2000 é anno bisestile
1900 non é bisestile
*/
#include <iostream>
using namespace std;

int main(){
    int anno;
    cout << "Scrivi un anno" << endl;
    cin >> anno;

    if(anno<1582)
        cerr << "Anno non valido" << endl;
    else{
        if(anno%100==0 && anno%400==0)
            cout<< anno << " centenario bisestile" << endl;
        else{
            if (anno%100!=0 && anno%4==0)
                cout<< anno << " bisestile" << endl;
            else
                cout<< anno << " non bisestile" << endl;
        }
    }
return 0;
}


