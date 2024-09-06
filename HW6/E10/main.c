#include <stdio.h>
#include <unistd.h>

void right_once(int *a){

    int tmp = a[11];
    for(int i=0; i<12; i++){

    a[12-i] = a[12-i-1]; // 1 2 3 4 5 6 7 8 9 10 11 12

    }
    a[0] = tmp;

}






int main(void){

    printf("start\n");

    int a[12] ={0};
    for(int i=0; i<12; i++){
        scanf("%d",&a[i]);
    }

    right_once(a);
    right_once(a);
    right_once(a);
    right_once(a);


    for(int i=0; i<12; i++){

        printf("%d ", a[i]);

    }


    return 0;
}

