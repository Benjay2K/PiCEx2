#include <stdio.h>

//2.6)
void factorial(int n) {
    int i, num;
    float f;

    for(i=1;i<=num;i++)
        f=f*i;

}

void factorial2(float f){
    static int num;
    printf("The Factorial of %d is: %f\n",num,f);
}