#include <iostream>
#include <unordered_map>
using namespace std;
class Solution {
public:
    int romanToInt(string s) {
        unordered_map<char, int> mp;
        mp['I'] = 1;
        mp['V'] = 5;
        mp['X'] = 10;
        mp['L'] = 50;
        mp['C'] = 100;
        mp['D'] = 500;
        mp['M'] = 1000;
        int r=0;
        for(int i=s.length()-1;i>=0;i--){
            
            if(i>0 && mp[s[i]]>mp[s[i-1]]){
                r+=(mp[s[i]]-mp[s[i-1]]);
                i=i-1;   
            }
            else
                r+=mp[s[i]];
        }
        return r;
    }
};
int main(){
    Solution s;
    cout<<s.romanToInt("MCMXCIV");
}