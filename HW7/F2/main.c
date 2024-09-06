#include <stdio.h>
#include <unistd.h>

int neg_count = 0;
int pos_count = 0;



void sorting(int n){

    int tmp = 0;
    int numbers[20] ={0};
    int answer = 0;
    int j = 0;
    int sort_tmp = 0;
    int swap_tmp = 0;

    while(n != 0){
        numbers[tmp] = n%10;
        tmp++;
        n = n/10;

    }

    sort_tmp = tmp-1;
    while(sort_tmp!=0){
        for(int i =0; i<sort_tmp; i++){
        if (numbers[i]>numbers[i+1]){
            swap_tmp = numbers[i+1];
            numbers[i+1] = numbers[i];
            numbers[i] = swap_tmp;
        }
        }
        sort_tmp--;

    }

    for(int i = 0; i<tmp; i++){
        j=i;
        while(j>0){
            numbers[i] = numbers[i]*10;
            j--;
        }
        answer +=numbers[i];
    }

    printf("%d", answer);
}
/*

    VOID sort_array(int size, int a[]){





        int tmp = 0;

        while(size!=0){
        for(int i =0; i<size; i++){
        if (a[i]<a[i+1]){
            tmp = a[i+1];
            a[i+1] = a[i];
            a[i] = tmp;
        }
        }
        size--;

    }



    }

*/



int main(void){

    int n = 0;
    int b[10] = {0};

        scanf("%d",&n);

    sorting(n);

    return 0;
}

