//#include "function.h"

#include <iterator>
using std::iter_swap;
#include <array>

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
 /*
 erro de compilação, não vou considerar
 */
template <size_t SIZE>
<<<<<<< HEAD
void reverse( std::array< std::string, SIZE > & arr );
=======
void reverse( std::array< std::string, SIZE > & arr )
{
    /*codigo*/

    auto itr = std::begin(arr);

    for(itr; itr != arr.end() - 1; itr++)
    {
      iter_swap(itr, (arr.end() - itr - 1)); //não era exatametne assim que vc usaria, o iter_swap troca dois iteradores, vc está trocando um iterador (itr) com um número (arr.end() - itr - 1)

    }
}
>>>>>>> 35522bf9f5977fec2bf38a58b5f2c89ea1699475
