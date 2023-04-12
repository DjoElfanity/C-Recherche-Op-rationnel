//                         ELFANITY JAD TPB EXERCICE 1 TP1
#include <iostream>
using namespace std;

   void Permutation_tableau(int *T,int *P){//Pointeur car il represente la premiere case du tableau
   /*
   Sur ces etapes on commence par donner les elements du deuxiemes tableaux
   comme indice pour le premier tableau
    */
       int tmp[5];

        for( int i=0;i<5;i++){
        tmp[i]=T[P[i]];}
/*
 Sur cette etape on utilise cette boucle pour eviter d'ecraser des valeurs du tableau
*/

        for(int i=0;i<5;i++){
        T[i]=tmp[i];

   }

    }
  /*
  Sur cette etape on utilise une boucle qui permet d afficher les elements
  du tableau.
  */
    void Afficher_tableau(int *T){

    for(int i=0;i<5;i++){
    cout << T[i] << " ";

   }}
int main()

{
// Le test au niveau du main des fonctions precedentes
    int tab1[5]={8,5,7,1,9}, tab2[5]={2,4,1,0,3};


    Permutation_tableau(tab1,tab2);
    Afficher_tableau(tab1);
    return 0;
}
