#include <iostream>
#include<conio.h>
#include "fonctions.h"

int i=0;
void lire(float* notes, int n){




        // printf(" inserer les notes d'etudants \n");
         std:: cout<<" inserer les notes d'etudants \n";
//___________________ insertion des notes dans la table notes __________//

 for( i=0;i<n;){

    //scanf("%f",notes+i);
    std::cin>>(notes[i]);

// test la note saisie avant de l inserer dans la table
    if(*(notes+i)>=0 && *(notes+i)<=20){
      i++; // incrementer si la note saisir est valide
    }
 }


}
void afficher(float* notes, int n){
//__________ Afficher avec le formalisme tableau_______________//

std:: cout<<"__________ Affichage avec le formalisme tableau_______________\n";
std:: cout<<"\n";
    for(i=0;i<n;i++){
   // printf("%2.2f\n",notes[i]);
    std:: cout<<*(notes+i)<<"\n";
 }
  //printf("\n");
  std:: cout<<"\n";

 //__________ Afficher avec le formalisme pointeur_______________//
 std:: cout<<"__________ Affichage avec le formalisme pointeur_______________\n";
 for(i=0;i<n;i++){
    //printf("%2.2f\n",*(notes+i));
    std:: cout<<*(notes+i)<<"\n";
 }

}
float maximum (float* notes, int n){
float maxx;
maxx=*(notes);// donner le maximim la 1er valeur de la premier case du  table

//__________chercher le max dans la table
 for(i=1;i<n;i++){

    if(maxx<*(notes+i)){
      maxx=*(notes+i);
    }


 }
return maxx;
}
int indice_max(float* notes, int n){
float maxx=maximum (notes,n);// appel de la fonction maximum

int indice=0;
//_____ chercher dans la table la valeur = a max
for(i=0;i<n;i++){
    if(*(notes+i)==maxx){
        indice=i;//_________donner indice du max a variable indice
    }

}
return indice;


}
int valide(float* notes, int n){
int nb_valide=0;

for(i=0;i<n;i++){

    if(*(notes+i)>=10){
        nb_valide++;
    }
}

return nb_valide;
}

float moyenne(float* notes, int n){
float s=0;

for(i=0;i<n;i++){
s+=notes[i]; //--- la somme des notes de la table notes

}


return (float)s/n;//----renvoie la moyenne
}
int existe(float* notes, float x, int n){
for(i=0;i<n;i++){
if(x==*(notes+i)){
    return 1;
}


}
return 0;
}

