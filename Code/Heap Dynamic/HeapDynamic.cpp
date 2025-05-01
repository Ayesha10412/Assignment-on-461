#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> arr;  
    for(int i = 0; i < 5; i++) {
        arr.push_back(i + 1);
    }
    for(int val : arr)
        cout << val << " ";
    return 0;
}
