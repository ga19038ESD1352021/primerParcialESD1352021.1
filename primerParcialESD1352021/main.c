
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

////////Parte 1 Leer el csv y guardarlo en una matriz////////
/*
 * ########FALTA COLOCARLO EN UN METODO Y GUARDAR LOS DATOS EN UNA MATRIZ########
 * 
 * #####METODO PARA LEER EL CSV#####
 * FILE *the_file = fopen("peliculasFavoritasESD135_2021.csv", "r");//declarar un fichero
    if(the_file==NULL){
        perror("No encontre tu archivo csv");
        exit(1);
    }
    char line[200];
    while(fgets(line, sizeof(line), the_file)){
        char *token;
        token = strtok(line, ",");
        while(token!=NULL){
            printf("%s \t", token);
            token=strtok(NULL, ",");
        }
        printf("\n");
    }
 * 
 * #####METODO PARA LEERLO Y GUARDARLO#####
 *  int** leerMatriz(char *fileName) {
	FILE *fp = fopen(fileName, "r");
	if (fp == NULL) {
		exit(EXIT_FAILURE);
	}
	char linea[200];
	fgets(linea, 199, fp); 
	char *token = strtok(linea, ",");//10 6
	filas = atoi(token);
	token = strtok(NULL, ",");
	cols = atoi(token);
	int **matriz = new int*[filas];
	for (int i = 0; i < filas; i++) {
		matriz[i][0] = new int[cols];
		fgets(linea,199, fp);
		token = strtok(linea, ",");
		matriz[i][0] = atoi(token);
		for (int j = 1; j < cols; j++) {
			token = strtok(NULL, ",");
			matriz[i][j] = atoi(token);
		}
	}
	fclose(fp);
	return matriz;
    }
 * 
 * #####METODO PARA IMPRIMIR LA MATRIZ#####
 * void imprimeMatriz(int **matriz) {
        for (int i = 0; i < filas; i++) {
                for (int j = 0; j < cols; j++) {
                        printf("%d\t", matriz[i][j]);
                }
                printf("\n");
        }
    }
 *  
 */



////////Parte 2 Guardar solo los datos en una matriz////////
/*
 * ########CUBIERTO########
 */
int** MatrizEnteros(char *fileName) {
    int **mostrar_matriz, exfila, excolumna, filas, columnas;
    filas = 59;
    columnas = 6;
    mostrar_matriz = (int**) calloc(filas, sizeof (int *));
    for (exfila = 0; exfila < filas; exfila++) {
        mostrar_matriz[exfila] = (int *) calloc(columnas, sizeof (int));
    }
    FILE *fp = fopen(fileName, "r");
    if (fp == NULL) {
        exit(EXIT_FAILURE);
    }
    char line[8000];
    fgets(line, 7999, fp);
    int valor = 5;
    for (int fila = 0; fila < filas; fila++) {
        fgets(line, 7999, fp);
        char *token = strtok(line, ",");
        valor = atoi(token);
        if (valor == 1 || valor == 0) {
            mostrar_matriz[fila][0] = valor;
        }

        for (int columna = 0; columna < columnas; columna++) {
            token = strtok(NULL, ",");
            valor = atoi(token);
            if (valor == 1 || valor == 0) {
                mostrar_matriz[fila][columna] = valor;
            }
        }
    }
    fclose(fp);
    return mostrar_matriz;
}

////////Parte 3 Transponer la matriz////////
/*
 * //########TOMAR LA MATRIZ DE LA PARTE 2 Y TRANSPONERLA########
 * 
    int matriz[MAX][MAX], col, reng, i = 0, j = 0;
    
    for (i = 0; i < reng; i++)//RUTINA PARA LEER LOS DATOS {
        for (j = 0; j < col; j++) {
            printf("ESCRIBE LOS VALORES [%d][%d]==>\t", i + 1, j + 1);
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("\n\n\t\tMatriz original"); //RUTINA PARA IMPRIMIR
    printf("\n\n");
    for (i = 0; i < reng; i++) {
        printf("\n\t\t");
        for (j = 0; j < col; j++) {
            printf("  %6d  ", matriz[i][j]);
        }
    }
    printf("\n\n\t\tMatriz transpuesta"); //IMPRIMIR MATRIZ TRANSPUESTA
    printf("\n\n");
    for (i = 0; i < col; i++) {
        printf("\n\t\t");
        for (j = 0; j < reng; j++) {
            printf("  %6d  ", matriz[j][i]);
        }
    }
    printf("\n\n\n");
 * 
 */


////////Parte 4 Multiplicar la matriz////////
/*
 *########MULTIPLICAR LA MATRIZ DE LA PARTE 2 POR LA TRANSPUESTA DE LA PARTE 3########
 */


////////Parte 5 Mostrar los carnets de los estudiantes////////
/*
 *########QUE APAREZCAN LOS CARNETS########
 */

const char* integrantes(){
    
    return "Integrante: GA19038";
}

int main(int argc, char argv) {
    int **matrices = MatrizEnteros("peliculasFavoritasESD135_2021.csv");
    for (int fila = 0; fila < 59; fila++) {
        for (int columna = 0; columna < 6; columna++) {
            printf("%d \t", matrices[fila][columna]);
        }
        printf("\n");
    }
    return (EXIT_SUCCESS);
}