#include <stdio.h>
#include <unistd.h>


int main(void){

    int a[5] ={0};
    int min;
    for(int i=0; i<5; i++){
        scanf("%d",&a[i]); // ввод массива
        if (i==0) min =a[i]; // инициализация минимума
        if (min>a[i]) min=a[i]; // проверка минимума
    }

    printf("%d",min);



    return 0;
}

