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
int fato(int vetor[],int n){

    if(n==1){
        vetor[1] = 1;
        return 1;
    }
    vetor[n] = n*fato(vetor,n - 1);
    return vetor[n];
}


int main(){
    std::ios::sync_with_stdio(false);
    cin.tie(NULL);
    string palavra;
    cin>>palavra;
    int n = palavra.size();

    int vetor[n + 1];
    fato(vetor,n);
    map<char,int> mapping;
    for(int i=0;i<n;i++){
        if(mapping.count(palavra[i])){
            mapping[palavra[i]]++;
        }
        else{
            mapping[palavra[i]]=1;
        }
    }
    int aux = vetor[n];
    for(auto p: mapping){
        aux = aux/vetor[p.second];
    }
    cout<<aux<<"\n";
 
    sort(palavra.begin(),palavra.end());
    vector<string> permus;
    do{
        permus.push_back(palavra);

    }while(next_permutation(palavra.begin(),palavra.end()));


    for(auto p: permus){
        cout<<p<<"\n";

    }
    return 0;
}