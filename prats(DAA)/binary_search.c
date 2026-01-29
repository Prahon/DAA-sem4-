#include <stdio.h>

int binarySearch(int a[], int n, int key) {
    int l = 0, r = n - 1;
    while (l <= r) {
        int m = (l + r) / 2;
        if (a[m] == key)
            return m;
        else if (a[m] < key)
            l = m + 1;
        else
            r = m - 1;
    }
    return -1;
}

int main() {
    int n, key,i;
     printf("eter the size of array: ");
    scanf("%d", &n);
    int a[n];
        printf("enter the elements of the array:");
    for ( i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nenter the key: ");
    scanf("%d", &key);
    printf("index of the key:%d", binarySearch(a, n, key));
    return 0;
}

