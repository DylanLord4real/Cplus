#include <iostream>

using namespace std;

int sum (int *tab, int taille){
    int calcul = 0;
    for(int i = 0; i < taille; i++){
        calcul = calcul + tab[i];
    }
    return calcul;
}

int main()
{
    cout << "Hello world!" << endl;
    int tab[] = {6, 5, 1, 5, 9, 10};
    int taille = sizeof(tab)/sizeof(int);
    int cal = sum(tab, taille);
    cout << cal << endl;
    return 0;
}
