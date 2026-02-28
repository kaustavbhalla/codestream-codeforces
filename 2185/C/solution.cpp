#include <bits/stdc++.h>
using namespace std;

void solve() {
  int n;
  cin >> n;

  vector<int> arr(n);
  unordered_map<int, int> map(n);

  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }

  int mini = min(*arr.begin(), *arr.end());

  for (int i = 0; i < n; i++) {
    if (mini >= 0) {
      arr[i] += mini;
      map[arr[i]]++;
    } else if (mini < 0) {
      arr[i] += (-mini);
      map[arr[i]]++;
    }
  }

  for (int i = 0; i < n; i++) {
    cout << "Element: " << i << " Occurence: " << map[i] << "\n";
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
