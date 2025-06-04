#include <iostream>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T; 
    cin >> T;

    while (T--) {
        long long N, A, B, C, D;
        cin >> N >> A >> B >> C >> D;

        long long max_coins = 0;

        // Try every possible number of zeros (from 0 to N)
        for (long long count_0 = 0; count_0 <= N; count_0++) {
            long long count_1 = N - count_0;

            // Calculate pairs of zeros and ones subsequences
            long long zero_pairs = count_0 * (count_0 - 1) / 2;
            long long one_pairs = count_1 * (count_1 - 1) / 2;
            long long cross_pairs = count_0 * count_1;

            // Case 1: zeros first, then ones
            long long val1 = 0;
            val1 += A * zero_pairs;  // pairs of 00
            val1 += B * one_pairs;   // pairs of 11
            val1 += C * cross_pairs; // 0 before 1 subsequences (all zeros come first)
            val1 += D * 0;           // no 10 subsequences here

            // Case 2: ones first, then zeros
            long long val2 = 0;
            val2 += A * zero_pairs;  // pairs of 00
            val2 += B * one_pairs;   // pairs of 11
            val2 += C * 0;           // no 01 subsequences here
            val2 += D * cross_pairs; // 1 before 0 subsequences (all ones come first)

            // Update max coins earned
            max_coins = max(max_coins, max(val1, val2));
        }

        cout << max_coins << "\n";
    }

    return 0;
}
