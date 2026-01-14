#include <stdio.h>
#include <stdbool.h>  // za bool tip

// Funkcija za ispis niza
void printNiz(int niz[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", niz[i]);
    }
    printf("\n");
}

// Bubble sort verzija 2 sa malom optimizacijom
void bubbleSortV2(int niz[], int n) {
    int i, j, temp;
    bool swapped;

    for (i = 0; i < n - 1; i++) {
        swapped = false;

        for (j = 0; j < n - 1 - i; j++) {  // poslednji elementi već na mestu
            if (niz[j] > niz[j + 1]) {
                temp = niz[j];
                niz[j] = niz[j + 1];
                niz[j + 1] = temp;
                swapped = true;
            }
        }

        if (!swapped) {  // ako nije bilo zamene, niz je već sortiran
            break;
        }
    }
}

int main() {
    int niz[] = {5, 3, 8, 4, 2};
    int n = 5;

    printf("Niz pre sortiranja:\n");
    printNiz(niz, n);

    bubbleSortV2(niz, n);

    printf("Niz posle sortiranja:\n");
    printNiz(niz, n);

    return 0;
}
