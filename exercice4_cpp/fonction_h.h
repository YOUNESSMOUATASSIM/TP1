#ifndef FONCTION_H_H_INCLUDED
#define FONCTION_H_H_INCLUDED
struct point  {// creation de la structure point

char nom;
float x;
float y;

};

struct cercle{// creation de la structure cercle
char nom;
struct point centre;
float rayon;

};


 inline struct point creer_point(char nom, float x, float y);

 inline float distancee(struct point p1, struct point p2);

 inline cercle creer_cercle(char nom, struct point centre, float rayon);

inline  void afficher_cercle(struct cercle c);

inline int disjoint(cercle c1, cercle c2) ;


#endif // FONCTION_H_H_INCLUDED
