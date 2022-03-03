#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
  double average(vector<int> &salary) {
    int min_ = INT_MAX, max_ = INT_MIN;
    double sum = 0;
    for (int i = 0; i < salary.size(); i++) {
      sum += salary[i];
      if (salary[i] < min_)
        min_ = salary[i];
      if (salary[i] > max_)
        max_ = salary[i];
    }
    sum -= (min_ + max_);
    return sum / (salary.size() - 2);
  }
};