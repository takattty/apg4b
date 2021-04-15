#include <bits/stdc++.h>
using namespace std;
 
int main() {
  for (int i = 0; i < 2; i++) {
    for (int j = 0; j < 2; j++) {
      for (int k = 0; k < 2; k++) {
        cout << "i:" << i << ", j:" << j << ", k:" << k << endl;
      }
    }
  }

  vector<int> A(3), B(3);
  for (int i = 0; i < 3; i++) {
    cin >> A.at(i);
  }
  for (int i = 0; i < 3; i++) {
    cin >> B.at(i);
  }

  // 答えを保持する変数
  bool answer = false;

  // ここにプログラムを追記
  for(int i=0; i<A.size(); i++) {
    for(int j=0; j<B.size(); j++) {
      if (A.at(i) == B.at(j)) {
        answer = true;
      }
    }
  }

  if (answer) {
    cout << "YES" << endl;
  }
  else {
    cout << "NO" << endl;
  }

  // フラグ変数＝finished = true; + break; + if(finished){break;}で多重ループを抜ける事が出来る。これが抜ける時の基本
}