#include <iostream>

using namespace std;

void compareTab (int *tab1, int *tab2, int taille){
    char comp[taille] = {};
    for(int i = 0; i < taille; i++){
        if(tab1[i] > tab2[i]){
            comp[i] = '>';
        }else if (tab1[i] < tab2[i]){
            comp[i] = '<';
        }else{
            comp[i] = '=';
        }
    }
}

int main()
{
    cout << "Hello world!" << endl;
    return 0;
}
