#include <unordered_set>
#include <vector>

using namespace std;

class Solution
{
public:
    bool containsDuplicate(vector<int> &nums)
    {
        unordered_set<int> us;
        for (int i = 0; i < nums.size(); i++)
        {
            if (!us.insert(nums[i]).second)
                return true;
        }
        return false;
    }
};
