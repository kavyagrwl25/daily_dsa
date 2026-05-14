class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string> arr;
        arr.reserve(nums.size()); 

        for (int x : nums) {
            arr.push_back(to_string(x));
        }

      
        sort(arr.begin(), arr.end(),
             [](const string& a, const string& b) {
                 
                 return a + b > b + a;
             });

        if (arr[0] == "0") return "0";
        size_t totalLen = 0;
        for (const string& s : arr) totalLen += s.size();

        string ans;
        ans.reserve(totalLen);
        for (const string& s : arr) ans += s;

        return ans;
    }
};