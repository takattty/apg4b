#include <bits/stdc++.h>
using namespace std;

int main() {
  map<string, int> score;  // 名前→成績
  score["Alice"] = 100;
  score["Bob"] = 89;
  score["Charlie"] = 95;

  cout << score.at("Alice") << endl;   // Aliceの成績
  cout << score.at("Bob") << endl;     // Bobの成績
  cout << score.at("Charlie") << endl; // Daveの成績

  // score.erase("Bob"); // 削除操作
  score.at("Alice"); // アクセスにはatを使ってあげる

  for(pair<string, int> p : score) {
    string key = p.first;
    int value = p.second;
    cout << key << ": " << value << endl;
  }

  for(auto p : score) {
    auto key = p.first;
    auto value = p.second;
    cout << key << ": " << value << endl;
  }

  queue<int> q;
  q.push(10);
  q.push(3);
  q.push(6);
  q.push(1);
 
  // 空でない間繰り返す
  while (!q.empty()) {
    cout << q.front() << endl;  // 先頭の値を出力
    q.pop();  // 先頭の値を削除
  }

  priority_queue<int> pq;
  // priority_queue<int, vector<int>, greater<int>> pq;// これは小さい順に値を取り出せる

  pq.push(10);
  pq.push(3);
  pq.push(6);
  pq.push(1);

  while (!pq.empty()) {
    cout << pq.top() << endl;  // 最大の値を出力
    pq.pop();  // 最大の値を削除
  }
}
