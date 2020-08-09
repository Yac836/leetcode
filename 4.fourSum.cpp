
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

vector<vector<int>> fourSum(vector<int> &nums, int target) {
    vector<vector<int>> res;
    if (nums.size() < 4)
        return res;
    sort(nums.begin(), nums.end());
    int i, j, k, m;
    int len = nums.size();
    for (i = 0; i < len - 3;) {
        for (j = i + 1; j < len - 2;) {
            k = j + 1;
            m = len - 1;
            while (k < m) {
                int sum = nums[i] + nums[j] + nums[k] + nums[m];
                if (sum == target) {
                    res.push_back({nums[i], nums[j], nums[k], nums[m]});
                    m--;
                    while (k < m && nums[m] == nums[m + 1]) {
                        m--;
                    }
                    k++;
                    while (k < m && nums[k] == nums[k - 1]) {
                        k++;
                    }
                } else if (sum > target) {
                    m--;

                } else {
                    k++;
                    
                }


            }
            j++;
            while (j < len - 2 && nums[j] == nums[j - 1]) {
                j++;
            }
        }
        i++;
        while (i < len - 3 && nums[i] == nums[i - 1]) {
            i++;
        }
    }

    return res;
}


int main() {
    vector<int> nums = {-5, 5, 4, -3, 0, 0, 4, -2};
    auto res = fourSum(nums, 4);
    for (auto e : res) {
        for (auto i : e) {
            cout << i << " ";

        }
        cout << endl;
    }
    cout << "hello,word" << endl;
    return 0;

}

