#include <iostream>

using namespace std;

    class Personne
    {
        public://declaration des attributs
        string nom;
        string adresse;
        int age;
        void categoriedage();
        void categorieDeResidence();
        void initialiser();
    };

        void Personne::categoriedage() {
        int ages;
        cout<<"Entrez votre age"<<endl;
        cin>>ages;
        if(ages<14){
            cout<<"Vous etes jeune"<<endl;
        } else if(ages>14 && ages<18)
        {
        cout<<"Vous avez l'age moyen"<<endl;
        }
        else {
            cout<<"Vous etes age"<<endl;
        }}

        void Personne::categorieDeResidence(){
        string adresses;
        cout<<"Entrez l'adresse : urbain, villageois ou campagne"<<endl;
        cin>>adresses;

        if(adresses=="urbain"){
        cout<<"Vous etes citadin"<<endl;
        }
        else if(adresses=="villageois"){
        cout<<"Vous etes villageois"<<endl;
        }
        else if(adresses=="campagnard"){
        cout<<"Vous etes campagnard"<<endl;
        }
        }

    void Personne::initialiser()
        {
        string nom;
        string adresse;
        int age;
        cout<<"Entrez votre nom"<<endl;
        cin>> nom;
        cout<<"Entrez votre adresse"<<endl;
        cin>> adresse;
        cout<<"Entrez votre age"<<endl;
        cin>> age;
        }
