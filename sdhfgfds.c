#include<stdio.h>
int main(){
    int n,r;
    scanf("%d",&n);
    while(n!=0){
        r=n%10;
        n=n/10;
    }
    if(r==0 ||r==1){
        printf("Number is binary");
    }
    else{
        printf("Number not binary");
    }
    return 0;
}