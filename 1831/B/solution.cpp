#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  unordered_map<int, pair<int, int>> mpp;
  vector<int> a(n);
  vector<int> b(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  int currFreq = 1;
  mpp[a[0]] = {1, 0};
  for (int i = 1; i < n; i++) {
    if (a[i - 1] == a[i]) {
      currFreq++;
    } else {
      currFreq = 1;
    }
    mpp[a[i]].first = max(mpp[a[i]].first, currFreq);
  }

  currFreq = 1;
  mpp[b[0]].second = 1;
  for (int i = 1; i < n; i++) {
    if (b[i - 1] == b[i]) {
      currFreq++;
    } else {
      currFreq = 1;
    }

    mpp[b[i]].second = max(mpp[b[i]].second, currFreq);
  }

  int maxi = 0;

  for (auto it : mpp) {
    // cout << it.first << " : " << it.second.first << " , " << it.second.second
    //    << "\n";
    maxi = max(maxi, it.second.second + it.second.first);
  }

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

  return 0;
}
