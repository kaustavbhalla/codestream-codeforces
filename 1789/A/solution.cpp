#include <bits/stdc++.h>
using namespace std;

void conquer(vector<int> &a, int low, int mid, int high) {}

void divide(vector<int> &a, int low, int high) {
  int mid = (high + low) / 2;

  divide(a, low, mid);
  divide(a, mid + 1, low);
}

void solve() {
  int n;
  cin >> n;

  vector<int> a(n);

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
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
