#include <stdio.h>
#include <unistd.h>

int neg_count = 0;
int pos_count = 0;



void sorting(int *a){
    int answer = 0;
    int tmp = 0;
    int answer_count = 0;
    int tmp_count = 0;
    int j =0;

    while(j<10){
        tmp = a[j];
        for(int i=j+1; i<10; i++){
            if (a[i] == tmp) tmp_count++;
        }
        if (tmp_count > answer_count){
            answer_count = tmp_count;
            answer = tmp;
        }
        j++;
        tmp = a[j];
        tmp_count =0;
    }

    printf("%d", answer);

}





int main(void){

    int a[10] = {0};

    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    sorting(a);

/*
    for(int i=0; i<10; i++){ // 4 1 2 1 11 2 34 11 0 11
        printf("%d ", b[i]); //
    }
*/

    return 0;
}

