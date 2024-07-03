#include <cstdio>
#include "utils.hpp"

const double D = 4.0f;
const double R = 3.0f;
const double MAX_DISTANCE = 200.0f;
const double DELTA = 0.2f;

void random_move(vec &r, double delta) {
    vec delta_r(get_rand(), get_rand(), get_rand());
    delta_r *= (delta / delta_r.len());
    r += delta_r;
}

bool test() {
    vec r(D, 0, 0);
#ifndef USE_SPHERE
    while (r.x < MAX_DISTANCE) {
        if (r.x < 0.0f) {
            return true;
        }
        random_move(r, DELTA);
    }
#else
    while (r.len() < MAX_DISTANCE) {
        if (r.len() < R) {
            return true;
        }
        random_move(r, DELTA);
    }
#endif
    return false;
}

int main() {
    setbuf(stdout, NULL);
    rand_init();

    int count = 0;
    for (int i = 1; i <= 1000; i++) {
        count += test();

        printf("#");
        if (i % 100 == 0) {
            printf("\n");
        }
    }
    printf("\nReturn success rate: %d%%\n", count / 10);
    return 0;
}