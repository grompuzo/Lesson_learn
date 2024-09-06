#include <stdio.h>
#include <unistd.h>

void finder(int *a){

    int min_one = a[0];
    int min_two = a[1];
    int answer_one = 0;
    int answer_two = 1;



    for(int i =2; i<30; i++){
        if (a[i] < min_one){
            min_one = a[i];
            answer_one =i;
        }
    }
    
    for(int i =2; i<30; i++){
		if((a[i]<min_two)&&(answer_one!=i)){
			min_two = a[i];
			answer_two = i;
        }		
	}
        
        
        
        
    
    
    

    if (answer_two>answer_one) printf("%d %d", answer_one, answer_two);
	else printf("%d %d", answer_two, answer_one);

}




int main(void){

    int a[30]={0};// 1 2 3 4 5 6 7 8 9 10 11 12 13 14 15 16 17 18 19 20 21 22 23 24 25 26 27 28 29 30

    for (int i=0; i<30; i++){
        scanf("%d",&a[i]);
    }

    finder(a);

    return 0;
}

