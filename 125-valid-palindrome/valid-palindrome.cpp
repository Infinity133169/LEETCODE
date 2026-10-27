class Solution {
public:
    bool isPalindrome(string s) {

        if(s==" ") return true;
        string c="";
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                c+=s[i]+32;  ///using ascii value cancept....
            }

            if(s[i]>='a' && s[i]<='z'){
                c+=s[i];
            }
            if(s[i]>='0' && s[i]<='9'){
                c+=s[i];
            }
        }

        int l=0;
        int r=c.size()-1;

        bool flag=true;

        while(l<=r){
            if(c[l]!=c[r]){
                flag=false;
                break;
            }
            l++;
            r--;
        }

        return flag;
        
    }
};