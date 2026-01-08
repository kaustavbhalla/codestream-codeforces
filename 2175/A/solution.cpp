#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    unordered_set<int> s;
    for (int i = 0; i < n; i++) {
      int x;
      cin >> x;
      s.insert(x);
    }

    int k = s.size();
    while (true) {
      if (s.count(k)) {
        cout << k << "\n";
        break;
      }
      k++;
    }
  }
}
