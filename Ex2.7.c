#include <stdio.h>


int main() {

    //If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23.
    //Find the sum of all the multiples of 3 or 5 below 1000.
    int i;
    int s3 = 0, s5 = 0, s15 = 0;

    for (i = 0; i < 1000; i++) {
        if (i % 3 == 0) {
            s3 += i;
        }
        if (i % 5 == 0) {
            s5 += i;
        }
        if (i % 15 == 0) {
            s15 += i;
        }
    }
    //s3 + s5 includes all multiples of 3 and 5, but it includes all multiples 15 twice
    //subtracted because the numbers 15,30,.. are common in both s3 and s5 series, but we have to account them only once.
    printf("%d\n", s3 + s5 - s15);

    return 0;
}
