#include <stdio.h>
#include <unistd.h>

void sorting(int *a, int *b){

    int tmp = 0;
    int j = 0;

    j=4;
    while (j>=0){
        for (int i=0; i<j; i++){
            if (a[i]>a[i+1]){
                tmp = a[1+i];
                a[i+1] = a[i];
                a[i] = tmp;
            }
        }
        b[j] = a[j];
        j--;
    }

    j=9;
    while (j>=5){
        for (int i=5; i<j; i++){
            if (a[i]<a[i+1]){
                tmp = a[1+i];
                a[i+1] = a[i];
                a[i] = tmp;
            }
        }
        b[j] = a[j];
        j--;
    }


}





int main(void){


    int a[10] = {0};
    int b[10] = {0};
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    sorting(a,b);

    for(int i=0; i<10; i++){ // 5 4 3 2 1 6 7 8 9 10
        printf("%d ", b[i]);
    }


    return 0;
}

