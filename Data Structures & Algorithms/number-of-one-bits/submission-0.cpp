class Solution {
public:
    int hammingWeight(uint32_t n) {
        int remainder;
        std::vector<int> bin;
        int numOnes = 0;

        // perform int to binary conversion
        while (n > 0) {
            remainder = n % 2;
            bin.push_back(remainder);
            n = n/2;
        }

        for(int i = bin.size()-1; i >= 0; i--) {
            if (bin[i] == 1) {
                numOnes++;
            }
        }

        return numOnes;

    }
};
