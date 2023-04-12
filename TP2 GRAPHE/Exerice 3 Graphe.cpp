//                                      Elfanity Jad TP B


#include <iostream>
#define MAX 20
using namespace std;

class graphe
{
    struct graphes
    {
        int sommet , arrete , M[MAX][MAX];
    }g;

public :
    graphe()
    {
        g.sommet = 0;
        g.arrete = 0;
    }

    graphe( int sommet , int arrete)
    {
        g.sommet = sommet;
        g.arrete = arrete;
    }

    void remplir_matrice()
    {
        cout << "Veuillez saisir le nombre de sommet : ";
        cin >>g.sommet ;



    for (int i =0 ; i<g.sommet ; i++)
    {

        for (int j=0 ; j<g.sommet ; j++)
        {
            cout << "T["<< i+1 << "][" << j+1 <<"] : " ;
             cin >>g.M[i][j];
        }
    } }

    void afficher_matrice()
    {

        for (int i =0 ; i<g.sommet ; i++)
        {
            for (int j =0 ; j<g.sommet ; j++)
            {
                cout << g.M[i][j] << " ";
            }
            cout << endl  ;
        }
        cout << endl ;
    }

    int verification_oriente()
     {
         int x  = 0  ;
          for (int i =0 ; i<g.sommet ; i++)
          {

              for (int j =0 ; j<g.sommet ; j++)
              {

                  if (g.M[i][j]!=g.M[j][i]) // Cette condition permet de savoir si le graphe est oriente ou non
                  {
                      x=1 ;
                  }
              }
          }

          if ( x == 0 )
          {
              cout << " Graphe non oriente" << endl ;
          }
          else cout << "Graphe oriente" << endl ;


           return x ;
     }


};





int main()
{
      graphe g1 ;
   g1.remplir_matrice();
   g1.afficher_matrice();
   g1.verification_oriente();
}
