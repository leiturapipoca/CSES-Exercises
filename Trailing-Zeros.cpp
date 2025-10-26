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
    long long int zero=0;
    int aux  = 5;
    while(n/aux>=1){
        zero+=n/aux;
        aux*=5; 
    }
   cout<<zero;
    return 0;
}