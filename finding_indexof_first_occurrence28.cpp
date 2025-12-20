class Solution {
public:
    int strStr(string haystack, string needle) {
        bool found;
        int index;
        if(haystack.length()<needle.length() || haystack.length()==0 || needle.length()==0 ){
            return -1;
        }
        for(int i=0;i<haystack.length();i++){
            if(needle[0]==haystack[i]){
                index=i;
                int k=i+1;
                for(int j=1;j<needle.length();j++){
                    if(needle[j]==haystack[k]){
                        k+=1;
                        found=true;
                    }
                    else{
                        found=false;
                        goto l;
                    }
                    
                }
                return index;
            }
            l:
        }
        if(found==true)
            return index;
        else 
            return -1;
    }
};