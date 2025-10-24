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

    int n;
    cin>>n;

    if(n==3 || n==2){
        cout<<"NO SOLUTION";
    }
    else{
        int b = n;
        int a = n - 1;
        while(a>0){
            cout<<a<<" ";
            a-=2;
        }
        while(b>0){
            cout<<b<<" ";
            b-=2;
        }
    }

    return 0;
}