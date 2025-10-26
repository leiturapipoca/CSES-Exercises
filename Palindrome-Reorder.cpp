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
   int qtd[26] = {0};
   string sla;

   cin>>sla;

    int aux=0;
    map<char,int> mapping;
   for(int i=0;i<sla.size();i++){
    if(mapping.count(sla[i])==0){
        mapping[sla[i]]=1;
    } else{
        mapping[sla[i]]++;
    }

   }
   char solo;
   for(char c = 'A';c<='Z';c++){
    if(mapping.count(c) && mapping[c]%2!=0){
        aux++;
        solo = c;
    }
   }

   if(aux>1){
    cout<<"NO SOLUTION";
    return 0;
   }

   list <char> resp;
   if(solo){
     resp.push_back(solo);
     mapping[solo]--;
   }
   

    int indice = 0;
    for(char c = 'A';c<='Z';c++){
    while(mapping[c]!=0){
        resp.push_back(c);
        resp.push_front(c);
        mapping[c]-=2;
    }

    } 
    while(resp.empty()==0){
       
        cout<<resp.front();
        resp.pop_front();
    }


    return 0;
}