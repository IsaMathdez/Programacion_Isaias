
#include <stdio.h>

/* Programa 1.3
Promedio de seis sueldos*/

int main(){

    int cla;
    float s1, s2, s3, s4, s5, s6, ing, pro;
    printf("Ingresa la clave del empleado y los 6 sueldos: \n");
    scanf("%d %f %f %f %f %f %f", &cla, &s1, &s2, &s3, &s4, &s5, &s6);
    ing = (s1+s2+s3+s4+s5+s6);
    pro = ing/6;
    printf("\n %d %5.2f %5.2f", cla, ing, pro);

}