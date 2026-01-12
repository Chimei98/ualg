#include <stdio.h>

    int main(){
        int order, n1, n2, n3, temp;
        scanf("%d %d %d %d", &order, &n1, &n2, &n3);

        // Verification Using a Manual Bubble Sort
        if(order >= 0){ // Crescent Case
            if (n1 > n2){
                temp = n1;
                n1 = n2;
                n2 = temp;
            }
            if (n2 > n3){
                temp = n2;
                n2 = n3;
                n3 = temp;
            }
            if (n1 > n2){
                temp = n1;
                n1 = n2;
                n2 = temp;
            }
            printf("%d %d %d", n1, n2, n3);
        }else{
            if(n1 < n2){
                temp = n1;
                n1 = n2;
                n2 = temp;
            }
            if (n2 < n3){
                temp = n2;
                n2 = n3;
                n3 = temp;
            }
            if(n1 < n2){
                temp = n1;
                n1 = n2;
                n2 = temp;
            }
            printf("%d %d %d", n1, n2, n3);
        }

        return 0;
    }
