#include <bits/stdc++.h>
using namespace std;

int main() {
  // bitset<8> a("00011011");
  // bitset<8> b("00110101");

  // auto c = a & b;
  // cout << "1: " << c << endl;         // 1: 00010001
  // cout << "2: " << (c << 1) << endl;  // 2: 00100010
  // cout << "3: " << (c << 2) << endl;  // 3: 01000100
  // cout << "4: " << (c << 3) << endl;  // 4: 10001000
  // cout << "5: " << (c << 4) << endl;  // 5: 00010000

  // c <<= 4;
  // c ^= bitset<8>("11010000"); // XOR演算の複合代入演算子
  // cout << "6: " << c << endl; // 6: 11000000

  // bitset<4> S;
  // S.set(0, 1);  // 0番目のビットを1にする
  // cout << S << endl;
 
  // if (S.test(0)) {
  //   cout << "4th bit is 1" << endl;
  // } else {
  //   cout << "4th bit is 0" << endl;
  // }

  // for (int tmp = 0; tmp < (1 << 4); tmp++) {
  //   bitset<4> s(tmp);
  //   // ビット列を出力
  //   cout << s << endl;
  // }

  int n, k;
  cin >> n >> k;
  vector<int> result(n);
  for(int i=0; i<n; i++) {
    cin >> result.at(i);
  }

  bool ans = false;

  for(int tmp=0; tmp < (1 << 20); tmp++) {
    bitset<20> s(tmp);

    int sum = 0;
    for(int i=0; i<n; i++) {
      if(s.test(i)) {
        sum += result.at(i);
      }
    }
    if(sum == k) {
      ans = true;
    }
  }

  if(ans) {
    cout << "YES" << endl;
  } else {
    cout << "NO" << endl;
  }
}
