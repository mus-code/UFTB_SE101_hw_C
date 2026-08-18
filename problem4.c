#include<stdio.h>

int main() {
    int first=3;
     for(int i=1;i<=first;i++){//for new line
        for(int j=1;j<=3-i;j++){//for space
            //for i=1,3-1=2 :two spaces
            //for i=2,3-2=1 :one space
            printf(" ");
        }
        for(int k=1;k<=2*i-1;k++){//for printing star. from 1 to 2*i-1
            printf("*");
        }
        printf("\n");
    }
    int second=1;
    for(int m=2;m>=second;m--){
        for(int n=1;n<=3-m;n++)
    {//for m=2,3-2=1 :one space
    //for m=1,3-1=2 :two space
        printf(" ");
    }
    for(int l=1;l<=2*m-1;l++)
    {
        printf("*");
    }
    printf("\n");
}


    return 0;
}
/*     
    *   1
   ***  2
  ***** 3
   ***  4
    *   5
  12345
*/