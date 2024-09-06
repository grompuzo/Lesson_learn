#include <stdio.h>
#include <unistd.h>

void chet(int *a){

    int tmp=1;

    for(int i=0;i<10;i++){
        if (a[i]%2 != 0){
            while (a[i]>0){
                if ((a[i]%10)%2 !=0) tmp = tmp * (a[i]%10);
                a[i] = a[i]/10;
            }
            a[i]=tmp;
            tmp =1;
        }
    }
}

void nechet(int *a){

    int tmp=1;

    for(int i=0;i<10;i++){
        if (a[i]%2 == 0){
            while (a[i] != 0){
                if ((a[i]%10)%2 ==0) tmp = tmp * (a[i]%10);
                a[i] = a[i]/10;
            }
            a[i]=tmp;
            tmp =1;
        }
    }


}


int main(void){

    int a[10] ={0};  // 48 31 20 61 97 12 18 100 200 123  //  48 25 57 4 23 91 90 85 30 79
    int choise = 0;

    for(int i =0; i<10; i++){
        scanf("%d",&a[i]);
        (a[i]%2 == 0) ? choise++ : choise--;
    }

    if (choise>0) chet(a);
    else nechet(a);

    for(int i=0; i<10; i++){
        printf("%d ",a[i]);
    }

    return 0;
}

