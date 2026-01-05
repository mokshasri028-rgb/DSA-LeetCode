//my initial solution
class Solution {
public:
    int lengthOfLastWord(string s) {
        int n=0,num=0;
        for(int i=0;i<s.length();i++){
            if(s[i]==' '){
                i=i+1;
                while(i<s.length() && s[i]==' '){
                        i=i+1;
                }
                if(i!=s.length()){
                    n=i;
                }
            }
        }
        for(int i=n;i<s.length() && s[i]!=' ';i++){
            num=num+1;
        }
        return num;
    }
}; 

//best version

class Solution {
public:
    int lengthOfLastWord(string s) {
        int i = s.length() - 1;
        int count = 0;

        while (i >= 0 && s[i] == ' ') {
            i--;
        }

        while (i >= 0 && s[i] != ' ') {
            count++;
            i--;
        }

        return count;
    }
};
