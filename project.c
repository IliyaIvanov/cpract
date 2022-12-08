#include <stdio.h>
#include <string.h>
#include <stdint.h>
#include <math.h>
#include <stdlib.h>

//struct xorshift32_state {
//    uint32_t a;
//};
//
//uint32_t xorshift32(struct xorshift32_state *state) {
//    uint32_t x = state->a;
//    x ^= x << 13;
//    x ^= x >> 17;
//    x ^= x << 5;
//    return state->a = x;
//}
//
//struct xorshift32_state *global_state = NULL;
//
//int last_max = 0;
//
//float rnd(int max) {
//    if (global_state == NULL) {
//        global_state = malloc(sizeof(struct xorshift32_state));
//    }
//    if (max == 0) {
//        float value = global_state->a / (float)UINT32_MAX;
//        return last_max*value;
//    }
//    last_max = max;
//    global_state->a = xorshift32(global_state);
//    float value = global_state->a / (float)UINT32_MAX;
//    return value*max;
//}

struct xorshift32_state* global_state = NULL;

struct xorshift32_state {
    uint32_t a;
};

uint32_t xorshift32(struct xorshift32_state* state) {
    uint32_t x = state->a;
    x ^= x << 13;
    x ^= x >> 17;
    x ^= x << 5;
    return state->a = x;
}

float rnd(float upper) {
    if (global_state == NULL) {
        int size = sizeof(struct xorshift32_state);
        struct xorshift32_state* pointer = malloc(size);
        global_state = pointer;
    }
    global_state->a = xorshift32(global_state);
    return (global_state->a / (float)UINT32_MAX) * upper;
}

void tab(int value) {
    for (int i = 0; i < value; i++) {
        printf(" ");
    }
}

