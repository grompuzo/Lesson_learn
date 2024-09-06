#include <stdio.h>
#include <unistd.h>

int sorting(int *a, int *b){

    int tmp = 0;
    int j =0;

    for(int i=0; i<10; i++){ // 40 105 203 1 14 1000 22 33 44 55
        if ((a[i]/10)%10 == 0){
            b[j] = a[i];
            j++;
        }
    }

    return j;

}





int main(void){

    int j = 0;
    int a[10] = {0};
    int b[10] = {0};

    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    j = sorting(a,b);

    for(int i=0; i<j; i++){ // 40 105 203 1 14 1000 22 33 44 55
        printf("%d ", b[i]); //105 203 1 1000
    }


    return 0;
}

