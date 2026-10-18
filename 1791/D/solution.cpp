#include <bits/stdc++.h>
using namespace std;
#define int long long
void solve() {
  int n;
  cin >> n;

  string s;
  cin >> s;

  unordered_set<char> st;
  vector<int> prefixUnique(n + 1, 0);
  vector<int> suffixUnique(n + 2, 0);

  for (int i = 1; i <= n; i++) {
    st.insert(s[i - 1]);
    prefixUnique[i] = st.size();
  }

  st.clear();

  for (int i = n; i >= 1; i--) {
    st.insert(s[i - 1]);
    suffixUnique[i] = st.size();
  }

  int ans = 0;

  for (int i = 1; i < n; i++) {
    ans = max(ans, prefixUnique[i] + suffixUnique[i + 1]);
  }

  cout << ans << "\n";
}

signed main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}
