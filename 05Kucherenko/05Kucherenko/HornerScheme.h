//
// Developed by Daniil Kucherenko on 28.10.22
//

#pragma once
void fillArray(double* coeff, size_t size);
double Horner(double* coeff, size_t size, double x);
double sum(double* coeff, size_t size, int sign = 1);