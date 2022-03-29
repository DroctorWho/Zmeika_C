#include <stdio.h>
#include <stdlib.h>
#include <string.h>


void loading(char Map[20][20]) {
    int x, y = 0;
    char bufer;
    FILE *f = fopen("materials/Map.txt", "r");
    // x = strlen(f);
    // printf("%d\n", x);
    // fclose(f);
    // f = fopen("materials/Map.txt", "r");
    // while (fscanf(f, "%c", &bufer) != EOF) {
    //     if (bufer == '\n') {
    //         y++;
    //     }
    // }
    // fclose(f);
    // printf("%d\n", y);
    // f = fopen("materials/Map.txt", "r");
    bufer = '\n';
    for (int j; bufer == '\n'; j++) {
        for (int i = 0; (fscanf(f,  "%c", &bufer)) != EOF; i++) {
            Map[j][i] = bufer;
        }
    }
}