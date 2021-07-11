/*!
 * @brief Implementação do Ponto em Retângulo V2.
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <algorithm>
using std::min;
using std::max;

#include "function.h"

//=== Funções

// Coloque aqui qualquer função auxiliar que desejar.


int main(void)
{
    // TODO: Adicione aqui seu código.

    Ponto pontoA;
    Ponto pontoB;
    Ponto pontoC;
    Ponto pontoD;

    string location = "Tests";

    cin >> pontoA.x >> pontoA.y >> pontoB.x >> pontoB.y >> pontoC.x >> pontoC.y;

    if((pontoA.x == pontoB.x) || (pontoA.y == pontoB.y))
    {
      location = "invalid";
      cout << location << endl;
    }
    else if((pontoA.x < pontoB.x))
    {
      cout << (pt_in_rect(pontoA, pontoB, pontoC) == INSIDE ? "inside" : pt_in_rect(pontoA, pontoB, pontoC) == BORDER ? "border" : "outside") << endl;
    }
    else if((pontoA.x > pontoB.x))
    {
      cout << (pt_in_rect(pontoA, pontoB, pontoC) == INSIDE ? "inside" : pt_in_rect(pontoA, pontoB, pontoC) == BORDER ? "border" : "outside") << endl;
    }
    else
    {
      cout << (pt_in_rect(pontoA, pontoB, pontoC) == INSIDE ? "inside" : pt_in_rect(pontoA, pontoB, pontoC) == BORDER ? "border" : "outside") << endl;
    }

    return 0;
}
