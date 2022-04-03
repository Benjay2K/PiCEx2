#include <stdio.h>

int main() {

    //Surface area = 4 * 3.14 * radius * radius
    //Volume = 4/3 * 3.14 * radius * radius * radius
    int i;
    double surfaceArea, volume;

    printf("Radius\t\t Volume\t\t Surface Area\n");

    for(i=1;i<11;i++){
        surfaceArea = 4 * 3.14 * i * i;
        volume = 4/3 * 3.14 * i * i * i;

        printf("%d\t\t %.2f\t\t %.2f\n", i, surfaceArea, volume);
    }

    return 0;
}