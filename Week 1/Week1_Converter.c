#include <stdio.h>

int main() {
    float mps, mph;
    printf("Enter speed in m/s: ");
    scanf("%f", &mps);
    mph = mps * 2.23694;
    printf("%.2f m/s = %.2f mph\n", mps, mph);
    return 0;
}