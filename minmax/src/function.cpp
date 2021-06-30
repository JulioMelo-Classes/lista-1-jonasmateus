#include "function.h"

/*! 
 * Finds and returns a pair with the first instance of the smallest element
 * and the last instance of the largest element in an array.
 *
 * @param V This is the array-to-pointer decay representing an array.
 * @param n The array's size.
 *
 * @return A pair of indexes to the first smallest and last largest values.
 */

/*
50%
o primeiro caso de teste falha pq vc deveria retornar {-1,-1}
os dois últimos casos de teste falham pq vc acaba retornando a posição errada do elemento, por causa da ordenação
*/
std::pair<int,int> min_max( int V[], std::size_t n )
{
    // TODO: Adicione aqui sua solução.

    // TODO: Isso é apenas um STUB. Substitua com seu retorno correto.

    int aux = 0;
    std::pair <int, int> ocurrencesIndex;
    int vAux[n];

    for(int i = 0; i < n; i++)
    {
      vAux[i] = V[i];
    }

    for(int i = 0; i < n - 1; i++) //não precisava ordenar o vetor pra achar o maior valor
    {
      for(int j = i + 1; j < n; j++)
      {
        if( V[i] > V[j] )
      {
        aux = vAux[i];
        vAux[i] = vAux[j];
        vAux[j] = aux;
      }
      }
    }

    for(int i = 0; i < n; i++)
    {
      if(V[0] == vAux[i])
      {
        ocurrencesIndex.first = i;
        break;
      }
    }

    for(int i = 0; i < n; i++)
    {
      if(V[n - 1] == vAux[i])
      {
        ocurrencesIndex.second = i;
      }
    }

    return ocurrencesIndex;
}
