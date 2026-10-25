class Solution {
public:
    int reverse(int x) {

        long long  num=0;
        int carry;

        
        while(x!=0){
            carry=x%10;
            x=x/10;


            
          

            
    

            num=num*10+carry;

            
            if(num>INT_MAX || num<INT_MIN) return 0;

            

            
            

        }

        return num;

        
        
    }
};