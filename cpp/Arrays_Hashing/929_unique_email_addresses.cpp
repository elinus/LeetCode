#include <algorithm>
#include <array>
#include <cmath>
#include <cstring>
#include <deque>
#include <forward_list>
#include <iostream>
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
    int numUniqueEmails(vector<string>& emails) {
        unordered_set<string> email_set;
        for (auto& email : emails) {
            int at_pos = email.find('@');
            string email_before_at = email.substr(0, at_pos);
            int plus_pos = email_before_at.find('+');
            string localname_with_dot = email_before_at.substr(0, plus_pos);
            string localname{};
            for (int i = 0; i < localname_with_dot.length(); i++) {
                if (localname_with_dot[i] != '.') {
                    localname += localname_with_dot[i];
                }
            }

            string domainname = email.substr(at_pos);
            // cout << email << "\t: " << localname + domainname << endl;
            email_set.insert(localname + domainname);
        }
        return email_set.size();
    }
};

int main(int argc, char const* argv[]) {
    Solution sol;
    vector<string> emails1 = {"test.email+alex@leetcode.com",
                              "test.e.mail+bob.cathy@leetcode.com",
                              "testemail+david@lee.tcode.com"};
    cout << sol.numUniqueEmails(emails1) << endl;
    vector<string> emails2 = {"a@leetcode.com", "b@leetcode.com",
                              "c@leetcode.com"};
    cout << sol.numUniqueEmails(emails2) << endl;
    vector<string> emails3 = {"test.email+alex@leetcode.com",
                              "test.email@leetcode.com"};
    cout << sol.numUniqueEmails(emails3) << endl;
    return 0;
}
