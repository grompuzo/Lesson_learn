#include <stdio.h>
#include <unistd.h>


int main(void){

    printf("start\n");

    int a[10] ={0};
    int sum=0;
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]); // ���� �������

        if (a[i]>0) sum+=a[i]; // �������� �����

    }


    printf("%d",sum);

    return 0;
}

