#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        bool found;
        for(int i=0;i<strs[0].size();i++){
            int c=strs[0][i];
            for(int j=1;j<strs.size();j++){
                if(c==strs[j][i]){
                    found=true;
                }
                else
                    return s;
            }
            s+=c;
        }
        return s;
    }
};
int main(){
    Solution s;
    string a[]={"flex","flenge","flow"};
    vector<string> n(a,a+3);
    cout<<s.longestCommonPrefix(n);
}