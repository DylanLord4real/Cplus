#include <iostream>

using namespace std;

int main()
{
    int prix, calcul;
    char reponse;
    cout << "Bienvenue dans notre Programme de Paiement" << endl;
    cout << "Veuillez Saisir le prix de votre article" << endl;
    cin >> prix;
    cout << "Ce article est-il en solde ? (O/N)" << endl;
    cin >> reponse;
    if(reponse == 'O' || reponse == 'o'){
        calcul = prix -(prix * 0.5);
        cout << "Une remise de 50% est possible pour votre article" << endl;
        cout << "Le montant a payer est : " << calcul << " FCFA" << endl;
    }else if (reponse == 'N' || reponse == 'n'){
        cout << "Aucune remise possible pour votre article" << endl;
        cout << "Le montant a payer est : " << prix << " FCFA" << endl;
    }else{
        cout << "Desolé mais nous ne pouvons pas acceder a votre requête" << endl;
    }
    return 0;
}
