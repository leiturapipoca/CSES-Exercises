#include <stdio.h>
#include <string.h>
 
int main(){
    long long int n;
    scanf("%lli",&n);
    
    long long int sum = (n + 1)*n/2;
    long long int a=0;
 
    for(long long int i=0;i<n-1;i++){
        long long int r;
 
        scanf("%lli",&r);
        a+=r;
    }
    long long int resp = sum - a;
    printf("%lli\n", resp);
 
    return 0;
}