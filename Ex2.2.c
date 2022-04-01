#include <stdio.h>

int main() {

    int a = 2.5; //not allowed 2.5 is of type double, mit int nur ganzzahlige Werte speichern
    int b='?'; //'?' of type char
    char z=500; //overflow in conversion from 'int' to 'char' changes value from '500' to '-12' [-Woverflow]
    int big = 40000; //correct
    double fläche = 1.23E+5; //char
    long count = 0; //correct but could be int
    //char c = ’\’’; //stray '\' in program
    //unsigned char ch=’\201’; //stray '\342' in program
    unsigned int size = 40000; //a 32-bit datum that encodes a nonnegative integer in the range [0 to 4294967295]
    float value = 12345.06789; //correct

    printf("Correct usage of data types\n");
    return 0;
}
