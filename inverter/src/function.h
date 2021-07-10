#ifndef FUNCTION_H
#define FUNCTION_H
#include <array>
using std::array;

#include <string>
using std::string;

template <size_t SIZE>
void reverse( std::array<std::string,SIZE> & arr )
{
    /*codigo*/

    auto itr = std::begin(arr);
    auto itrEnd = std::end(arr) - 1;
    auto itrMiddle = itr + (arr.size()/2);

    if((arr.size() % 2) == 0)
    {
      for(itr; itr != itrMiddle; itr++)
      {
        iter_swap(itr, itrEnd); 
        itrEnd = itrEnd - 1;
      }
    }

    else
    {
      for(itr; itr != itrMiddle + 1; itr++)
      {
        iter_swap(itr, itrEnd); 
        itrEnd = itrEnd - 1;
      }
    }
}
#include "function.cpp"

#endif