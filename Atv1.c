#include<stdio.h>
#include<math.h>
#include<locale.h>


main(){
    /*
    Escreva um algoritmo que leia um número e imprima a raiz quadrada do número caso ele
    seja positivo ou igual a zero e o quadrado do número caso ele seja negativo.
    */


   setlocale(LC_ALL, "Portuguese_Brazil");
   
   int numero, raiz, quadrado;


   printf("Digite o numero");
   scanf("%d", &numero);


   //decidir o fluxo de execução do algoritmo


   if(numero >= 0){
    raiz = sqrt(numero);
    printf("A raiz quadrada é: %d", raiz);
   }else{
    quadrado = pow(numero, 2);
    printf("O quadrado é: %d", quadrado);
   }
}
