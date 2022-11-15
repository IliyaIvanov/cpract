#include <stdio.h>

void tab(int value) {
    for (int i = 0; i < value; i++) {
        printf(" ");
    }
}

int main() {
    tab(34);
    printf("KENO\n");
    tab(15);
    printf("CREATIVE COMPUTING, MORRISTOWN, NEW JERSEY\n");
    int N[21];
    int M[23];
    int A[8];
    printf("\n\n\n");
    for (int i = 1; i <= 8; i++) {
        while (1) {
            scanf("%i", &(A[i]));
            int e = A[i];
            if (e > 80 || e == 0 || e < 0) {
                printf("TYPE A NUMBER FROM 1 TO 80 , INCLUSIVE, PLEASE.\n");
            } else {
                break;
            }
        }
    }
    int C = 0;
    int X = 0;
    int Y = 0;
    for (int k = 1; k <= 7; k++) {
        for (int j = k; j <= 7; j++) {
            X = A[k];
            Y = A[j+1];
            if (X != Y) {
                break;
            }
            C = C + 1;
            printf("A DUPLICATE NUMBER HAS BEEN DETECTED IN YOUR INPUT.\n");
            printf("TYPE ANOTHER NUMBER, PLEASE.\n");
            scanf("%i", &Y);
            if (Y > 80 || Y == 0 || Y < 0) {
                printf("TYPE A NUMBER FROM 1 TO 80 , INCLUSIVE, PLEASE.\n");
            } else {
                break;
            }
            A[j+1];
            if (X != Y) {
                printf("TYPE A NUMBER FROM 1 TO 80 , INCLUSIVE, PLEASE.\n");
            } else {
                break;
            }
            printf("TYPE ANOTHER NUMBER, PLEASE.\n");
            scanf("%i", &Y);
        }
        printf("\n\n");
    }
    if (C == 0) {
        printf(" THE COMPUTER WILL SELECT 20 NUMBERS AT RANDOM.  THE BELL \n");
    }
}