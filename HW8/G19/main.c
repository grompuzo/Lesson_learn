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
    long int n =0;
    long int m =0;
    int size =0;
    int j =0;
    int flag =0;
    int check =0;
    char str[10000];
    char tmp;
    long int mix[140]={0};
    char answer[10000];

	printf("%d\n",'j');
		printf("%d\n",'k');
    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);
/*
    printf("%c\n",str[3]);
    printf("%d\n",100-'a');
    printf("%c",str[100-'a']);
*/

    for(int i=0; i<n;i++){
        check = str[i];
        mix[check]++;
    }

    for(int i=97;i<140;i++){
        if(mix[i]> 1){
                if (mix[i]%2 == 0) m+=mix[i];
                else m=m+mix[i]-1;
        }
    }

    size=m;
     for(int i=97;i<140;i++){
        if(mix[i] > 1){
            while(mix[i]>1){
                answer[j] =i;
                answer[m] =i;
                j++;
                m--;
                mix[i]=mix[i]-2;
            }
        }
    }

    for(int i=97;i<140;i++){

        if((mix[i]%2 !=0)&&(flag == 0)){
            flag++;
            answer[j] = i;
        }


    }



    out = fopen("output.txt","w+");
    for(int i=0;i<size+1;i++){
        printf("%c",answer[i]);
        fprintf(out, "%c",answer[i]);
    }
    fclose(out);

    return 0;
}
