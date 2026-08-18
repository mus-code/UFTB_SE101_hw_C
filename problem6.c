#include<stdio.h>

int main() {
    for(int i=1;i<=5;i++){
        if(i==1 || i==5){//if i=5 or i=1 -> print(5star)
            for(int j=1;j<=5;j++){
                printf("*");
            }
        }
        else{
            for(int k=1;k<=5;k++){
                if(k==1||k==5) printf("*");
                else printf(" ");
            }
        }
        printf("\n");
    }

    return 0;
}
