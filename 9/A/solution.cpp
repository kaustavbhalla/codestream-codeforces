#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int y, w;
  cin >> y >> w;

  int favourable = 0;

  if (y >= w) {
    favourable = (6 - y) + 1;
  } else if (w > y) {
    favourable = (6 - w) + 1;
  }

  switch (favourable) {
  case 0:
    cout << "0/1" << "\n";
    break;
  case 1:
    cout << "1/6" << "\n";
    break;
  case 2:
    cout << "1/3" << "\n";
    break;
  case 3:
    cout << "1/2" << "\n";
    break;
  case 4:
    cout << "2/3" << "\n";
    break;
  case 5:
    cout << "5/6" << "\n";
    break;
  case 6:
    cout << "1/1" << "\n";
    break;
  }
}
