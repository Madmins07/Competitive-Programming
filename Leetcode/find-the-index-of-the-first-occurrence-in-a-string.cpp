class Solution {
public:
    int strStr(string haystack, string needle) {
        const int n1 = haystack.size();
        const int n2 = needle.size();
        if (n2 > n1)
            return -1;
        for(int i=0;i<n1-n2+1;i++){
            int count=0;
            for(int j=0;j<n2;j++){
                if(haystack[i+j]==needle[j]){
                    count++;
                }
            }
            if(count==n2) return i;
        }
        return -1;
    }
};
