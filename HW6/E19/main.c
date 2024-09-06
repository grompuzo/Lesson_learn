#include <stdio.h>
#include <unistd.h>

int neg_count = 0;
int pos_count = 0;



void sorting(int n){

    int tmp = 0;
    int answer[20] ={0};

    while(n != 0){
        answer[tmp] = n%10;
        tmp++;
        n = n/10;
    }

    for(int i = tmp; i>0; i--){
        printf("%d ", answer[i-1]);
    }
}





int main(void){

    int n = 0;
    int b[10] = {0};

        scanf("%d",&n);

    sorting(n);

    return 0;
}

