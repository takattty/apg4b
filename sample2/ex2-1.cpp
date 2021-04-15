#include <bits/stdc++.h>
using namespace std;
 
int main() {
  vector<int> data(5);
  for (int i = 0; i < 5; i++) {
    cin >> data.at(i);
  }
 
  // dataの中で隣り合う等しい要素が存在するなら"YES"を出力し、そうでなければ"NO"を出力する
  // ここにプログラムを追記
  // if(data.at(0) == data.at(1) || data.at(1) == data.at(2) || data.at(2) == data.at(3) || data.at(3) == data.at(4)) {
  //   cout << "YES" << endl;
  // } else {
  //   cout << "NO" << endl;
  // }

  string result;
  for(int i=0; i<data.size()-1; i++) {
    if(data.at(i) == data.at(i+1)) {
      result = "YES";
      break;
    } else {
      result = "NO";
    }
  }
  cout << result << endl;

  //模範回答
  bool result = false;
  for(int i=0; i<data.size(); i++) {
    if (data.at(i) == data.at(i + 1)) {
      result = true;
    }
  }
  if(result == "true") {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }

  // 合わせると。これが一番コードも実行時間もメモリ消費もスコアが良かった！！！嬉しい！！！
  string result = "NO";
  for(int i=0; i<data.size()-1; i++) {
    if(data.at(i) == data.at(i+1)) {
      result = "YES";
    }
  }
  cout << result << endl;
}