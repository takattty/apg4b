#include <bits/stdc++.h>
using namespace std;

int main() {
  string str = "Hello";
 
  char c = str.at(0); // char型の値が得られる
 
  cout << c << endl; // H
  // 文字列の一部を書き換えるときや比較をするときはchar型を使う必要があります。
  str.at(0) = 'M'; // char型の'M'
  cout << str << endl; // Mello
 
  if (str.at(1) == 'e') {
    cout << "AtCoder" << endl;
  }
  string s;
  getline(cin, s); // これで行単位で入力を受け取る
}