#include <bits/stdc++.h>
#include <cmath>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n, k;
    cin >> n >> k;

    int time = 0;

    int nFloor, nCeil;

    while (n != 2) {
      nFloor = floor(n / 2);
      nCeil = ceil(n / 2);
      time++;
      if ((nFloor == k) || (nCeil == k)) {
        break;
      }
      n = n / 2;
    }

    if (time == k - 1) {
      cout << -1 << "\n";
    } else {
      cout << time << "\n";
    }
  }
}
