#include "utils.hpp"

vec::vec(double x, double y, double z) {
    this -> x = x;
    this -> y = y;
    this -> z = z;
}

double vec::len() {
    return sqrt(x*x + y*y + z*z);
}

vec * vec::operator +=(vec another) {
    this -> x += another.x;
    this -> y += another.y;
    this -> z += another.z;
    return this;
}

vec * vec::operator *=(double a) {
    this -> x *= a;
    this -> y *= a;
    this -> z *= a;
    return this;
}

std::default_random_engine generator;
std::normal_distribution<double> distribution(0.0, 1.0);

void rand_init() {
    unsigned s = time(NULL);
    generator.seed(s);
}

double get_rand() {
    return distribution(generator);
}