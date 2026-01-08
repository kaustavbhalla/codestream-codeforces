#include <bits/stdc++.h>
using namespace std;

int main() {
  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;
    int op = 0;
    vector<int> a(n);
    for (int i = 0; i < n; i++) {
      cin >> a[i];
    }

    for (int i = 0; i < a.size(); i++) {
      for (int j = i; j < a.size(); j++) {
        if (a[i] > a[j]) {
          a.erase(a.begin() + i);
          op++;
        }
      }
    }
    cout << op << endl;
  }
}
