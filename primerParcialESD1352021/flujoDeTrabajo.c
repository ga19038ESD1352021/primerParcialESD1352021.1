#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAX 60

////////////Leer archivo csv *Falta generar la matriz con estos datos*//////////////////
/*int** leer_archivo(char *fileName) {
    FILE *the_file = fopen("peliculasFavoritasESD135_2021.csv", "r");//declarar un fichero
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
}*/
///////////////////Pasar el archivo a una matriz/////////////////////
/*int** MatrizEnteros(char *fileName) {
        int **matriz_enteros,i,j,nfilas,ncols;
        nfilas=59;
        ncols=6;
        matriz_enteros=(int**)calloc(nfilas,sizeof(int *));
        for(i=0;i<nfilas;i++){
            matriz_enteros[i]=(int *)calloc(ncols,sizeof(int));
        }

    FILE *fp = fopen(fileName, "r");
    if (fp == NULL) {
        exit(EXIT_FAILURE);
    }
    char linea[8000];
    fgets(linea, 7999, fp); 
    int valor=5;
    for (int i = 0; i < nfilas; i++) {

        fgets(linea,7999, fp);
        char *token = strtok(linea, ",");
                valor=atoi(token);
                if(valor==1 || valor==0){
                matriz_enteros[i][0] = valor;
                }

        for (int j = 0; j < ncols; j++) {
            token = strtok(NULL, ",");
             valor=atoi(token);
                if(valor==1 || valor==0){
                matriz_enteros[i][j] = valor;
                }
        }
    }
    fclose(fp);
    return matriz_enteros;
}*/
//////////////////Transponer matriz///////////////////
/*int **transponerLaMatriz(){
    int matriz[MAX][MAX], col, reng, i = 0, j = 0;
    
    for (i = 0; i < reng; i++)//RUTINA PARA LEER LOS DATOS{
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
}*/
/////////////////Multiplicar la matriz////////////////////
