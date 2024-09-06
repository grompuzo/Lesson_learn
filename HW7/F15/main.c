#include <stdio.h>
#include <unistd.h>

int count_bigger_abs(int n, int a[]){

    int answer = 0;
    int max = a[0];


    for(int i=0; i<n; i++){
        if (a[i]>max) max =a[i];
    }

    for(int i=0; i<n; i++){
        if ((a[i]*(-1))>max) answer++;
    }


    return answer;
}




int main(void){

    int a[10] ={1,2,3,4,5,6,7,8,-9,-10};



    printf("%d",count_bigger_abs(10,a));


    return 0;
}

