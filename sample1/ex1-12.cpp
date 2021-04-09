#include <bits/stdc++.h>
using namespace std;
// 今回は完璧でした！でも今回は1しかでないっていう簡単な設定だったので気を引き締めるように
int main() {
  string S;
  cin >> S;
  int count = 1;
  for(int i=0; i<S.size(); i++) {
    if(S.at(i) == '+') {
      count++; // インクリメント　x += 1 → x++
    } else if(S.at(i) == '-') {
      count--; // デクリメント　x -= 1 → x--
    }
  }
  cout << count << endl;
}