#include <stdio.h>
#include <unistd.h>

void sorting(int *a, int *b){
    int j = 9;
    int tmp = 0;
    int n = 0;


    while(j > -1){
        for(int i=0; i<10; i++){
         if (a[i]%10 > tmp%10){tmp=a[i]; n=i;}
         if ((a[i]%10 == tmp%10)&&(a[i]>tmp)) {tmp = a[i]; n=i;}
        }
        a[n] = 0;
        b[j] = tmp;
        tmp = 0;
        j--;

    }
}





int main(void){


    int a[10] ={0};
    int b[10] ={0};
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    sorting(a,b);

    for(int i=0; i<10; i++){ // 14 25 13 30 76 58 32 11 41 97

        printf("%d ", b[i]);

    }


    return 0;
}

