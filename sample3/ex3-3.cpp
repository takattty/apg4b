#include <bits/stdc++.h>
using namespace std;

int main(){

  map<int,int> res;
  int N, A, max=0, maxnum=-1;

  cin >> N;
  for(int i=0; i<N; i++){
    cin >> A;
    if(res.count(A)){
      res.at(A)++;
    }else{
      res[A] = 1;
    }
  }

  for(auto p : res){
    if(max < p.second){
      max = p.second;
      maxnum = p.first;
    }
  }

  cout << maxnum << " " << max << endl;
}