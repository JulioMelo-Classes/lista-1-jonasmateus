#include "function.h"

#include <iterator>
using std::iter_swap;

/*! 
 * Reverse de order of elements inside the array.
 * @param arr Reference to the array with the values.
 */
template <size_t SIZE>
void reverse( std::array< std::string, SIZE > & arr )
{
    /*codigo*/

    auto itr = std::begin(arr);

    for(itr; itr != arr.end() - 1; itr++)
    {
      iter_swap(itr, (arr.end() - itr - 1));
    }
}