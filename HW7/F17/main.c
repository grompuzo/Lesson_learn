#include <stdio.h>
#include <unistd.h>

void matrix_count(int a[5][5]){

    int answer = 0;

    for(int i=0;i<5;i++){

        answer+=a[i][i];
    }

    printf("%d",answer);

}




int main(void){

    int a[5][5] = {0}; // 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5 1 2 3 4 5


    for (int i=0;i<5;i++){
        for(int j=0; j<5;j++){
            scanf("%d",&a[i][j]);
        }
    }

    matrix_count(a);


    return 0;
}

