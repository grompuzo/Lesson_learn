#include <stdio.h>
#include <unistd.h>

int neg_count = 0;
int pos_count = 0;



void sorting(int n){

    int tmp = 0;


    for (int i = 2; i<10; i++){
        for(int j = 2; j<n+1; j++){
            if ( j%i == 0 ) tmp++;
        }
        printf("%d %d\n", i, tmp);
        tmp=0;

    }





}





int main(void){

    int n = 0;
    int b[10] = {0};

        scanf("%d",&n);

    sorting(n);

    return 0;
}

