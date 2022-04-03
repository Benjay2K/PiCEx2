#include <stdio.h>

int main() {
    int i,arr[10];
    double sum=0;
    double avg;

    printf("Enter 10 elements:\n");
    for(i=0;i<10;++i)
        scanf("%d",&arr[i]);

    for(i=0;i<10;++i)
        sum=sum+arr[i];
    printf("Sum of numbers is:%f\n",sum);
    avg = sum / 10;
    printf("Mean of numbers is:%f\n",avg);

    return 0;
}

