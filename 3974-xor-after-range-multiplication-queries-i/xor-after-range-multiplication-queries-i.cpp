static long long A[1000][32];// ceil(sqrt((1000))=32
class Solution {
public:
    static constexpr int mod=1e9+7;
    static long long modInv(long long a) {
        long long b=mod; 
        long long x0=1, x1=0; 
        while (b>0){
            auto [q, r]=div(a, b);
            x0=exchange(x1, x0-q*x1);
            a=exchange(b, r);
        }
        return (x0<0)?x0+mod:x0;
    }

    static int xorAfterQueries(vector<int>& nums, vector<vector<int>>& queries) {
        const int n=nums.size(), Block=ceil(sqrt(n));

        //reset A
        for(int i=0; i<n; i++)
            fill(A[i], A[i]+Block, 1);
        
        for(auto& q: queries){
            int l=q[0], r=q[1], k=q[2];
            long long v=q[3];
            if (k>=Block){// just multiplying
                for(int i=l; i<=r; i+=k){
                    long long x=nums[i]*v%mod;
                    nums[i]=x;
                }
            }
            else{// sqrt decomposition
                A[l][k]=A[l][k]*v%mod;
                r+=k-((r-l)%k);
                if (r<n)
                    A[r][k]=A[r][k]*modInv(v)%mod;
            }
        }
        // compute result
        long long xorSum=0;
        for(int i=0; i<n; i++){
            for(int j=1; j<Block; j++){
                if (i>=j){
                    A[i][j]*=A[i-j][j];
                    A[i][j]%=mod;
                }
                nums[i]=A[i][j]*nums[i]%mod;
            }
            xorSum^=nums[i];
        }
        return xorSum;
    }
};