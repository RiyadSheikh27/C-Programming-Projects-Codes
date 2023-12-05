#include<stdio.h>
#include<math.h>
void CheckPrime(int n)

{
   int flag = 0;
    for(int i =2; i<sqrt(n);i++)
        if(n%i==0){
            flag=1;
            break;
        }


if(flag = 1)
    printf("%d not prime",n);
else{
    printf("Prime");
}
}
int main(){
CheckPrime(8);
return 0;
}
