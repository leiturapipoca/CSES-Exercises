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
    long long int a,b;
    cin>>a>>b;
    if((a + b)%3==0 && (b<=a*2 && a<=b*2)){
        cout<<"YES\n";
    } else{
        cout<<"NO\n";
    }
   
   }
    return 0;
}