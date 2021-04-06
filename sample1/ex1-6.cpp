#include <bits/stdc++.h>
using namespace std;
 
int main() {
  int A, B;
  string op;
  cin >> A >> op >> B;
 
  if (op == "?" || op == "=" || op == "!") {
    cout << "error" << endl;
  } else if(op == "+") {
    cout << A + B << endl;
  } else if(op == "-") {
    cout << A - B << endl;
  } else if(op == "*") {
    cout << A * B << endl;
  } else if(op == "/") {
    if(B != 0) {
      cout << A / B << endl;
    } else {
      cout << "error" << endl;
    }
  }
}

// 参考コード
// #include <bits/stdc++.h>
// using namespace std;
 
// int main() {
//   int A, B;
//   string op;
//   cin >> A >> op >> B;
 
//   if (op == "+") {
//     cout << A + B << endl;
//   }
//   else if (op == "-") {
//     cout << A - B << endl;
//   }
//   else if (op == "*") {
//     cout << A * B << endl;
//   }
//   else if (op == "/" && B != 0) {
//     cout << A / B << endl;
//   }
//   else {
//     cout << "error" << endl;
//   }
// }

// 参考コードにもあるけど、ある処理をまとめるの下手だよなぁ。今回で言うとerrorを出力する部分。
// 参考のだと、最後に全部まとめてるけど俺のは記述量も多い。（最初の条件の部分）
// あそこを上手く書かない様に処理を分ける必要があるね。ここもっと意識して強化していこう