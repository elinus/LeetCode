#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <deque>
#include <forward_list>
#include <iostream>
#include <iterator>
#include <list>
#include <map>
#include <queue>
#include <set>
#include <sstream>
#include <stack>
#include <string>
#include <unordered_map>
#include <unordered_set>
#include <vector>

using namespace std;

class Solution {
 public:
  int minimumRounds(vector<int>& tasks) {
    if (tasks.empty() || tasks.size() < 2) return -1;
    sort(begin(tasks), end(tasks));
    // copy(tasks.begin(), tasks.end(), std::ostream_iterator<int>(cout, " "));
    // cout << "\n";

    vector<int> vec;
    int task_id = tasks[0];
    int task_count = 1;
    for (int i = 1; i < tasks.size(); i++) {
      if (tasks[i] != task_id) {
        vec.push_back(task_count);
        task_id = tasks[i];
        task_count = 0;
      }
      task_count++;
    }
    vec.push_back(task_count);

    // copy(vec.begin(), vec.end(), std::ostream_iterator<int>(cout, " "));
    // cout << "\n";

    for (int i = 0; i < vec.size(); i++) {
      if (vec[i] < 2) return -1;
    }

    int round = 0;
    for (int i = 0; i < vec.size(); i++) {
      do {
        vec[i] -= 3;
        round++;
      } while (vec[i] > 0);
    }
    return round;
  }
};

int main(int argc, char const* argv[]) {
  Solution sol;
  vector<int> tasks{2, 2, 3, 3, 2, 4, 4, 4, 4, 4};
  sol.minimumRounds(tasks);
  return 0;
}
