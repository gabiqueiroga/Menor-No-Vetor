#include <stdio.h>

int menor(int *vetor, int tamanho);
int *menorP(int *vetor, int tamanho);

int main(){
 
    int menor_vet;
    int *menor_vet2;
    int vet[5];
    int tamanho=5;

    for (int i=0; i<tamanho; i++){
        printf("informe um valor para o vetor: \n");
        scanf("%d", &vet[i]);
    }

    menor_vet = menor(vet, tamanho);
    menor_vet2 = menorP(vet, tamanho);
    printf("menor eh %d", menor_vet, *menor_vet2);

}

int menor(int *vetor, int tamanho){

    int menor = vetor[0];
    for(int i=0; i<tamanho; i++){
      if(menor>vetor[i]){
        menor=vetor[i];
      }
    }
    return menor;
}

int *menorP(int *vetor, int tamanho){

  int* menor;
  menor=vetor;
  for(int i=0; i<tamanho; i++){
    if(*menor>vetor[i]){
      menor=&vetor[i];
    }
  }
  return menor;
}