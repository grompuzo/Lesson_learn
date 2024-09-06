#include <stdio.h>
#include <unistd.h>


int main(void){

    float a[5] ={0};
    for(int i=0; i<5; i++){
        scanf("%f",&a[i]); // ввод массива
    }

    printf("%.3f",(a[0]+a[1]+a[2]+a[3]+a[4])/5);

    return 0;
}

