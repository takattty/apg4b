#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int N, A;
  cin >> N >> A;

  for(int i=0; i < N; i++) {
    string op; 
    int num;
    cin >> op >> num;
    if(op == "+") {
      cout << i+1 << ":" << A + num << endl; // そもそもそれぞれのif文の中でcoutするんじゃなくて、14行目でAに代入してるんだから下でまとめて出力する。
      A += num;
    }
    if(op == "-") {
      cout << i+1 << ":" << A - num << endl; // 処理と出力を分ける。同じことしてるんだったらまとめられるか考える。
      A -= num;
    }
    if(op == "*") {
      cout << i+1 << ":" << A * num << endl;
      A *= num;
    }
    if(op == "/" && num != 0) {// ここも一つにまとめられる。
      cout << i+1 << ":" << A / num << endl;
      A /= num;
    } else {
      cout << "error" << endl;
      break;
    }
  }
}

// int main() {
//   int N, A;
//   cin >> N >> A;

//   for(int i=0; i<N; i++) {
//     string op;
//     int num;
//     cin >> op >> num;

//     if(op=="+") {
//       A += num;
//     } else if(op=="-") {
//       A -= num;
//     } else if(op=="*") {
//       A *= num;
//     } else if(op=="/" && num!=0) {
//       A /= num;
//     } else {
//       cout << "error" << endl;
//       break;
//     }

//     cout << i+1 << ":" << A << endl;
//   }
// }