#include "stopping_tolfun.h"

/* true  = yes,terminate
 * false = no,proceed */
bool stopping_tolfun(double f1, double f0, double tolfun)
{
    return (fabs(f1 - f0) < tolfun) ? true : false;
}