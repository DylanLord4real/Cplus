#include <iostream>

using namespace std;

double minn (double *tab, int taille){
    double inf = tab[0];
    for(int i = 0; i < taille; i++){
        if(inf > tab[i]){
            inf = tab[i];
        }else{
            inf = inf;
        }
    }
    return inf;
}

int main()
{
    cout << "Hello world!" << endl;
    double tab[] = {6, 5, 1, 5, 9, 10};
    int taille = sizeof(tab)/sizeof(double);
    double ptit = minn(tab, taille);
    cout << ptit << endl;
    return 0;
}
