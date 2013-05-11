#include <vector>
#include <string>
using namespace std;

class InterestingParty{
public:
    int bestInvitation(vector <string> first, vector <string> second) {
        int i, j;
        int ans = 0;

        for (i = 0; i < first.size(); i++) {
            int f = 0;
            int s = 0;
            for (j = 0; j < first.size(); j++) {
                if (first[i]  == first[j])  f++;
                if (first[i]  == second[j]) f++;
                if (second[i] == first[j])  s++;
                if (second[i] == second[j]) s++;
            }
            ans = max(f, ans);
            ans = max(s, ans);
        }
        printf("%d\n", ans);
        return ans; 
    }
};

int main() {
    string array1[] = {"fishing", "gardening", "swimming", "fishing"};
    string array2[] = {"hunting", "fishing", "fishing", "bitting"};

    vector <string> first(array1, array1 + (sizeof(array1)/sizeof(string)));
    vector <string> second(array2, array2 + (sizeof(array2)/sizeof(string)));

    InterestingParty test;
    test.bestInvitation(first, second);
    return 0;
}
