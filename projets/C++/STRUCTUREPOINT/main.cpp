#include <iostream>
#include "points.cpp"
using namespace std;

int main()
{
    Point p;
    p.x=10;
    p.y=20;
    p.placer(1,5);
    p.afficher();
    p.deplacer(1, 5);
    p.afficher();

    return 0;
}
