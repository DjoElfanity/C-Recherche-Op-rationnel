//                          Elfanity Jad TP B

#include <iostream>

using namespace std;


void afficher_tableau (int *T)
{
    for (int i =0 ; i< 10 ; i ++ )
    {
        cout << T[i] << "  "  ;
    }

    cout << endl;
}
void trier_tableau(int *T)
{
    int min ;
    for (int  i =0 ;  i < 10 ; i++)
    {
        for ( int j = 0 ; j<10 ; j++)
        {
            if ( T[i]> T[j])
            {
                min = T[i];
                T[i] = T[j] ;
                T[j] = min ;
            }
        }
    }
}

int main()
{
    int T[10]={1,5,8,9,32,44,42,6,2,0};
    cout << "Avant le trie " << endl ;
    afficher_tableau(T);
    trier_tableau(T);
    cout << "Apres le trie " << endl;
    afficher_tableau(T);


    return 0 ;
}
