#include <stdio.h>
#include <stdlib.h>
 
int main(){
 
    long long int n;
    scanf("%lli",&n);
    
    long long int tot=0;
    long long int last;
    for(int i=0;i<n;i++){
        int z;
        if(i==0){
            scanf("%d",&last);
        } else{
        scanf("%d",&z);
        if(z<last){
            tot+= last - z;
        } else{
            last = z;
        }
    }
    }
    printf("%lli\n",tot);
}