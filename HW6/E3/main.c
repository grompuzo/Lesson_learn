#include <stdio.h>
#include <unistd.h>


int main(void){

    printf("start\n");

    int a[10] ={0};
    int min,max,n_min,n_max;
    for(int i=0; i<10; i++){
        scanf("%d",&a[i]); // ���� �������

        if (i==0){ // ������������� ����������
            min = a[i];
            max = a[i];
            n_min = i;
            n_max = i;
        }

        if (min>a[i]){ // �������� ��������
            min=a[i];
            n_min = i;
        }

        if (max<a[i]){ // �������� ���������
            max=a[i];
            n_max = i;
        }
    }

    printf("%d %d %d %d",n_max, max, n_min, min);



    return 0;
}

