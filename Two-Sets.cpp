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

    long long int n;
    cin>>n;

    long long int divide = (n*(n + 1))/2;
    if(divide%2!=0){
        cout<<"NO";
        return 0;
    }

    cout<<"YES\n";
    long long int rest = divide/2;
    vector <int> aux1;
    vector <bool> aux (n + 1,true);
    for(int i=n;i>=1;i--){
    if(rest>=i){
        
        aux1.push_back(i);
        rest-= i;
        aux[i] = false;
    }
    }

    cout<<aux1.size()<<"\n";
   for(int i=0;i<aux1.size();i++){
    cout<<aux1[i]<<" ";
   }
    cout<<"\n";
   cout<<n - aux1.size()<<"\n";
    for(int i=1;i<=n;i++){
        if(aux[i]==true){
            cout<<i<<" ";
        }
    }

    return 0;

}