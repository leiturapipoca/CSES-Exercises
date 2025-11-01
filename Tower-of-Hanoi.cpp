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

void resp(int n,int left,int mid,int right){
if(n==1){
    cout<<left<<" "<<right<<"\n";
    return ;
}
resp(n - 1,left,right,mid);
cout<<left<<" "<<right<<"\n";
resp(n - 1,mid,left,right);
}
int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int left = 1,mid = 2, right = 3;
    cout<<pow(2,n) - 1<<"\n";
    resp(n,left,mid,right);


    return 0;
}