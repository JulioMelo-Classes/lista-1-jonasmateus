#include "function.h"

/*! 
 * Verifica se um ponto está dentro de um retângulo.
 */

location_t pt_in_rect( const Ponto &IE, const Ponto &SD, const Ponto &P )
{
    // TODO: Coloque aqui seu código.

    bool POINT_X_IN = P.x < SD.x && P.x > IE.x;
    bool POINT_Y_IN = P.y < SD.y && P.y > IE.y;
    bool POINT_X_OUT = P.x > SD.x || P.x < IE.x;
    bool POINT_Y_OUT = P.y > SD.y || P.y < IE.y;
    
    if(POINT_X_IN && POINT_Y_IN)
      return location_t::INSIDE;
    else if(POINT_X_OUT || POINT_Y_OUT)
      return location_t::OUTSIDE;
    else return location_t::BORDER;

    // TODO: Substitua o retorno conforme desejar. Isso é apenas um STUB, usado apenas para compilar.
    //return location_t::OUTSIDE;
}
