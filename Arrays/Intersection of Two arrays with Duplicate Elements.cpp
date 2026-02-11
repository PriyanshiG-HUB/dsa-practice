class Solution {
  public:
    vector<int> intersect(vector<int>& a, vector<int>& b) {
        // code here
        sort(a.begin(),a.end());
        sort(b.begin() , b.end());
        vector<int> res;
        int i=0 , j=0;
        while(i<a.size() && j<b.size()){
            if(a[i] == b[j]){
                // avoid duplicates in result
                if (res.empty() || res.back() != a[i])
                    res.push_back(a[i]);
                i++;
                j++;
            }
            else if(a[i] < b[j])
                i++;
            else
                j++;
        }
        return res;
    }
};

Time Complexity:
Sorting: O(n log n + m log m)
Traversal: O(n + m)

unordered_set<int> s(a.begin(), a.end());
        unordered_set<int> ans;

        for (int x : b) {
            if (s.count(x))
                ans.insert(x);
        }

        return vector<int>(ans.begin(), ans.end());
Time Complexity:
Sorting: O(n + m)
Traversal: O(n)
