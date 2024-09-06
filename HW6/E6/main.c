#include <stdio.h>
#include <unistd.h>


int main(void){

    printf("start\n");

    int a[12] ={0};
    int sum = 0;
    float result;
    for(int i=0; i<12; i++){
        scanf("%d",&a[i]); // ввод массива
        sum+=a[i]; // суммa
    }

    result = sum/12.0;
    printf("%.2f", result);

    return 0;
}

