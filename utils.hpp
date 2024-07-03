#pragma once
#include <cmath>
#include <random>
#include <ctime>

class vec {
public:
    double x, y, z;
    vec(double, double, double);
    double len();
    vec * operator +=(vec);
    vec * operator *=(double);
};

void rand_init();
double get_rand();