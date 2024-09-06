#include <stdio.h>
#include <unistd.h>

void compact(int size ,char *c){

    char symbol =c[0];
    int tmp_num =0;

    for (int i =0; i<size;i++){
        if (c[i] == symbol) tmp_num++;
        else {
            printf("%c%d",symbol,tmp_num);
            symbol=c[i];
            tmp_num =1;
        }
    }
            printf("%c%d",symbol,tmp_num);
}




int main(void){

    char c[1000] ={0};
    char tmp;
    int size = 0;

    scanf("%c",&tmp);
    c[size] = tmp;
    size++;

    while (tmp != '.'){
        scanf("%c",&tmp);
        c[size] = tmp;
        size++;
    }

    size--;
    compact(size,c);

    return 0;
}

