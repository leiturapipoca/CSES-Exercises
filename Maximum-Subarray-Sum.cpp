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


long long int menos = -1e18;

int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
   
    long long int n;
    cin>>n;
    vector <long long int> vetor;
    for(int i=0;i<n;i++){
        long long int aux;
        cin>>aux;
        vetor.push_back(aux);
    }
    long long int max_atual = vetor[0];
    long long int max_global = vetor[0];



    for(int i=1;i<n;i++){
        max_atual = max(vetor[i],max_atual + vetor[i]);
        max_global = max(max_atual,max_global);
    }
cout<<max_global;

    return 0;
}
