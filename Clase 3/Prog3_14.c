// Programa hecho por Isaias Matos
#include <stdio.h>

/* Programa 3.14
Sistema electoral con 5 opciones*/

int main(){

    int vot, c1 = 0, c2 = 0, c3 = 0, c4 = 0, c5 = 0, nu = 0, svo; //Contadores para cada candidato
    float po1, po2, po3, po4, po5, pon; //Cada promedio
    printf("Ingrese el primer voto: \n"); //Se debe ingresar almenos un voto
    scanf("%d", &vot);
    while(vot){ //Mientras el voto no sea 0
        switch (vot) //Se iran contando cada voto
        {
        case 1:
            c1++;
            break;
        
        case 2:
            c2++;
            break;
        
        case 3:
            c3++;
            break;

        case 4:
            c4++;
            break;  

        case 5:
            c5++;
            break;  

        default:
            nu++; //Incluso los que se salen del rango
            break;
        }
        printf("Ingrese el siguiente voto, -1 para terminar: \n"); //Se pide el siguiente voto
        scanf("%d", &vot);
    }
    svo = c1+c2+c3+c4+c5+nu; //Total de votos
    po1 = ((float)c1/svo)*100; //Porcentaje para cada candidato
    po2 = ((float)c2/svo)*100;
    po3 = ((float)c3/svo)*100;
    po4 = ((float)c4/svo)*100;
    po5 = ((float)c5/svo)*100;
    pon = ((float)nu/svo)*100; //Nulos tambien
    printf("Cantidad total de votos: %d \n", svo); //Imprimir los resultados
    printf("Candidato 1: %d votos -- Procentaje: %5.2f \n", c1, po1);
    printf("Candidato 2: %d votos -- Procentaje: %5.2f \n", c2, po2);
    printf("Candidato 3: %d votos -- Procentaje: %5.2f \n", c3, po3);
    printf("Candidato 4: %d votos -- Procentaje: %5.2f \n", c4, po4);
    printf("Candidato 5: %d votos -- Procentaje: %5.2f \n", c5, po5);
    printf("Nulos: %d votos -- Procentaje: %5.2f \n", nu, pon);
    // Fin :D
}