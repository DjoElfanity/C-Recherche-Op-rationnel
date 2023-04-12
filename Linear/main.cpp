#include <iostream>

using namespace std;

int creer_matrice(int ligne , int colone)
{
    int m[ligne][colone];
    for (int i = 0 ; i <ligne ; i++)
    {
        for (int j = 0 ; j< colone ; j++)
        {
            cout <<"T[" << i <<"][" << j <<"] = " ;
            cin >> m[i][j];
        }
    }
    return m[ligne][colone];
}

void afficher_matrice(int *matrice)
{

}

int main()
{
    int m = creer_matrice(2,2);

}
