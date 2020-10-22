#include <stdio.h>
#include <stdlib.h>

unsigned factorial(unsigned num) {
    int res = 0;
    int count = 0;
    if (num == 0) {
        res=1;
    } else {
        res=1;
        for(count=num; count>0; count--) {
            res*=count;
        }
    }
    return res;
}

int main(){
    int n = 0;
    int cols = 0;
    int count = 0;
    int pos = 0;
    int f = 0;
    int c = 0;
    int calc = 0;

    printf("n: ");
    scanf("%d",&n);
	n+=1;
    for(count=n-1; count>=0; count--) {
        cols+=count;
    }
    int triangle[cols];
    for(f=0; f<n-1; f++) {
        for(c=0; c<=f; c++) {
           calc = factorial(f)/(factorial(c)*factorial(f-c));
           triangle[pos]=calc;
           pos++;
        }
    }
    pos=0;
    for(f=0;f<n-1;f++) {
        printf("\n%*c",(int) (cols/2)-f,' ');
        for(c=0;c<=f;c++) {
            printf("%d ",triangle[pos]);
            pos++;
        }
    }
	printf("\n");
    return 0;
}
