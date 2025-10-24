#include<stdio.h>
#include<string.h>
 
int main(){
    char str[1000001];
    scanf("%s",str);
    int size = strlen(str);
    int streak=0;
    int max=0;
    char aux[2];
    aux[0] = str[0];
    
    for(int i=1;i<size;i++){
        if(str[i]==aux[0]){
            streak++;
        }
        else{
            streak=0;
            aux[0] = str[i];
        }
        if(streak>max){
            max = streak;
        }
 
 
    }
    printf("%d\n",max + 1);
 
}