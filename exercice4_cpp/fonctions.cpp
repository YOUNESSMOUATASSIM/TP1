#include <iostream>
#include <math.h>
#include "fonction_h.h"
using namespace std;




struct point creer_point(char nom ,float x ,float y){// creation de la fonction ' creer_point '

struct point p;
p.nom=nom;
p.x=x;
p.y=y;

std::cout<<"\n______________Point bien ete effectue________________\n";
std::cout<<"\n nom  :"<<p.nom<<"\n x    :"<<p.x<<"\n y    :"<<p.y;

return p;
}




float distancee( struct point p1,  struct point p2){// creation de fonction ' distance '

float s_x;
float s_y;

if(p1.x<=p2.x){
    s_x=pow((p2.x-p1.x),2);
}
else
    s_x=pow((p1.x-p2.x),2);


if(p1.y<=p2.y){
    s_y=pow((p2.y-p1.y),2 );
}
else
    s_y=pow((p1.y-p2.y),2);

float a =(s_x+s_y);

a=pow(a,2);

return a ;

}

cercle creer_cercle(char nom, struct point centre, float rayon) {// creation de la fonction ' creer cercle '

struct cercle c;

c.nom=nom;
c.centre=centre;
c.rayon=rayon;

return c;
}

 void afficher_cercle(cercle c){// fonction afficher
 //C(O(5, 3), 7)
 std::cout<<"\n______________Cercle ________________\n";
 std::cout<<"\n"<<c.nom<<"("<<c.centre.nom<<"("<<c.centre.x<<","<<c.centre.y<<"),"<<c.rayon<<")"<<endl;



 }

 int disjoint(cercle c1, cercle c2){
 float s;

 s=(c1.rayon)+(c2.rayon);
float d= distancee(c1.centre,c2.centre);

if(d>s)
 return 1;

 else
    return 0;


 }
