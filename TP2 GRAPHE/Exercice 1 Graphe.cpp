//                                  Elfanity Jad Exercice GRAPHE
#include <iostream>

using namespace std;

int main()
{ //EXERCICE 1//
//----------------------------------------------------------// GRAPHE 1

int T[5][5];
int i=0 , j =0 ;
cout << "Saisir les relations : " << endl;
for (int i =0 ; i<5 ; i++)
{
for ( int j = 0 ; j<5 ; j++)
{
cout << "T["<< i+1 << "][" << j+1 <<"] : " ;
cin >> T[i][j];


}
}

for (int i =0 ; i<5 ; i++)
{
for ( int j = 0 ; j<5 ; j++)
{
cout<< T[i][j] << " | " ;

}
cout << endl;
}}


//------------------------------------------------------------------------// GRAPHE 2
/*
int T[5][5];

for (int i=0 ; i<5 ; i++ )
{

for ( int j=i ; j<5; j++ )
{
if (i == j )
{
T[i][j]=0;

}

else {
cout << "T["<< i << "][" << j <<"] : " ;
cin >> T[i][j];
T[j][i]= T[i][j];

}}}

for (int i =0 ; i<5 ; i++)
{
for ( int j = 0 ; j<5 ; j++)
{
cout<< T[i][j] << " | " ;

}
cout << endl;}:

}  */
