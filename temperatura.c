// Construa um programa em C que utiliza uma matriz 10×3 que armazene as  temperaturas máxima e minima do dia, assim como a media de temperatura na ultima coluna.  Crie um menu de escolha que ofereça as seguintes informações:
// temperatura minima de todos os dias.
// temperatura máxima de todos os dias.
// maior variação de temperatura de todos os dias.
// Sair do programa.

#include <stdio.h>
#include <stdlib.h>

int main () {

float M[10][3];
float max,media,min;
int opcao, valor;
int i;
    printf("\nDigite a Maxima e a Minima das Temperaturas:\n");
    for(i=0; i < 10; i++){
      printf("\nDia %d: ",i+1);
      printf("\nmaxima:");
      scanf("%f", &M[i][0]);
      printf("\nminima:");
      scanf("%f", &M[i][1]);

      // //inversão dos valores
      if(M[i][1]> M[i][0])
      {
       max = M[i][1];
       M[i][1] = M[i][0];
       M[i][0] = max;
      }
    }
 
 
  while(opcao != 4) {
    printf("\n---Menu de opcoes---\n");
    printf("\n1) Temperatura máxima de todos os dias");
    printf("\n2) Temperatura minima de todos os dias");
    printf("\n3) Maior variação de temperatura de todos os dias");
    printf("\n4) Sair do programa\n");

    printf("\nDigite a opcao desejada: ");
    scanf("%d", &opcao);

    switch(opcao) {

      case 1:
        printf("\n A temperatura maxima dos dias são:");
        for(i=0;i<10;i++)
        {
          printf("\nDia %d: %f", i+1,M[i][0]);
        }
        break;
      
      case 2:
        printf("\n A temperatura minima dos dias são:");
        for(i=0;i<10;i++)
        {
          printf("\nDia %d: %f", i+1,M[i][1]);
        }
        break;
      
      case 3:
      printf("\n A variação dos dias são:");
      for(i=0;i<10;i++){
          printf("\nDia %d: %f", i+1, M[i][0] - M[i][1]);
      }
        break;
      
      case 4:
        printf("\nEncerrando o programa...\n");
        
        break;

      default:
        printf("\nValor invalido!\n");
    }

  }

return 0;
}


