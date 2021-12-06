#include <string>
#include <iostream>
#include "unordered_map"
using namespace std;

class Solution{
    public:
        int lengthOfLongestSubstring(string s){
            
            int n = s.length();
            int m[(int) s.length()];
            int ans = 0;

            for (int i= 0; i < n; i++){
                continue;
            }
            return ans;
            /*
            int ans=0,prev=0;
            unordered_map<char,int> m;
            for(int i=0;i<s.length();i++){
                char c=s[i];
                if(m.count(c)){
                    prev=max(prev,m[c]+1);
                    ans=max(ans,i-prev+1);
                    m[c]=i;
                }
                else{
                    m[c]=i;
                    ans=max(ans,i-prev+1);
                }
            }
            cout << ans <<endl;
            return ans;
            */
        }
};
int main(){
    Solution x;
    string s = "hello";
    x.lengthOfLongestSubstring(s);
    return 0;
}