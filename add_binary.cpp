#include <iostream>
using namespace std;
class Solution{
    string add_binary(string a,string b){
        string res="";
        int sum,carry=0;
        int i=a.length()-1,j=b.length()-1;
        while(i>=0||j>=0||carry){
            sum=carry;
            if(i>=0) sum += a[i--]-'0';
            if(j>=0) sum += b[j--]-'0';
            res+=(sum%2) +'0';
            carry = sum/2;
       }
       reverse(res.begin(),res.end());
       return res;
    }
}
