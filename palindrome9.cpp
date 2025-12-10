
class Solution { 
    public: 
        bool isPalindrome(int x) { 
            long int n=0; 
            if(x==0) return true;  
            else if(x>0){ 
                for(int j=x;j!=0;j/10){ 
                    n=(n*10+(j%10)); 
                }
                if(x==n)
                    return true;  
                else 
                    return false; 
            }   
            else 
                return false; 
        } 
    };