
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char** argv) {
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
    return (EXIT_SUCCESS);
}