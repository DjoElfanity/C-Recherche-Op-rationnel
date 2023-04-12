
#include <limits.h>
#include <string.h>
#include <iostream>
#include <queue>
#define MAX  6

using namespace std;


bool fonction_1(int grapheP[MAX][MAX], int sommet_init , int sommet_final , int parent[] ){
queue<int> q ;
bool visited[MAX];
memset(visited , 0 ,sizeof(visited)); // Pour mettre tout les chemins en non visiter
q.push(sommet_init); // Faire rentrer le sommet initial dans la file
visited[sommet_init] = true; // Pas besoin de le visiter
parent[sommet_init] = -1; // Pour ne pas prendre en consideration sa valeur


while(!q.empty() && visited[sommet_final]== false)
{
    int val = q.front(); // val = le premier de la file
    q.pop(); // Puis on lenleve pour ne pas le reprendre en consideration


for (int i = 0 ; i<MAX ; i++)
{
    if (visited[i]  == false && grapheP[val][i]>0)
    {
        q.push(i); // On rajoute la valeur en plus
        parent[i]= val ; // Le nouveau sommet pere
        visited[i] = true;  // on le met en visiter true
    }
}
}


return (visited[sommet_final]  ==true ) ; // on est arriver jusqua au sommet  final
}


//

int fonction_2(int graph[MAX][MAX], int s, int t) {
  int i, j;

  int rGraph[MAX][MAX];
  for (i = 0; i < MAX; i++)
    for (j = 0; j < MAX; j++)
      rGraph[i][j] = graph[i][j];

  int parent[MAX];
  int max_flow = 0;


  while (fonction_1(rGraph, s, t, parent)) {
    int path_flow = INT_MAX;
    for (j = t; j != s; j = parent[j]) {
      i = parent[j];
      path_flow = min(path_flow, rGraph[i][j]);
    }

    for (j = t; j != s; j = parent[j]) {
      i = parent[j];
      rGraph[i][j] -= path_flow;
      rGraph[j][i] += path_flow;
    }


    max_flow += path_flow;
  }

  return max_flow;
}



int main()
{

int graph[MAX][MAX] = {{0, 8, 0, 0, 3, 0},
             {0, 0, 9, 0, 0, 0},
             {0, 0, 0, 0, 7, 2},
             {0, 0, 0, 0, 0, 5},
             {0, 0, 7, 4, 0, 0},
             {0, 0, 0, 0, 0, 0}};*/




    cout << "Le flot maximal est= " << fonction_2(graph,0,MAX-1);
}
