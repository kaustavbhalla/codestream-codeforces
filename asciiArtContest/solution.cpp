#include <bits/stdc++.h>
using namespace std;

int main() {
  int g, c, l;
  cin >> g >> c >> l;
  int maxArr = max({g, c, l});
  int minArr = min({g, c, l});

  if (maxArr - minArr > 10) {
    cout << "check again\n";
  } else {
    vector<int> v = {g, c, l};
    sort(v.begin(), v.end());
    cout << "final " << v[1] << "\n";
  }

  return 0;
}
