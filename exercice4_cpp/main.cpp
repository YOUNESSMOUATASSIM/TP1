#include <iostream>
#include<conio.h>
#include "fonctions.cpp"
#include "fonction_h.h"

using namespace std;

int main()
{


// P1(‘A’ , 3, 6) et P2(‘B’ , 1, 7)

struct point P1 = creer_point('A',3,6);

struct point P2=creer_point('B',1,7);

 //c1(‘C’, P1, 5) et c2(‘D’, P2, 6).

struct cercle c1=creer_cercle('C',P1,5);

struct cercle c2=creer_cercle('D',P2,6);

//Afficher le cercle c1

afficher_cercle(c1);

// Calculer et afficher la distance entre les deux points P1 et P2.

 float d=distancee(P1,P2);

  std::cout<<"\n\n la distance entre les deux points P1 et P2 est :"<<d;


  //Vérifier si les deux cercle c1 et c2 sont disjoints

 int i=disjoint(c1,c2);
if(i==1)
 std::cout<<"\n\n le cercle  '"<<c1.nom<<"'  et  '"<<c2.nom<<"'  sont disjoints\n";
 else
    std::cout<<"\n\n le cercle  '"<<c1.nom<<"'  et  '"<<c2.nom<<"'  sont joints\n";
    return 0;
}
