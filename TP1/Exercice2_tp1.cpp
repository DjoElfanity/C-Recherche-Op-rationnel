//                                      Elfanity Jad TPB Exercice 2 TP1
#include <iostream>
//FONCTION QUI PERMET DE RECHERCHER LA POSTITION DU MAX
int recherche_position ( int *T)
{ int max =0 ,x ;//Initialisation du max a 0 pour faire la comparaison
    for (int i =0 ; i< 10 ; i++)
    {
        if ( max <T[i])
        {
            max = T[i];// Max prend la valeur maximum
            x=i;// I change selon le nouveau max
        }
    }
    return x ;
}

using namespace std;

int main()
{

    int T[10]={1,5,8,9,32,44,42,6,2,0};
   cout << "La position du maximum est " << recherche_position(T) ;


    return 0;
}

