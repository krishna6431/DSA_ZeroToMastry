// All Important Header Files
#include <bits/stdc++.h>
using namespace std;
// CODE WRITTEN BY KRISHNA_6431
int main() {

#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  int n, m;
  cin >> n >> m;
  int arr[n + 1][m + 1];
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= m; j++) {
      cin >> arr[i][j];
    }
  }
  int q;
  cin >> q;
  for (int k = 0; k < q; k++) {
    int x1, y1, x2, y2;
    cin >> x1 >> y1 >> x2 >> y2;

    for (int i = x1; i <= x2; i++) {
      for (int j = y1; j <= y2; j++) {
        if (arr[i][j] == 1) {
          arr[i][j] = 0;
        } else {
          arr[i][j] = 1;
        }
      }
    }

    for (int i = 1; i <= n; i++) {
      for (int j = 1; j <= m; j++) {
        cout << arr[i][j];
      }
      cout << endl;
    }
  }
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j <= n; j++) {
      cout << arr[i][j];
    }
    cout << endl;
  }
  return 0;
}
