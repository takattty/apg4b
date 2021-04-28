#include <bits/stdc++.h>
using namespace std;

int main() {
  int N, A;
  cin >> N;
  map<int, int> res;

  for(int i=0; i<N; i++) {
    cin >> A;
    if(res.count(A)) {
      res[A] += 1;
    } else {
      res[A] = 1;
    }
  }

  size_t count = 1;
  for (auto p : res) {
    auto k = p.first;
    auto v = p.second;
    count++;
    if(count < res.size()) {
      cout << k << " => " << v << endl;
    }
  }

}