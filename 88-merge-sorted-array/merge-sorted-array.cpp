class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int a = m-1;
        int b = m+n-1;
        int c = n-1;
        while(c>=0){
            if(a>=0 && nums1[a] > nums2[c]){
                nums1[b] = nums1[a];
                a--;
            }
            else{
                nums1[b] = nums2[c];
                c--;
            }
            b--;
        }
    }
};