#include<bits/stdc++.h>
#include<vector>
#include <list>
#include<stack>
#include<algorithm>
#include <iostream>
#include <string>
#include <unordered_map>
#include <queue>
typedef long long ll;

using namespace std;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);

    unsigned long long int n;
    cin>>n;
    while(n--){
        unsigned long long int x,y;
        cin>>x>>y;
        
        int aux = max(x,y);
        if(aux%2==0){
            if(x==aux){
                cout<<x*x - y + 1<<"\n";
            } else{
                cout<<(y - 1)*(y - 1) + x<<"\n";
            }
        }  else{
            if(x==aux){
                cout<<(x - 1)*(x - 1) + y<<"\n";
            } else{
                cout<<y*y + 1 - x<<"\n";
            }
        }
    }

    return 0;
}