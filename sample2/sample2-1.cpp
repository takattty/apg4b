#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int a;
  int answer = 0;
  cin >> a;
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }

  for( int c : data) {
    if (c == a) {
      answer++;
    }
  }
 
  cout << answer << endl;
  // ここにプログラムを追記
  

  // for(int i=0; i<data.size(); i++) {
  //   if(data.at(i) == a) {
  //     answer++;
  //   }
  // }

  // cout << answer << endl;

  // 範囲for文＝配列の要素に対する処理を簡潔に書くための方法
  vector<int> b = {1, 3, 2, 5};
  for( int x : b) {
    cout << x << endl;
  }

  // 配列と文字列型はコンテナと言われる。
  string str = "hello";
  for (char c : str) {
    if (c == 'l') {
      c = 'L';
    }
    cout << c;
  }
  cout << endl;
}