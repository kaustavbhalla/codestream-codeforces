#include <bits/stdc++.h>
using namespace std;

int main() {
  int n, k;
  cin >> n >> k;
  vector<int> a(n);

  int advancers = 0;

  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  int valAtK = a[k - 1];

  for (auto i : a) {
    if (i >= valAtK && i > 0) {
      advancers++;
    }
  }

  cout << advancers << "\n";
}
