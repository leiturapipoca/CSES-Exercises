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
 int aux = 1<<n;
 
  for(int i=0;i<aux;i++){
    int bit = i^(i>>1);
    string answer;
    for(int j = n - 1;j>=0;j--){
       answer += ((bit >> j) & 1) ? '1' : '0';
    }
    cout<<answer<<"\n";
  }


    return 0;
}