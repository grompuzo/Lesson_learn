#include <stdio.h>
#include <unistd.h>

void right_once(int *a){

    int tmp = a[9];
    for(int i=0; i<10; i++){

    a[10-i] = a[10-i-1]; // 1 2 3 4 5 6 7 8 9 10

    }
    a[0] = tmp;

}






int main(void){

    printf("start\n");

    int a[10] ={0};
    int tmp = 0;
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    right_once(a);

    for(int i=0; i<10; i++){

        printf("%d ", a[i]);

    }


    return 0;
}

