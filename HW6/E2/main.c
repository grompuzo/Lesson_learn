#include <stdio.h>
#include <unistd.h>


int main(void){

    int a[5] ={0};
    int min;
    for(int i=0; i<5; i++){
        scanf("%d",&a[i]); // ���� �������
        if (i==0) min =a[i]; // ������������� ��������
        if (min>a[i]) min=a[i]; // �������� ��������
    }

    printf("%d",min);



    return 0;
}

