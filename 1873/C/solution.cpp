#include <bits/stdc++.h>
using namespace std;

void solve() {
  int score = 0;

  for (int iA = 1; iA <= 10; iA++) {
    for (int jA = 1; jA <= 10; jA++) {
      char s;
      cin >> s;

      if (s == 'X') {
        if (jA == 1 || jA == 10) {
          score += 1;
        } else if (jA == 2 || jA == 9) {
          if (iA == 1 || iA == 10) {
            score += 1;
          } else {
            score += 2;
          }
        } else if (jA == 3 || jA == 8) {
          if ((iA <= 8) && (iA >= 3)) {
            score += 3;
          } else if (iA == 1 || iA == 10) {
            score += 1;
          } else if (iA == 2 || iA == 9) {
            score += 2;
          }
        } else if (jA == 4 || jA == 7) {
          if (iA <= 7 && iA >= 4) {
            score += 4;
          } else if (iA == 1 || iA == 10) {
            score += 1;
          } else if (iA == 2 || iA == 9) {
            score += 2;
          } else if (iA == 3 || iA == 8) {
            score += 3;
          }
        } else if (jA == 5 || jA == 6) {
          if (iA == 5 || iA == 6) {
            score += 5;
          } else if (iA == 1 || iA == 10) {
            score += 1;
          } else if (iA == 2 || iA == 9) {
            score += 2;
          } else if (iA == 3 || iA == 8) {
            score += 3;
          } else if (iA == 4 || iA == 7) {
            score += 4;
          }
        }
      }
    }
  }

  cout << score << "\n";
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
