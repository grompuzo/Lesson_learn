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
    char mix[1000];


    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);
    n--;

    for (int i=0; i<n;i++){
        if(str[i] !=' '){
            mix[m] = str[i];
            m++;
        }
    }

    //if (m%2 != 0) m--;
    for (int i=0;i<m-1;i++){
        tmp = mix[i];
        mix[i] = mix[i+1];
        mix[i+1] =tmp;
        i++;
    }

    out = fopen("output.txt","w");
    m=0;
    for(int i=0; i<n;i++){
        if (str[i] !=' '){
            fprintf(out,"%c",mix[m]);
            m++;
        }
        else fprintf(out," ");
    }
    fclose(out);







    for (int i=0; i<m;i++){
        printf("%c",mix[i]);
    }


    return 0;
}
