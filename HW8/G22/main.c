 #include <stdio.h>
#include <unistd.h>

int main(void){

    /*
    in = fopen("input.txt","r");
    fscanf(in,"%d",&tmp);
    fclose(in);

    out = fopen("output.txt","w");
    fprintf(out, "%d", t,p);
    fclose(out);

    while((tmp = fgetc(in)) != EOF){}
    или
    while((fscanf(in,"%d",&tmp))== 1){}


    */

    FILE *in;
    FILE *out;
    int n =0;
    int m =0;
    char str[1000];
    char tmp;
    char letter;
    int num[30]={0};
    int answer[30] ={0};

    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);

    letter = str[0];

    for (int i=1;i<n;i++){
        switch(str[i]){
            case 'b': case 'f': case 'p': case 'v':
                num[m] = 1;
                m++;
            break;
            case 'c': case 'g': case 'j': case 'k': case 'q': case 's': case 'x': case 'z':
                num[m] = 2;
                m++;
            break;
            case 'd': case 't':
                num[m] =3;
                m++;
            break;
            case 'l':
                num[m] =4;
                m++;
            break;
            case 'm': case 'n':
                num[m] =5;
                m++;
            break;
            case 'r':
                num[m] =6;
                m++;
        }
    }

    n=1;
    answer[0]=num[0];
    for(int i=1;i<m;i++){
        if(num[i] != answer[n-1]){
            answer[n] = num[i];
            n++;
        }
    }






 out = fopen("output.txt","w");
 fprintf(out,"%c%d%d%d",letter,answer[0],answer[1],answer[2]);
 fclose(out);
    printf("%c",letter);
    for(int i=0;i<n;i++){
        printf("%d",answer[i]);
    }


    return 0;
}
