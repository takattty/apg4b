#include <bits/stdc++.h>
using namespace std;

int main() {
  int N;
  cin >> N;
  vector<pair<int, int>> result;

  for(int i=0; i<N; i++) {
    int a, b;
    cin >> a >> b;
    result.push_back(make_pair(b, a));
  }
  sort(result.begin(), result.end());

  for (pair<int, int> t : result) {
    int x, y;
    tie(x, y) = t;
    cout << y << " " << x << endl;
  }
}