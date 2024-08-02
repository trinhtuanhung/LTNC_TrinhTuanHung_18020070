#include <iostream>
#include <vector>
#include <algorithm>
#include <set>
using namespace std;

vector<vector<int>> findZeroSumTriplets(vector<int>& nums) {
    sort(nums.begin(), nums.end());
    vector<vector<int>> result;
    set<vector<int>> found;

    for (size_t i = 0; i < nums.size(); ++i) {
        int target = -nums[i];
        size_t left = i + 1;
        size_t right = nums.size() - 1;

        while (left < right) {
            int sum = nums[left] + nums[right];
            if (sum == target) {
                vector<int> triplet = {nums[i], nums[left], nums[right]};
                if (found.find(triplet) == found.end()) {
                    result.push_back(triplet);
                    found.insert(triplet);
                }
                ++left;
                --right;
            } else if (sum < target) {
                ++left;
            } else {
                --right;
            }
        }
    }

    return result;
}

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);

    for (int i = 0; i < n; ++i) {
        cin >> nums[i];
    }

    vector<vector<int>> triplets = findZeroSumTriplets(nums);

    for (const auto& triplet : triplets) {
        for (int num : triplet) {
            cout << num << " ";
        }
        cout << endl;
    }

    return 0;
}
