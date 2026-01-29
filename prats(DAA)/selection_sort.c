#include <stdio.h>

int main() {
    int n,i,j;
     printf("eter the size of array: ");
    scanf("%d", &n);
    int a[n];
    printf("enter the elements of the array:");
    for ( i = 0; i < n; i++)
        scanf("%d", &a[i]);

    for (i = 0; i < n - 1; i++) {
        int min = i;
        for (j = i + 1; j < n; j++)
            if (a[j] < a[min])
                min = j;
        if (min != i) {
            int t = a[i];
            a[i] = a[min];
            a[min] = t;
        }
    }
 printf("sorted array:");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);

    return 0;
}