int main() {
//    printf("START\n");
//    printf("%f\n", 80 * rnd(1) + 1);
//    printf("%f\n", 80 * rnd(1) + 1);
    char q[5];
    int X = 0;
    int Y = 0;
    int C = 0;
    int G = 0;
    int I = 0;
    tab(34);
    printf("KENO\n");
    tab(15);
    printf("CREATIVE COMPUTING, MORRISTOWN, NEW JERSEY\n");
    int N[21];
    int M[23];
    int A[8];
    printf("KENO IS PLAYED IN MANY CASINOS IN LAS VEGAS.\n");
    printf("PLAY KENO BY COMPUTER.  ONE VARIATION OF THE GAME, UTILIZES\n");
    printf("THE RANDOM NUMBER GENERATOR.\n");
    printf("\n");
    printf("THE PLAYER CHOOSES 8 DIFFERENT NUMBERS FROM 1 TO 80\n");
    printf("INCLUSIVE, AND BETS $1.20.  THE COMPUTER WILL SELECT\n");
    printf("20 NUMBERS AT RANDOM AND WILL ELIMINATE DUPLICATES WHICH\n");
    printf("MAY OCCUR .  ANOTHER NUMBER  WILL BE INSERTED IN ITS PLACE\n");
    printf("SO THAT THE COMPUTER WILL OUTPUT 20 DIFFERENT NUMBERS.\n");
    printf("\n\n");

n38:
    printf("\n\n\nHERE WE GO!!!\n");
    printf("THE COMPUTER WILL OUTPUT A ? MARK.  TYPE A NUMBER FROM\n");
    printf("1 TO 80, INCLUSIVE, AND PRESS THE RETURN KEY. REPEAT THIS\n");
    printf("PROCESS UNTIL THE ? MARK IS NO LONGER SHOWN.\n");
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

//n57:

//n58:
    for (int k = 1; k <= 7; k++) {
        for (int j = k; j <= 7; j++){
            X = A[k];
            Y = A[j+1];
//n61:
            if (X == Y) {
                printf("\n\n");
                C++;
                printf("A DUPLICATE NUMBER HAS BEEN DETECTED IN YOUR INPUT.\n");
                printf("TYPE ANOTHER NUMBER, PLEASE.\n");
//n64:
                while (1) {
                    scanf("%i", &Y);
                    int e1 = Y;
                    if (e1 > 80 || e1 == 0 || e1 < 0) {
//n70:
                        printf("TYPE A NUMBER FROM 1 TO 80, INCLUSIVE, PLEASE.\n");
                        printf("TYPE ANOTHER NUMBER, PLEASE.\n");
                    } else {
                        A[j+1] = Y;
                        break;
                    }
                }
            }
        }
    }
//n72:
    if (C == 0) goto n88;

n88:
    printf("\n\n");
    printf("THE COMPUTER WILL SELECT 20 NUMBERS AT RANDOM.  THE BELL");
    printf("TONE INDICATES IT IS IN THE PROCESS OF SELECTING THE NUMBERS.");
    for (int l = 1; l <= 20; l++){
        N[l] = (int)(80 * rnd(1) + 1);
        M[l] = N[l];
    }
    // L = 21
    for (int k = 1; k <= 20; k++){
        for (int j = k; j <= 21; j++){
            X = M[k];
            Y = M[j+1];
            if (X!=Y) goto n139;
            M[j+1] = (int)(80 + rnd(1) + 1);
            Y = M[j+1];
        }
    }


n139:
    printf("%c", 6);
    printf("\n\n");
    printf("YOUR NUMBERS ARE:\n");
    for (int i = 1; i <= 8; i++){
        printf("%i  ", A[i]);
    }
    printf("\n\n\n");
    printf("THE COMPUTER HAS SELECTED THE FOLLOWING  NUMBERS:\n");
    for (int l = 1; l <= 20; l++){
        printf("%i  ", M[l]);
    }
    printf("\n\n");
    printf("\nTHE PROGRAM WILL COMPARE YOUR NUMBERS WITH THE\n");
    printf("NUMBERS THE COMPUTER HAS SELECTED.\n");
    printf("\n\n");
    printf("LISTEN FOR THE BELL TONE--- EACH RING INDICATES ANOTHER\n");
    printf("CORRECT GUESS BY YOU.\n");
    printf("YOU HAVE GUESSED THE FOLLOWED NUMBERS:\n");
    goto n197;

n197:
    G = 0;
    I = 1;
    for (int i = 1; i <= 8; i++){
        for (int j = 1; j <= 20; j++){
            X = A[i];
            Y = M[j];
            //printf("%i  ", X);
            //printf("%i  \n", Y);
            if (X == Y){
                printf("\n%c", 6);
                for (int v1 = 1; v1 <= 3976; v1++){
                }
                printf(" %i\n", A[i]);
                G++;
            }
            //printf("%i  ", G);
            //printf("%i  \n", I);
            //printf("\n");
            if (I == 8){
                break;
            }
        }
    }
    goto n225;

//n213:
    

n225:
    if (G < 5) goto n242;
    if (G == 5) goto n261;
    if (G == 6) goto n267;
    if (G == 7) goto n273;
    if (G == 8) goto n279;

n242:
    printf("\nYOU CAUGHT %i NUMBERS OUT OF 8--\n", G);
    printf("NOT ENOUGH CORRECT GUESSES-- 'SO SOLLY', NO PAYOFF.\n");
    printf("\n\n");
    goto n246;
    
n246:
    printf("DO YOU WANT TO PLAY KENO AGAIN?\n");
    goto n249;

n249:
    printf("TYPE 'YES' OR 'NO\n");
    scanf("%s", q);
    if (strcmp (q, "YES") == 0){
        C++;
        if (C == 3) { 
            goto n299; 
        } else { 
            goto n38; 
        }
    } else if(strcmp (q, "NO") == 0){
        goto n299;
    }

n261:
    printf("\nYOU CAUGHT %i NUMBERS OUT OF 8--YOU WIN $10.00\n", G);
    printf("\n\n");
    goto n246;

n267:
    printf("\nYOU CAUGHT %i NUMBERS OUT OF 8--YOU WIN $100.00\n", G);
    printf("\n\n");
    goto n246;

n273:
    printf("\nYOU CAUGHT %i NUMBERS OUT OF 8--YOU WIN $2200.00\n", G);
    printf("\n\n");
    goto n246;

n279:
    printf("\nYOU CAUGHT %i NUMBERS OUT OF 8--YOU WIN $25000.00\n", G);
    printf("8 OUT OF 8 DOES NOT OCCUR TOO OFTEN, LUCKY.\n");
    printf("\n\n");
    goto n246;

n299:
    printf("\nTHAT'S ALL FOR NOW.  PLAY KENO AGAIN, BE SEEING YOU.\n");
}