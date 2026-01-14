#include <stdio.h>

void bubbleSort(int niz[], int n) {
    int i, j, temp;

    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (niz[j] > niz[j + 1]) {
                temp = niz[j];
                niz[j] = niz[j + 1];
                niz[j + 1] = temp;
            }
        }
    }
}

int main() {
    int niz[] = {5, 3, 8, 4, 2};
    int n = 5;
    int i;

    printf("Niz pre sortiranja:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");

    bubbleSort(niz, n);

    printf("Niz posle sortiranja:\n");
    for (i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }

    return 0;
}

