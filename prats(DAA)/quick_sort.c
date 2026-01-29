#include <stdio.h>

void quickSort(int a[], int low, int high) {
	int j,i;
    if (low < high) {
        int pivot = a[high], i = low - 1;
        for (j = low; j < high; j++)
            if (a[j] < pivot) {
                i++;
                int t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        int t = a[i + 1];
        a[i + 1] = a[high];
        a[high] = t;
        int pi = i + 1;
        quickSort(a, low, pi - 1);
        quickSort(a, pi + 1, high);
    }
}

int main() {
    int n,i;
    printf("eter the size of array: ");
    scanf("%d", &n);
    printf("enter the elements of the array:");
    int a[n];
    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
    quickSort(a, 0, n - 1);
    printf("SORTED ARRAY:-");
    for (i = 0; i < n; i++)
        printf("%d ", a[i]);
    return 0;
}

