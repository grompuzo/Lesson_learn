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
    char answer[1000];
    char tmp;
    int n=0;

    in = fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        answer[n] =tmp;
        n++;
    }
    fclose(in);

    for (int i=0;i<n;i++){
        tmp =answer[i];
        for(int j =i+1; j<n;j++){
            if (answer[j] == tmp) answer[j] ='0';
        }
    }

    for(int i=0;i<n;i++){
        if (answer[i] == ' ') {answer[i] ='0'; printf(" _%c_YES\n",answer[i]);}
        }

    out =fopen("output.txt","w");
    if (n == 0) fclose(out);
    else{
        for(int i=0; i<n; i++){
			printf("%c",answer[i]);
            if((answer[i] != ' ')&&(answer[i] !='0')) fprintf(out,"%c",answer[i]);
        }
    fclose(out);
    }

    return 0;
}

