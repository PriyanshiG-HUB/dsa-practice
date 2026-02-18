class Solution {
public:
    vector<int> subarraySum(vector<int> &arr, int target) {
        int sum = 0, left = 0;

        for (int right = 0; right < arr.size(); right++) {
            sum += arr[right];

            // shrink window until sum <= target
            while (sum > target && left <= right) {
                sum -= arr[left];
                left++;
            }

            if (sum == target)
                return {left + 1, right + 1};
        }
        return {-1};
    }
};
