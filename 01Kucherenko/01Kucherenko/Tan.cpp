//
//Developed by Kucherenko Daniil on 09/27/22
//

#include "Sin.h"
#include "Cos.h"

double tangent(double x, double eps) {
    return sinFunct(&x, &eps) / cosFunct(&x, &eps);
}
