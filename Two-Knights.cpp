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
 
   
    for(unsigned long long int i = 1;i<=n;i++){
        unsigned long long int aux = (((i*i)*(i*i-1))/2) - (4 *((i - 1)*(i - 2)));
        cout<<aux<<"\n";

    }
    return 0;
}