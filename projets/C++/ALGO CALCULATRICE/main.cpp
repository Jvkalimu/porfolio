#include <iostream>

using namespace std;

int main()
{
    double var1, var2; int continued;
    char operation;
    cout <<"Premiere operande="<<endl;
    cin >>var1;
    cout <<"Operation= tapez +, -, * ou / selon votre choix"<<endl;
    cin >>operation;
    /*while(operation!='+' || operation!='-' || operation!='*' || operation!='/') {
        cout<<"Saisissez un operateur valide (+,-,* ou /)"<<endl;
        cin >>operation;
    }*/
    cout <<"Deuxieme operande="<<endl;
    cin >>var2;
    do{
    switch (operation){
        case '+': cout<< "Le resultat de l'adittion pour "<<var1<< " + "<<var2<< " = "<< var1+var2<<endl;
        break;
        case '-': cout<< "Le resultat de la soustraction pour "<<var1<< " + "<<var2<< " = "<< var1-var2<<endl;
        break;
        case '*': cout<< "le Resultat de la multiplication pour "<<var1<< " + "<<var2<< " = "<< var1*var2<<endl;
        break;
        case '/': if(var2!=0) {
            cout<< " le resultat de la division pour "<<var1<< " + "<<var2<< " = "<< var1/var2<<endl;
        }
        else{
            cout<<"Division par zero n'est pas possible"<<endl;
        }
        break;
        default : cout<<"operateur errone"<<endl;
        break;
    } cout<<"Voulez vous continuer ?. Tapez 0 pour non et 1 pour Oui"<<endl;
        cin>>continued;
    if (continued==1){
        cout <<"Entrez une nouvelle operation"<<endl;
        cin >>operation;}} while(continued==0);
        if (continued==0){
        cout <<"Au revoir"<<endl;}
    return 0;
    }
