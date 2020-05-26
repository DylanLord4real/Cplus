#include <iostream>

using namespace std;

int main()
{
    int N, somme;
    somme = 0;
    cout << "Bienvenue dans notre app" << endl;
    cout << "Veuillez saisir un entier" << endl;
    cin >> N;
    for(int i = 1; i <= N; i++){
            somme = somme +i;
    }
    cout << "La somme des nombres premiers est : " << somme << endl;
    return 0;
}
