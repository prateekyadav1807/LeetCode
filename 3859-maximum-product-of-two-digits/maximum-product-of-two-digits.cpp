class Solution {
public:
    int maxProduct(int n) {
        int largest = 0;
        int secLargest = 0;
        while (n > 0) {
            int dig = n % 10;
            if (dig > largest) {
                secLargest = largest;
                largest = dig;

            } else if (dig > secLargest) {
                secLargest = dig;
            }

            n /= 10;
        }
        return largest * secLargest;
    }
};