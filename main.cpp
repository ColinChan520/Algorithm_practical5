#include "QuickSort.h"
#include "RecursiveBinarySearch.h"
#include <iostream>
#include <vector>
#include <sstream>

using namespace std;

int main(){
    std::vector<int> arr;
    string tem;
    while (cin >> tem) {
        arr.push_back(stoi(tem));
        if (cin.get() == '\n') break;
    }
    
    std::vector<int> result;
    QuickSort b;
    RecursiveBinarySearch s;
    result = b.sort(arr);
    bool resultSearch = s.search(result, 1);

    if (resultSearch){
        cout << "true" << " ";
    }
    else
    {
        cout << "false" << " ";
    }
    
    
    for(vector<int>::iterator it = result.begin(); it != result.end(); it++) {
    cout << *it << " ";
}
    
    return 0;
}