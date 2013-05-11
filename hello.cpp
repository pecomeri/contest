#include <iostream>
#include <vector>

int main()
{
    using namespace std;
    vector <int> array;
    int i;
    std::cout << "Hello World!\n";

    for( i = 0; i < 10; ++i )
    {
        array.push_back( i );
    }

    // 10個の要素を出力
    for( i = 0; i < 10; ++i )
    {
        cout << array[i] << endl;
    }
    return 0;
}
