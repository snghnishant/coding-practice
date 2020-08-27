class Solution {
public:
    int reverse(int x) {
        int reverse{0},rem;
        while(x){
            rem = x%10;
            x /= 10;
            if (reverse > INT_MAX/10 || (reverse == INT_MAX / 10 && rem > 7)) return 0;
            if (reverse < INT_MIN/10 || (reverse == INT_MIN / 10 && rem < -8)) return 0;
            reverse = reverse * 10 + rem;
        }
        return reverse;
    }
    
};