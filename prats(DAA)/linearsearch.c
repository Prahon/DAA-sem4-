#include <stdio.h>

int linearSearch(int a[], int n, int key) {
	int i;
    for ( i = 0; i < n; i++)
        if (a[i] == key)
            return i;
    return -1;
}

int main() {
    int n, key;
    printf("enter the size of array: ");
    scanf("%d", &n);
    int a[n],i;
    printf("enter the array: ");
    for ( i = 0; i < n; i++)
        scanf("%d", &a[i]);
    printf("\nenter the key: ");
    scanf("%d", &key);
    printf("index of the key: %d", linearSearch(a, n, key));
    return 0;
}

