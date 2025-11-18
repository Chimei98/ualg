#include <stdio.h>

/**
  
    ### Recursividade - Probabilidade Combinatória ###
    Combinatória: n!/(n-p)! - Escolher elementos
    Arranjo: n!/p!* - Escolher e organinzar os elementos

    Uso de funções recursivas
  
  **/

// Fatorial - recursiva
 long long int fact(int n){
    if(n<=0){
        return 1;
    }else{
        return n*fact(n-1);
    }
 }

// Combinação
 long long int comb(int p,int k){
        return fact(p)/(fact(k)*fact(p-k));
 }

// Arranjo 
long long int arr(int j, int l){
  return fact(j)/(fact(j-l));
}

 int main(){
     int n1, n2;
     char c;
     printf("## Boas vindas a este codigo sobre calculo combinatorio (12o - Portugal) ##\n Digite 'A' para arranjo, ou 'C' para combinacao. Em seguida, 2 numeros\n Os numeros sao >=0 sendo o primeiro maior que o segundo: ");
     scanf("%c %d %d", &c, &n1, &n2);
     if(n1>n2 && n1>=0 && n2>=0){
        if(c == 'C'){
            printf("A combinacao entre %d e %d seria da forma: %lld", n1,n2,comb(n1,n2));
        }else if(c == 'A'){
            printf("O arranjo entre %d e %d seria da forma: %lld", n1,n2,arr(n1,n2));
        }
    else{
        printf("ERROR! Try Again =/\n");
    }
    }
     return 0;
}
