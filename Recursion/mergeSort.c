#include <stdio.h>
#include <stdlib.h>
#include <omp.h>

void merge(int arr[], int left, int mid, int right) {
    int n1 = mid - left + 1;
    int n2 = right - mid;

    int *L = malloc(n1 * sizeof(int));
    int *R = malloc(n2 * sizeof(int));

    for (int i = 0; i < n1; i++) L[i] = arr[left + i];
    for (int i = 0; i < n2; i++) R[i] = arr[mid + 1 + i];

    int i = 0, j = 0, k = left;

    while (i < n1 && j < n2) {
        if (L[i] <= R[j]) arr[k++] = L[i++];
        else arr[k++] = R[j++];
    }
    while (i < n1) arr[k++] = L[i++];
    while (j < n2) arr[k++] = R[j++];

    free(L);
    free(R);
}

void mergeSort(int arr[], int left, int right) {
    if (left < right) {
        int mid = left + (right-left) / 2;

        #pragma omp parallel sections
        {
            #pragma omp section
            mergeSort(arr, left, mid);

            #pragma omp section
            mergeSort(arr, mid + 1, right);
        }

        merge(arr, left, mid, right);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    int* arr = malloc(n * sizeof(int));

    for (int i = 0; i < n; i++) scanf("%d", &arr[i]);

    double start = omp_get_wtime();

    #pragma omp parallel
    {
        #pragma omp single
        mergeSort(arr, 0, n - 1);
    }

    double end = omp_get_wtime();
    printf("%f\n", end - start);

    for (int i = 0; i < n; i++) printf("%d ", arr[i]);
}
