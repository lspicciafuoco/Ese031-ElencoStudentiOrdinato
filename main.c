#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define N 3
#define MAX_STRLEN 30

struct s_studente{
    char nome[MAX_STRLEN];
    char cognome[MAX_STRLEN];
    unsigned int eta;
    char classe[MAX_STRLEN];
};

typedef struct s_studente studente;

void Cognomi(studente v[], int n);

int main(int argc, char** argv) {
    
    int i;
    studente elenco[N];
    
    for(i=0;i<N;i++){
        printf("NOME: ",i);
        scanf("%s", (elenco[i].nome));
        printf("COGNOME: ",i);
        scanf("%s", (elenco[i].cognome));
        printf("ETA: ",i);
        scanf("%d", &(elenco[i].eta));
        printf("CLASSE: ",i);
        scanf("%s", (elenco[i].classe));
    }
    
    Cognomi(elenco,N);
    
    for(i=0;i<N;i++){
        printf("%s; %s; %d; %s\n", elenco[i].nome,elenco[i].cognome,elenco[i].eta,elenco[i].classe);
    }
    return (EXIT_SUCCESS);
}

void Cognomi(studente v[],int n){
    int i,min,j;
    studente scam;
    
    for(i=0;i<n-1;i++){
        min=i;
        
        for(j=i+1;j<n;j++){
            if(strcmp(v[j].cognome,v[min].cognome)<0){
                min=j;
            }
        }
        scam=v[i];
        v[i]=v[min];
        v[min]=scam;
    }
}