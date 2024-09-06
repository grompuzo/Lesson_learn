#include <stdio.h>
#include <unistd.h>

int neg_count = 0;
int pos_count = 0;



void sorting(int *a, int *b, int *c){

    for(int i=0; i<10; i++){
        if (a[i]>0){
        b[pos_count]=a[i];
        pos_count++;
        }
        if (a[i]<0){
        c[neg_count]=a[i];
        neg_count++;
        }
    }
}





int main(void){

    int a[10] = {0};
    int b[10] = {0};
    int c[10] = {0};

    for(int i=0; i<10; i++){
        scanf("%d",&a[i]);
    }

    sorting(a,b,c);

    for(int i=0; i<pos_count; i++){ // 5 -4 0 1 4 -3 -3 3 0 2
        printf("%d ", b[i]); //
    }
    for(int i=0; i<neg_count; i++){
        printf("%d ", c[i]); //
    }

    return 0;
}

