#include <stdio.h>
#include <unistd.h>


int main(void){

    printf("start\n");

    int a[10] ={0};
    int max,n_max,number;
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]); // ввод массива

        if (i==0){ // инициализация максимума
            max = a[i];
        }

        if (max<a[i]){ // проверка максимума
            max=a[i];
            number = i;
        }

    }
    a[number]=0;
    for(int i=0; i<10; i++){
        if (i==0){ // инициализация второго максимума
            n_max = a[i];
        }

        if (n_max<a[i]) n_max=a[i]; // проверка второго максимума

    }


    printf("%d",n_max+max);

    return 0;
}

