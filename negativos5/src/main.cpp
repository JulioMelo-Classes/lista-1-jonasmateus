#include <iostream>
using std::cin;
using std::cout;

const int SIZE = 5; // input size.

int main(void)
{
    // TODO: Adicione aqui seu código.

    int times = 0;
    int input = 0;

    for(int index = 1; index <= SIZE; index++)
    {
      cin>> input;
      
      if(input < 0)
        times++;
    }

    cout << times;
    return 0;
}
