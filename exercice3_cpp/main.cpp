#include <iostream>
#include<conio.h>
#include "fonctions.h"
#include "fonctions.cpp"

int main(){
int nb_etd;//le nombre  d'etudiant


do{

std::cout<<" donner le nombre etudiant\n ";
std::cin>>nb_etd;

}while(nb_etd<0 || nb_etd==0);// verifiant le nombre etudiant est il negative ou bien null


float* notes[nb_etd];//declare la table des notes

lire(*notes,nb_etd);//_______appel de la fonction lire


afficher(*notes,nb_etd);//_______appel de la fonction afficher


 float maxx=maximum (*notes,nb_etd);//_______appel de la fonction maximum

 //---------------------- affichage premier note des etudiants ----------------//

 //printf("\n la premier note des etudiants est :%2.2f\n",maxx);
std:: cout<<"\n la premier note des etudiants est :"<<maxx<<"\n";

 int ind_max= indice_max(*notes,nb_etd);

 //------------------- affichage l'indice du premier note  des etudiants ---------//

 //printf("\n l'indice du premier note  des etudiants est :%i\n",ind_max);
 std:: cout<<"\n l'indice du premier note  des etudiants est :"<<ind_max<<"\n";


int nb_et_valide=valide(*notes,nb_etd);//appel de la fonction valide


//----------------affichage de nombre etudiant valider --------//

//printf(" \n le nombre etudiant valider est :%i\n",nb_et_valide);
std:: cout<<" \n le nombre etudiant valider est :"<<nb_et_valide<<"\n";

float moyen=moyenne(*notes,nb_etd);//---appel de la fonction moyenne

//----------------affichage de la moyenne des notes --------//

//printf("\n la moyenne des notes est :%2.2f\n",moyen);
std:: cout<<"\n la moyenne des notes est :"<<moyen<<"\n";

//---------------la recherche du ' x '--------------//
float x=0;
//printf("\n veuillez donner la note chercher dans la table :");
std:: cout<<"\n veuillez donner la note chercher dans la table :";
//scanf("%f",&x);
std:: cin>>x;

int etat =existe(*notes,x,nb_etd);//---appel de la fonction existe

//printf("%i\n",etat);
if(etat==1)
std:: cout<<"\n la note est existe ";
else
    std:: cout<<"\n la note n est existe pas  ";

return 0;
}











