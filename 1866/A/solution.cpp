#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;
  double minVal = 1.0e5;
  int x;
  while (n--) {
    cin >> x;
    if (x < 0) {
      x = -x;
    }
    minVal = min((double)x, minVal);
  }

  cout << minVal << "\n";
}
