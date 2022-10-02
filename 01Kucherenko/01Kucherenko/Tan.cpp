//
//Developed by Kucherenko Daniil on 09/27/22
//

#include "Sin.h"
#include "Cos.h"

double tangent(const double x, const double eps) {
    return sin_funct(&x, &eps) / cosFunct(&x, &eps);
}
