#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n, k;
  cin >> n >> k;

  vector<int> s;

  int a;

  for (int i = 0; i < n; i++) {
    cin >> a;

    if (a == 5)
      continue;

    if ((a + k) > 5) {
      continue;
    } else {
      s.emplace_back(a);
    }
  }

  if (s.size() < 3) {
    cout << 0 << "\n";
  } else if (s.size() == 3) {
    cout << 1 << "\n";
  } else {
    cout << s.size() / 3 << "\n";
  }
}
