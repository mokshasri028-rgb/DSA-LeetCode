#include <iostream>
using namespace std;
class Solution {
public:
    string addBinary(string a, string b) {
        string res="";
        int i=a.length()-1,j=b.length()-1;
        int carry=0;
        int sum=0;
        while(i>=0 && j>=0){
            cout<<a[i]<<" "<<b[j]<<endl;
            cout<<carry<<"carry"<<endl;
            sum = (a[i]+b[j])+carry;
            cout<<sum<<"sum"<<endl;
            res += sum%2;
            carry = sum/2;
            i--; j--;
        }
        cout<<res<<"res"<<endl;
        if(i>j){
            while(i>=0){
                int sum=a[i]+carry;
                res += sum%2;
                i--;
            }
        }
        else {
            while(j>=0){
                int sum=b[j]+carry;
                res += sum%2;
                j--;
            }
        }
        cout<<res<<endl;
        if(carry!=0) res += '1';
        reverse(res.begin(),res.end());
        return res;
    }
};
int main(){
    Solution s;
    s.addBinary("11","1");
}