#include <iostream>

using namespace std;

int main() {
    int a = 3;
    cout << "a:\n  adresa:  " << (&a) << endl;
    cout << "  valoare: " << a << endl;
    int* p = &a;
    cout << "p:\n  adresa:  " << (&p) << endl;
    cout << "  catre:   " << p << endl;
    cout << "  valoare: " << (*p) << endl;

    int* p = (int*) malloc(sizeof(int));
    (*p) = 4;
    cout << "p:\n  adresa:  " << (&p) << endl;
    cout << "  catre:   " << p << endl;
    cout << "  valoare: " << (*p) << endl;
    delete p; p = NULL;

    return 0;
}