#include <bits/stdc++.h>
using namespace std;

int maxi = 0;
void recur(vector<int> &p, vector<bool> &chair, int i, int seated) {

  if (i >= p.size() || chair[i] == true) {
    if (seated > maxi) {
      maxi = seated;
    }

    return;
  }

  chair[p[i] - 1] = true;
  recur(p, chair, i + 1, seated + 1);
  chair[p[i] - 1] = false;
  recur(p, chair, i + 1, seated);
}

void solve() {
  int n;
  cin >> n;

  vector<int> p(n);

  for (int i = 0; i < n; i++) {
    cin >> p[i];
  }

  vector<bool> chair(n, false);

  recur(p, chair, 0, 0);

  cout << maxi << "\n";
}

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }
}
