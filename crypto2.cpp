#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

    int array1[] = {1, 2, 3, 20};
    vector <int> numbers(array1, array1 + (sizeof(array1)/sizeof(int)));

class Cryptography {
public:
    long long encrypt(vector <int> numbers) {
        long long ans = 0;
        for (int i = 0; i < numbers.size(); i++) {
            long long seki = 1;
            for (int j = 0; j < numbers.size(); j++) {
                if (i == j) {
                    seki *= (numbers[j] + 1);
                } else {
                    seki *= numbers[j];
                }
            }
            ans = max(ans, seki);
            printf("%d\n", i);
            printf("%d\n", ans);
        }
        return ans;
    }

};

int main() {
    Cryptography test;
    long ans = test.encrypt(numbers);
    printf("%d\n", ans);
    return 0;
}
