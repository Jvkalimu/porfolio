#include <iostream>

using namespace std;
class Point
{public://attributs
int x;
int y;
// methodes

void placer(int a, int b);
void deplacer (int a, int b);
void afficher();
};

void Point::placer(int a, int b){
x=a;
y=b;
cout<<"Apres initialisation, les valeurs placees sont : "<<x<<','<<y<<endl;
}

void Point::deplacer (int a, int b) {
x=x+a;
y=y+b;
cout<<"Les valeurs deplacees sont: "<<x<<','<<y<<endl;
}

void Point::afficher(){
cout<<"PROGRAMME POINT"<<endl;
cout<<"Les valeurs initialisees sont: "<<x<<','<<y<<endl;
}

