class Solution {
public:
    int countPrimes(int n) {


        if(n<=1) return 0;

        if(n>=2 && n<=4) return n-2;

        vector<int>arr(n+1,1);
        int p=2;

        while(p*p<n){

            for(int i=p*p;i<=n;i+=p){
                if(i%p==0) arr[i]=0;
            }
            p++;

        }

        int cnt=0;

        for(int i=2;i<n;i++){
            if(arr[i]==1) cnt++;
        }


        return cnt;


        



    }
};