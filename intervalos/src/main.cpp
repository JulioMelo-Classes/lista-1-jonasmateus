/*!
 * @brief This code implements the Intervalos programming problem
 * @author selan
 * @data June, 6th 2021
 */

#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <iomanip>
using std::setprecision;

// Se desejar, crie funções aqui, antes do main().

int main(void)
{
    // TODO: Adicione aqui a sua solução.

    std::array<int, 5> ranges = {0};

    float input;
    float times;
    float count = 0;
    
    while( cin >> std::ws >> times) 
    {
      // realização da contagem em relação aos intervalos

      cin >> std::ws >> input;
    
      if( input >= 0 && input < 25)
      {
        ranges[0]++;
        count++;
        continue;
      }
      else if( input >= 25 && input < 50)
      {
        ranges[1]++;
        count++;
        continue;
      }
      else if( input >= 50 && input < 75)
      {
        ranges[2]++;
        count++;
        continue;
      }
      else if( input >= 75 && input < 100)
      {
        ranges[3]++;
        count++;
        continue;
      }
      else
      {
        ranges[4]++;
        count++;
      }
    }

  for(int index = 0; index < ranges.size(); index++)
    cout << std::setprecision(4) << ((ranges[index] / count) * 100) << std::endl;
    
  return 0;
}
