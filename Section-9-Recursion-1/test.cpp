// All Important Header Files
#include <bits/stdc++.h>
using namespace std;
// class for storing participant data
class leaderboard {
public:
  string name;
  int marks;
  int time;
};
// comparator function for custom sorting
bool comparator(leaderboard a, leaderboard b) {
  if (a.marks != b.marks) {
    return a.marks > b.marks; // return true if a marks > b marks
  } else if (a.time != b.time) {
    return a.time < b.time; // return true if a time < b marks
  } else {
    return a.name < b.name; // return true for lexicographic lesser
  }
}
// CODE WRITTEN BY KRISHNA_6431
int main() {

  // #ifndef ONLINE_JUDGE
  //   freopen("../input.txt", "r", stdin);
  //   freopen("../output.txt", "w", stdout);
  // #endif
  int n;
  cin >> n;
  vector<leaderboard> res;
  pair<int, int> temp;
  unordered_map<string, pair<int, int>> sc; // map for storing frequency

  // taking inputs
  for (int i = 0; i < n; i++) {
    string name;
    int time;
    cin >> name >> time;
    unordered_map<string, pair<int, int>>::iterator itr;
    itr = sc.find(name);
    if (itr == sc.end()) {
      sc[name] = make_pair(100, time);
    } else {
      temp = itr->second;
      temp.first = temp.first + 100;
      temp.second = temp.second + time;
      sc[name] = temp;
    }
  }

  // stoing class participants data
  unordered_map<string, pair<int, int>>::iterator itr1;
  for (itr1 = sc.begin(); itr1 != sc.end(); itr1++) {
    leaderboard pt;
    pt.name = itr1->first;
    pt.marks = (itr1->second).first;
    pt.time = (itr1->second).second;
    res.push_back(pt);
  }
  // custom sorting
  sort(res.begin(), res.end(), comparator);
  int rank = 1;

  // printing output
  for (auto &x : res) {
    cout << rank << " " << x.name << endl;
    rank++;
  }

  return 0;
}
