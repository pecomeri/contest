#include <vector>
using namespace std;

class KiwiJuiceEasy {
public:
    vector <int> thePouring(vector <int> capacities,
                            vector <int> bottles, vector <int> fromId,
                            vector <int> toId) {
        for (int i = 0; i < fromId.size(); i++) {
            int from = fromId[i];
            int to = toId[i];
            int space = capacities[to] - bottles[to];
            
            if (space >= bottles[from]) {
                int vol = bottles[from];
                bottles[to] += vol;
                bottles[from] = 0;
            } else {
                int vol = space;
                bottles[to] += vol;
                bottles[from] -= vol;
            }
        }
        for (auto x: bottles) {
            printf("%d\n", x);
        }
        return bottles;
    }
};

int main() {
    int array1[] = {20, 20};
    int array2[] = {5, 8};
    int array3[] = {0};
    int array4[] = {1};

    vector <int> capacities(array1, array1 + (sizeof(array1)/sizeof(int)));
    vector <int> bottles(array2, array2 + (sizeof(array2)/sizeof(int)));
    vector <int> fromId(array3, array3 + (sizeof(array3)/sizeof(int)));
    vector <int> toId(array4, array4 + (sizeof(array4)/sizeof(int)));

    KiwiJuiceEasy test;
    test.thePouring(capacities, bottles, fromId, toId);
    return 0;
}
