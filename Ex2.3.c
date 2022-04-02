#include <stdio.h>

int main() {

    //a)
    int a;
    double b;
    printf("Enter an integer and a double: \n");
    scanf("%d %f", &a, &b);
    double sum = a + b;
    printf("Sum : %f\n", sum);

    getchar();

    //b)
    char charType;
    int c;
    printf("Enter a char and an integer: \n");
    scanf("%c %d", &charType, &c);
    int sumOfCharInt = charType + c;
    printf("Sum : %d\n", sumOfCharInt);

    getchar();

    //c)
    int d;
    char s[1];
    printf("Enter an integer and a char array: \n");
    scanf("%d %c", &d, &s);
    int sumOfIntString = d + s;
    printf("Sum : %d\n", sumOfIntString);

    return 0;
}
