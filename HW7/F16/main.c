#include <stdio.h>
#include <unistd.h>

void chess_check(int r, char c){


    int c_check = -1;

    //c = toupper(c);



    switch (c){

        case 'A': case 'C': case 'E': case 'G':
            c_check = 0;
            break;
        case 'B': case 'D': case 'F': case 'H':
            c_check = 1;
            break;
    }

    if((r%2 == 0)&&(c_check == 0)) printf("WHITE");
    if((r%2 == 0)&&(c_check == 1)) printf("BLACK");
    if((r%2 != 0)&&(c_check == 0)) printf("BLACK");
    if((r%2 != 0)&&(c_check == 1)) printf("WHITE");

}




int main(void){

    int r=0;
    char c;

    scanf("%c%d",&c,&r);

    chess_check(r,c);




    //printf("%d%c",row, collumn);


    return 0;
}

