class Solution {
  public:
    bool areAnagrams(string& s1, string& s2) {
        // code here
        if(s1.length() != s2.length())
            return false;
            
        int freq[26] = {0};
        for(char c : s1){
            freq[c - 'a']++;
        }
        for(char c : s2){
            freq[c - 'a']--;
            if(freq[c - 'a'] < 0)
                return false;
        }
        return true;
    }
};
