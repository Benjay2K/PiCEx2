#include <stdio.h>

typedef struct String String;

int main() {

    printf("Size of float: %zu bytes\n", sizeof(float));
    printf("Size of long double: %zu bytes\n", sizeof(long double));
    printf("Size of int*: %zu bytes\n", sizeof(int*));
    printf("Size of float*: %zu bytes\n", sizeof(float*));
    printf("Size of long[30]: %zu bytes\n", sizeof(long[30]));
    printf("Size of \"string\": %zu bytes\n", sizeof("string"));
    printf("Size of 7: %zu bytes\n", sizeof(7));
    printf("Size of 3.4: %zu bytes\n", sizeof(3.4));
    printf("Size of 4+0.8: %zu bytes\n", sizeof(4+0.8));
    return 0;
}
