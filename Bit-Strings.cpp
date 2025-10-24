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
    unsigned long long int  n;
    cin>>n;
    unsigned long long int resp = 1;
    for(int i=0;i<n;i++){
        resp*=2;
        resp = resp%1000000007;
    }
    cout<<resp;
    return 0;
}