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
    char str[10000];
    char tmp;
    int num =0;
    int check[10000];
    int flag =0;
    int pos =0;
    int rocks =0;
    int watch =0;

    in =fopen("input.txt","r");
    while((tmp = fgetc(in)) != EOF){
        str[n]=tmp;
        n++;
    }
    fclose(in);

    check[0]=3;
    num = 3;
    for(int i=1; i<1000;i++){
        check[i]=check[i-1]+num;
        num++;
    }

    num =0;
    for(int i=0;i<n;i++){
        if (str[i] =='*') num++;
    }

    for(int i=0;i<1000;i++){
        if (check[i] == num) {
            flag++;
            pos =i+2;
        }
    }
    
    
    
    printf("%d",pos);
    out =fopen("output.txt","w");  
        if (flag == 0){
        fprintf(out,"NO");
        fclose(out);
    }
    else{
		flag=1;
		while(pos>0){
			watch =pos;
			while(watch>1){
				fprintf(out," ");
				watch--;
			}
			for(int i=0;i<flag;i++){
				if (i==0) fprintf(out,"*");
				else fprintf(out," *");
			}
			fprintf(out,"\n");
			flag++;
			pos--;
		
		}
	}
/*
    out =fopen("output.txt","w");
    if (flag == 0){
        fprintf(out,"NO");
        fclose(out);
    }
    else{
        num =pos;
        rocks =1;
        for(int j=0; j<num;j++){
            while(pos>0){
                for(int i=1; i<pos;i++){
                    fprintf(out," ");
                }
                for(int i=0; i<rocks;i++){
                    fprintf(out," *");
                }
                fprintf(out,"\n");
                rocks++;
                pos--;
            }
        }
    }
*/
    return 0;
}
