                                        //ELFANITY JAD TP B

#include <iostream>
#define MAX 20 // POUR DEFINIR LE NOMBRE MAX DE LA MATRICE
using namespace std;
// CREATION D UNE CLASSE GRAPHE QUI VA NOUS SIMPLIFIER LA MANIPULATION DES GRAPHES
class graphe
{
    struct graphes
    {
        int sommet , arrete , M[MAX][MAX];
    }g;

public :
    graphe() // CONSTRUCTEUR VIDE
    {
        g.sommet = 0;
        g.arrete = 0;
    }

    graphe( int sommet , int arrete)// CONSTRUCTEUR FULL PARAMETRE
    {
        g.sommet = sommet;
        g.arrete = arrete;
    }

    void remplir_matrice() // REMPLIR LA MATRICE  DES ELEMENTS
    {
        cout << "Veuillez saisir le nombre de sommet : ";
        cin >>g.sommet ;
        cout << "Veuillez saisir le nombre d arrete :";
        cin >> g.arrete ;


    for (int i =0 ; i<g.sommet ; i++)
    {

        for (int j=0 ; j<g.arrete ; j++)
        {
            cout << "T["<< i+1 << "][" << j+1 <<"] : " ;
             cin >>g.M[i][j];
        }
    } }

    void afficher_matrice() // AFFICHAGE SIMPLE DE LA MATRICE
    {

        for (int i =0 ; i<g.sommet ; i++)
        {
            for (int j =0 ; j<g.arrete ; j++)
            {
                cout << g.M[i][j] << " ";
            }
            cout << endl  ;
        }
        cout << endl ;
    }


};



int main()
{

   graphe g1 ;
   g1.remplir_matrice();
   g1.afficher_matrice();

}
