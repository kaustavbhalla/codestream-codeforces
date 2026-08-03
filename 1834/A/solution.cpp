#include <bits/stdc++.h>
using namespace std;

void solve() {
  // No. of -1s should be even
  // No. of 1s should be atleast one more than -1s

  int n;
  cin >> n;

  int countOfneg = 0;
  int countOfPos = 0;
  while (n--) {
    int x;
    cin >> x;

    if (x < 0) {
      countOfneg++;
    } else {
      countOfPos++;
    }
  }

  int operations = 0;

  while (countOfneg > countOfPos) {
    countOfneg--;
    countOfPos++;
    operations++;
  }

  if (countOfneg % 2 != 0) {
    operations++;
  }

  cout << operations << "\n";
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
