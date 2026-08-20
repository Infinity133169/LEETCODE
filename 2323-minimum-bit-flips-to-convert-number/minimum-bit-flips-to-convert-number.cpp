class Solution {
public:
    int minBitFlips(int start, int goal) {

        long long ans = start ^ goal;
        long long cnt = 0;
        long long place = 0;

        for (long long i = 0; i < 32; i++) {

            place = (1LL << i);

            if (ans & place)
                cnt++;
        }

        return cnt;
    }
};