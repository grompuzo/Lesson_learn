#include <stdio.h>
#include <unistd.h>

int neg_count = 0;
int pos_count = 0;



void sorting(int *a, int *b){
    int tmp = 0;
    int answer_count = 0;
    int tmp_count = 0;
    int j =0;

    while(j<10){
        tmp = a[j];
        for(int i=0; i<10; i++){
            if ((a[i] == tmp)&&(i != j)) tmp_count++;
        }
        if (tmp_count == 0){
            b[answer_count] = tmp;
            answer_count++;
        }
        j++;
        tmp = a[j];
        tmp_count =0;
    }


    for(int i=0; i<answer_count; i++){ // 5 -4 0 1 4 -3 -3 3 0 2
        printf("%d ", b[i]); // 5 -4 1 4 3 2
    }
}





int main(void){

    int a[10] = {0};
    int b[10] = {0};
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    sorting(a,b);

    return 0;
}

