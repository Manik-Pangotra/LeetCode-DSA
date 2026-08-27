class Solution {
public:
    int addDigits(int num) {
        // Keep looping until num becomes a single digit
        while (num >= 10) {
            int sum = 0;
            while (num > 0) {
                sum += num % 10;
                num /= 10;
            }
            num = sum; // Assign the calculated sum back to num for the next pass
        }
        return num;

    }
};