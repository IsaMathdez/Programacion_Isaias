// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 5.3
Apuntadores, variables y valores*/

int main(){

    int x = 3, y = 7, z[5] = {2, 4, 6, 8, 10}; 
    printf("X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \n", x, y, z[0], z[1], z[2], z[3], z[4]);
    int *ix;
    ix = &x;
    y = *ix;
    *ix = 1;
    printf("X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \n", x, y, z[0], z[1], z[2], z[3], z[4]);
    ix = &z[2];
    y = *ix;
    *ix = 15;
    printf("X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \n", x, y, z[0], z[1], z[2], z[3], z[4]);
    x = *ix + 5;
    *ix = *ix - 5;
    printf("X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \n", x, y, z[0], z[1], z[2], z[3], z[4]);
    ++*ix;
    *ix += 1;
    printf("X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \n", x, y, z[0], z[1], z[2], z[3], z[4]);
    x = *(ix + 1);
    y = *ix;
    printf("X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \n", x, y, z[0], z[1], z[2], z[3], z[4]);
    ix += 1;
    y = *ix;
    printf("X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \n", x, y, z[0], z[1], z[2], z[3], z[4]);
    ix += 4;
    printf("X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \n", x, y, z[0], z[1], z[2], z[3], z[4]);
    ix = &x;
    ix += 1;
    x = *ix;
    printf("X = %d \t Y = %d \t Z[0] = %d \t Z[1] = %d \t Z[2] = %d \t Z[3] = %d \t Z[4] = %d \n", x, y, z[0], z[1], z[2], z[3], z[4]);

}