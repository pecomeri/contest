#include <vector>
#include <algorithm>
#include <stdio.h>
using namespace std;

    int array1[] = {1, 2, 3, 20};
    vector <int> numbers(array1, array1 + (sizeof(array1)/sizeof(int)));

class Cryptography {
public:
    long long encrypt(vector <int> numbers) {
        long long ret = 1;
        sort(numbers.begin(), numbers.end());
        numbers[0]++;
        for (int i = 0; i < numbers.size(); i++) {
            ret *= numbers[i];
        }
        return ret;
    }

};

int main() {
    Cryptography test;
    long ans = test.encrypt(numbers);
    printf("%d\n", ans);
    return 0;
}
