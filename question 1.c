#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    double n, theta, d;
    printf("Enter the value of lembda, theta and d respectively: ");
    scanf("%lf %lf %lf", &n, &theta, &d);
    theta = theta * 3.1416 / 180;

    if(n<=750 && n>=380) {
        double lamda= n/1000000000.0;
        double D= d/1000000.0;
        double a = sin(theta);
        double x = a * D;
        double m = x / lamda;

        printf("\n%.0lf order maxima", floor(m));
    } else {
        printf("Out of the range. Please enter a valid number.\n");
    }

    return 0;
}
