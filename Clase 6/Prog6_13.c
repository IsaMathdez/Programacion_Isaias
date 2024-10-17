// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 6.13
Empresa textil*/

const int dep = 3;
const int mes = 12;
const int ano= 8;
void lectura(float [mes][dep][ano], int, int, int);
void funcion1(float [mes][dep][ano], int, int, int);
void funcion2(float [mes][dep][ano], int, int, int);
void funcion3(float [mes][dep][ano], int, int, int);

int main(){

    float pro[mes][dep][ano];
    lectura(pro, mes, dep, ano);
    funcion1(pro, mes, dep, 2);
    funcion2(pro, mes, dep, ano);
    funcion3(pro, mes, dep, ano);

}

void lectura(float a[][dep][ano], int f, int c, int p){
    int k, i, j;
    for (k = 0; k < p; k++){
        for (i = 0; i < f; i++){
            for (j = 0; j < c; j++){
                printf("Año %d \t Mes %d \t Departamento %d: \n", k+1, i+1, j+1);
                scanf("%f", &a[i][j][k]);
            }
        }
    }
}

void funcion1(float a[][dep][ano], int f, int c, int p){
    int i, j;
    float sum = 0.0;
        for (i = 0; i < f; i++){
            for (j = 0; j < c; j++){
                sum += a[i][j][p-1];
            }
        }
    printf("Ventas totales de  la empresa en el segundo año: %.2f \n", sum);
}

void funcion2(float a[][dep][ano], int f, int c, int p){
    int i, j;
    float sum1 = 0.0, sum2 = 0.0, sum3 = 0.0;
        for (i = 0; i < f; i++){
            for (j = 0; j < c; j++){
                switch (j+1){
                case 1:
                    sum1 += a[i][j][p-1];
                    break;
                
                case 2:
                    sum2 += a[i][j][p-1];
                    break;

                case 3:
                    sum3 += a[i][j][p-1];
                    break;

                default:
                    break;
                }
            }
        }
    if(sum1 > sum2){
        if(sum1 > sum3){
            printf("Departamento con mayores ventas en el ultimo año: Hilos \n");
            printf("Ventas: %.2f \n", sum1);
        } else {
            printf("Departamento con mayores ventas en el ultimo año: Licra \n");
            printf("Ventas: %.2f \n", sum3);
        }
    } else {
        if(sum2 > sum3){
            printf("Departamento con mayores ventas en el ultimo año: Lanas \n");
            printf("Ventas: %.2f \n", sum2);
        } else {
            printf("Departamento con mayores ventas en el ultimo año: Licra \n");
            printf("Ventas: %.2f \n", sum3);
        }
    }
}

void funcion3(float a[][dep][ano], int f, int c, int p){
    int i, j, k, de, me, an;
    float ven = -1.0;
    for(k = 0; k < p; k++){
        for (i = 0; i < f; i++){
            for (j = 0; j < c; i++){
                if(a[i][j][k] > ven){
                    ven = a[i][j][k];
                    de = j;
                    me = i;
                    an = k;
                }
            }
        }
    }
    printf("Departamento %d Mes %d Año %d \n", de+1, me+1, an+1);
    printf("Ventas: %.2f \n", ven);
}