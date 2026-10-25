class Solution {
public:
    int reverse(int x) {

        long long  num=0;
        int carry;

        
        while(x!=0){
            carry=x%10;
            x=x/10;


            
            if(num*10>INT_MAX || num*10<INT_MIN) return 0;

            
    

            num=num*10+carry;

            

            
            

        }

        return num;

        
        
    }
};