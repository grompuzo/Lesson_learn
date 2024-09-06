#include <stdio.h>
#include <unistd.h>

int sorting(int *a, int *b){

    int tmp = 0;
    int j =0;
    int number=0;
    int flag = 0;

    while (j!=10){
        tmp = a[j];
        for(int i=j+1; i<10; i++){
            if (a[i] == tmp){
                for(int g=0; g<j+1; g++){
                    if (b[g] == a[i]) flag = 1;
                }
                if (flag == 0){
                    b[number] = tmp;
                    number++;
                }
                if (flag == 1) flag = 0;
            }
        }
        j++;
    }

    return number;
}





int main(void){

    int j;
    int a[10] = {0};
    int b[10] = {0};

    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    j = sorting(a,b);

    for(int i=0; i<j; i++){ // 4 1 2 1 11 2 34 8 9 10
        printf("%d ", b[i]); //1 2
    }


    return 0;
}

