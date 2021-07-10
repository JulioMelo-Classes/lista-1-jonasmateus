#include "function.h"

/*
blz 80%, faltou só o caso de testes onde o vetor retornado tem que ser vazio
*/
std::vector<unsigned int> fib_below_n( unsigned int n )
{
    // TODO: adicione o seu código aqui.

    // TODO: Isto é apenas um STUB. Troque o retorno pelo que você julgar correto.
    std::vector<unsigned int> sequence = {1, 1};

  
    if(n == 2)
      return sequence;

    for(int i = 3; i < n; i++)
    {
      if((*(sequence.end() - 1) + *(sequence.end() - 2)) < n)
        sequence.push_back(*(sequence.end() - 1) + *(sequence.end() - 2));

      else
        break;
      
    }
    
    return sequence;
}
