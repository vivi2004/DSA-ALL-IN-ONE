#include <bits/stdc++.h>
using namespace std;

class solution {
public:
    int search(vector<int> &nums, int target) {
        int left = 0;
        int right = nums.size() - 1;

        while (left <= right) {
            int mid = left + (right - left) / 2;

            if (nums[mid] == target)
                return mid;

            // if the left side is sorted
            if (nums[left] <= nums[mid]) {
                if (nums[left] <= target && target < nums[mid])
                    right = mid - 1;
                else
                    left = mid + 1;
            }
            // if the right side is sorted
            else {
                if (nums[mid] < target && target <= nums[right])
                    left = mid + 1;
                else
                    right = mid - 1;
            }
        }
        return -1;
    }
};

int main (){
     solution sol;
     vector<int>nums = {4,5,6,7,0,1,2};
     int target = 10;
     int result = sol.search( nums,target);
     cout<<"Index  of target"<<target<< " is"<<result<<endl;
     return 0;
}