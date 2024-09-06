#include <stdio.h>
#include <unistd.h>

int count_between(int from, int to, int size, int a[]){

    int answer = 0;
    int tmp = 0;

    if (from>to){
        tmp = from;
        from = to;
        to = tmp;
    }

/*
	from--;
	to--;
    for (int i=from; i<to+1; i++){
        answer +=a[i];
    }
*/

	for(int i=0; i<size; i++){
		
		if((a[i]>=from)&&(a[i]<=to)) answer++;
		
		
		}



    return answer;
}


/*
int main(void){

    int a[10] ={1,2,3,4,5,6,7,8,9,10};



    printf("%d",sum_between_ab(4,6,10,a));


    return 0;
}
*/
