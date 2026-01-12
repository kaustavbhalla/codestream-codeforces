#include <bits/stdc++.h>
using namespace std;

int main() {
  ios::sync_with_stdio(false);
  cin.tie(NULL);

  int t;
  cin >> t;

  while (t--) {
    int n;
    cin >> n;

    string s;
    cin >> s;

    char *ptr1 = &(s[n - 1]);
    char *ptr2 = &(s[0]);

    if (*ptr1 == *ptr2) {
      cout << s.size() << "\n";
    }

    while (*ptr1 != *ptr2) {
      ptr1--;
      ptr2++;
    }

    if (ptr1 == ptr2) {
      cout << 0 << "\n";
    }

    int count = 0;

    for (char *i = ptr1; i != ptr2; i++) {
      count++;
    }

    cout << count << "\n";
  }
}
