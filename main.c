#include <stdio.h>
#include "calculations.c"

int main() {
    int i, num;
    float f;
    printf("Input an integer and a float:\n");
    scanf("%d %f\n",&num, f);

    factorial(num);
    factorial2(f);
    return 0;
}
