#include <iostream>
#include<math.h>

using namespace std;
//fonction du discriminant
double Delta(double a, double b, double c){
    double delta;
    delta = b*b - 4*a*c;
    return delta;
}
//fonction pour les racines
void Racine(double d,double b, double a){
    double x1,x2,y1,y2;
    if (d > 0){
        x1= (-b + sqrt(d))/(2*a);
        x2= (-b - sqrt(d))/(2*a);
        cout << "L' equation admet deux racines aui sont "<< x1<<" et "<<x2 <<endl;
    } else if(d==0){
        x1= (-b/(2*a));
        cout <<"L'equation a une racine double qui est "<<x1 <<endl;
    }
    else {
            d=d*-1;
            x1= (-b)/(2*a);
            y1= sqrt(d)/(2*a);

            x2= (-b)/(2*a);
            y2= - sqrt(d)/(2*a);
        cout <<" l'equation n'a pas de racine reelle mais admet deux racines complexes "<<endl;
        cout <<" Ces deux racines sont " <<x1<< " + " <<y1<< " i et " <<x2<< " - "<<y2<< " i"<<endl;
    }

}
int main()
{
    double d;
    double a,b,c;
    int continued;
    do {
        cout << "Saisissez la valeur de a" << endl;
        cin >>a;
    while (a==0){
        cout << "la valeurs de a doit etre positive" << endl;
        cin >>a;
    }
        cout << "Saisissez la valeur de b" << endl;
        cin >>b;
        cout << "Saisissez la valeur de c" << endl;
        cin >>c;
        d=Delta(a,b,c);//affectation de la valeur retournee par la fonction a d;
        Racine(d,b,a);
        cout<<"Voulez-vous continuer continuer ? Tapez 1 pour continuer et 0 pour arreter"<<endl;
        cin >>continued;
      } while (continued==1);
      if(continued==0){
        cout<<"Au revoir!!"<<endl;}
    return 0;
}
