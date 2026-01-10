#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int n;
  cin >> n;

  int x, y;
  cin >> x >> y;

  if ((x == 1) && (y == 1)) {
    cout << "White" << "\n";
  } else if ((x == n) && (y == n)) {
    cout << "Black" << "\n";
  } else if ((abs(x - 1) == abs(n - y)) && (abs(y - 1) == abs(n - x))) {
    cout << "White" << "\n";
  } else if ((abs(x - 1) == abs(n - x)) && (abs(y - 1) > abs(n - y))) {
    cout << "Black" << "\n";
  }
}
