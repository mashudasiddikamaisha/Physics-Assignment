#include <stdio.h>
#include <math.h>

int main() {
    double theta = 45.0;
    double rad = theta * 3.1416 / 180.0;
    int m = 1;

    double ratio = m / sin(rad);

    printf("The ratio of slit width to wavelength is: %d:%.3lf\n",m, ratio);

    return 0;
}
