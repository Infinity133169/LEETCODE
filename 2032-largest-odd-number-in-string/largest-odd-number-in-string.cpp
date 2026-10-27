class Solution {
public:
    string largestOddNumber(string num) {

        int r=num.size()-1;
        // flag=true;
        while(r>=0){
            if(num[r]%2==1){
                break;
            }
            else{
                num.erase(r,1);
            }
            r--;
        }
        // string c="";
        // for(int i=0;i<=r;i++){
        //     c+=num[i];
        // }

        return num;
    }
};