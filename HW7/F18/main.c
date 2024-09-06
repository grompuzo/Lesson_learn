#include <stdio.h>
#include <unistd.h>

void matrix_count(int a[10][10]){

    int sum = 0;
    int max_elem =0;

    for (int i=0;i<10;i++){
        max_elem = a[i][0];
        for(int j=0; j<10;j++){
            if (a[i][j]>max_elem) max_elem = a[i][j];
        }
        sum+=max_elem;
    }

    printf("%d",sum);

}




int main(void){

    int a[10][10] = {0}; // 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5


    for (int i=0;i<10;i++){
        for(int j=0; j<10;j++){
            scanf("%d",&a[i][j]);
        }
    }

    matrix_count(a);


    return 0;
}

