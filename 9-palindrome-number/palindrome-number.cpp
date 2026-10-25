class Solution {
public:
    bool isPalindrome(int x) {

        if(x<0) return false;

        long long num=0;
        long long num1=x;
        int carry;

        while(x!=0){
            carry=x%10;
            x=x/10;
            num=num*10+carry;
        }

        if(num==num1) return true;
        return false;
        
    }
};