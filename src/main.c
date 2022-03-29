#include <stdio.h>
#include <stdlib.h>
#include "loading.h"

#define MAX_SIZE 1000

int main() {
    int j = 0;
    char Map[MAX_SIZE][MAX_SIZE];
    // int i = 0, j = 0;
    // loading(**Map);
    FILE* f = fopen("/materials/Map.txt", "r+");
    for (int i = 0; fgets("%s", Map[i][j], f) != NULL; i++) {
        j++;
    }
    int i = 0;
    for (j = 0; Map[j][i] != EOF; j++) {
        for (i = 0; Map[j][i] != '\n'; i++) {
            printf("%c", Map[j][i]);
        }
    }
    return 0;
}