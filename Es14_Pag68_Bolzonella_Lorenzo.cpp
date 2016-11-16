#include <iostream>
#include <math.h>
// Bolzonella Lorenzo
using namespace std;

int main()
{
    int a;
    int b;
    int perimetro;
    int area;
    int diagonale;
    cout << "\n\n";
    cout << "                               Es 14 Pag 68                           ";
    cout << "\n\n";
    cout << "----------------------------------------------------------------------";
    cout << endl << " Inserisca il valore di a: " << endl;
    cin >>  a;
    cout << endl << " Inserisca il valore di b: " << endl;
    cin >>  b;
    perimetro= a+b+a+b;
    area=a*b;
    diagonale=sqrt(a*a+b*b);

    cout << " Il perimetro e': " << perimetro;
    cout << "\n\n";
    cout << " L'area e': " << area;
    cout << "\n\n";
    cout << " La diagonale e': " << diagonale;
    cout << "\n\n";

}
