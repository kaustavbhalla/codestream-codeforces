#include <bits/stdc++.h>
using namespace std;

void solve() {
  long long n;
  cin >> n;

  int counter = 0;
  for (long long i = 1; i <= n; i++) {
    if (n % i) {
      break;
    }

    counter++;
  }

  cout << counter << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);
  int t;
  cin >> t;
  while (t--) {
    solve();
  }
  return 0;
}
