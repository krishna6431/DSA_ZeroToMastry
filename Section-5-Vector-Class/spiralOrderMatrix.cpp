// All Rights Reserved &copy 2021
// Code is Written by Krishna
// Data Structure and Algorithms Series 2021

#include <iostream>
#include <time.h>
using namespace std;

int main() {
  clock_t t_start = clock();
#ifndef ONLINE_JUDGE
  freopen("../input.txt", "r", stdin);
  freopen("../output.txt", "w", stdout);
#endif
  int n, m;
  cout << "Enter Row and Coloumn: " << endl;
  cin >> n >> m;
  int arr[n][m];
  cout << "Enter Matrix Element: " << endl;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> arr[i][j];
    }
  }
  int sr = 0, er = n - 1, sc = 0, ec = m - 1;
  int count = 0;
  while (sr <= er && sc <= ec) {
    for (int i = sc; i <= ec; i++) {
      cout << arr[sr][i] << " ";
      count++;
    }
    sr++;
    if (count == n * m)
      break;

    for (int i = sr; i <= er; i++) {
      cout << arr[i][ec] << " ";
      count++;
    }
    ec--;
    if (count == n * m)
      break;

    for (int i = ec; i >= sc; i--) {
      cout << arr[er][i] << " ";
      count++;
    }
    er--;
    if (count == n * m)
      break;

    for (int i = er; i >= sr; i--) {
      cout << arr[i][sc] << " ";
      count++;
    }
    sc++;
    if (count == n * m)
      break;
  }
  cout << endl;
  printf("Execution Time: %.2f Seconds\n",
         (double)(clock() - t_start) / CLOCKS_PER_SEC);
  return 0;
}
