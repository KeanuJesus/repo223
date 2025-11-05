#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double a, b, c, delta, x, x1, x2;

    cout << "Oto cudowny program lamiacy prawa fizyki dla obliczania delty"<< endl << "Wypisz a: "<< endl;
    cin >> a;
    cout << "Wypisz b: "<< endl;
    cin >> b;
    cout << "Wypisz c: "<< endl;
    cin >> c;

    if (a==0)
        cout << "zmienna a nie moze byc rowna 0" << endl;
    else{

        delta = (b*b) - (4*a*c);

        if (delta > 0){
            x1 = (-b - sqrt(delta)) / (2*a);
            x2 = (-b + sqrt(delta)) / (2*a);
            cout << "x1 wynosi: " << x1 << endl;
            cout << "x2 wynosi: " << x2 << endl;
            }
            else if (delta == 0){
                x = (-b) / (2*a);
                cout << "Delta: " << delta << endl << "X wynosi: " << x << endl;
            }
            else
                cout << "Delta wynosi " << delta << ", ale bez rozwiazania" << endl;
        }

    cin.ignore();
    cin.get();

    return 0;
}
