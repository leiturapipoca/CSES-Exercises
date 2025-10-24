#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    long long int n;
    scanf("%lli",&n);
 
    while(n!=1){
 
        printf("%lli ",n);
        if(n%2==0){
            n = n/2;
        } else{
            n = n*3 +1;
        }
    }
    
    printf("1\n");
    return 0;
}
