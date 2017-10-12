#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int newN(int N){
int x,y;
while((2^x)>N)
{
    if((2^x)>=N)
        y=2^(x-1);
    N=N-y;
    x++;
}
return N;
}

int newn(int N){
N=N-(N/2);
return N;
}

int main()
{
    int i=0,N,x=0;
    printf("\n Enter any random Number :: ");
    scanf("%d",&N);
    while(i>0){
        while(N!=1){
        if((2^x)==N)
            newN(N);
        else{
            newn(N);
        }
        x++;
        }
    }
    i++;
    if(i%2==0)
        printf("Rishav");
    else{
        printf("Ravi");
    }
    return 0;

}
