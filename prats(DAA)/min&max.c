#include <stdio.h>

int main() {
    int n,i;
   printf("eter the size of array: ");

    scanf("%d", &n);
    
    int a[n];
    printf("enter the elements of the array:");
    for ( i = 0; i < n; i++)
        scanf("%d", &a[i]);

    int max = a[0], min = a[0];

    for (i = 1; i < n; i++) {
        if (a[i] > max)
            max = a[i];
        if (a[i] < min)
            min = a[i];
    }

    printf("Max = %d\nMin = %d", max, min);
    return 0;
}

