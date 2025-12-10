class Solution {
public:
    int romanToInt(string s) {
        int n=0;
        if(s.length()>0&&s.length()<16){
        for(int i=s.length()-1;i>=0;i--){
            if(s[i]=='I'||s[i]=='V'||s[i]=='X'||s[i]=='L'||s[i]=='C'||s[i]=='D'||s[i]=='M'){
                if(s[i]=='I')
                    n=n+1;
                else if(s[i]=='V'){
                    n=n+5;
                    if(i-1!=-1){
                    if(s[i-1]=='I'){
                        n=n-1;
                        i=i-1;
                    }
                    }
                }
                else if(s[i]=='X'){
                    n+=10;
                    if(i-1!=-1){
                    if(s[i-1]=='I'){
                        n=n-1;
                        i=i-1;
                    }
                    else if(s[i-1]=='V'){
                        n=n-5;
                        i=i-1;
                    }
                    }
                }
                else if(s[i]=='L'){
                    n+=50;
                    if(i-1!=-1){
                    if(s[i-1]=='I'){
                        n=n-1;
                        i=i-1;
                    }
                    else if(s[i-1]=='V'){
                        n=n-5;
                        i=i-1;
                    }
                    else if(s[i-1]=='X'){
                        n=n-10;
                        i=i-1;
                    }
                    }
                }
                else if(s[i]=='C'){
                    n+=100;
                    if(i-1!=-1){
                    if(s[i-1]=='I'){
                        n=n-1;
                        i=i-1;
                    }
                    else if(s[i-1]=='V'){
                        n=n-5;
                        i=i-1;
                    }
                    else if(s[i-1]=='X'){
                        n=n-10;
                        i=i-1;
                    }
                    else if(s[i-1]=='L'){
                        n=n-50;
                        i=i-1;
                    }
                    }
                }
                else if(s[i]=='D'){
                    n+=500;
                    if(i-1!=-1){
                    if(s[i-1]=='I'){
                        n=n-1;
                        i=i-1;
                    }
                    else if(s[i-1]=='V'){
                        n=n-5;
                        i=i-1;
                    }
                    else if(s[i-1]=='X'){
                        n=n-10;
                        i=i-1;
                    }
                    else if(s[i-1]=='L'){
                        n=n-50;
                        i=i-1;
                    }
                    else if(s[i-1]=='C'){
                        n=n-100;
                        i=i-1;
                    }
                    }
                }
                else if(s[i]=='M'){
                    n+=1000;
                    if(i-1!=-1){
                    if(s[i-1]=='I'){
                        n=n-1;
                        i=i-1;
                    }
                    else if(s[i-1]=='V'){
                        n=n-5;
                        i=i-1;
                    }
                    else if(s[i-1]=='X'){
                        n=n-10;
                        i=i-1;
                    }
                    else if(s[i-1]=='L'){
                        n=n-50;
                        i=i-1;
                    }
                    else if(s[i-1]=='C'){
                        n=n-100;
                        i=i-1;
                    }
                    else if(s[i-1]=='D'){
                        n=n-500;
                        i=i-1;
                    }
                    }
                }
            }
            else 
                return -1;
        }
        return n;
        }
        else 
            return -1;
        
    }
};