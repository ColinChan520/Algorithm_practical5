#include "BubbleSort.h"
#include <iostream>

using namespace std;

vector<int> BubbleSort :: sort(std::vector<int> list){
    int len = list.size();

    for (int i = 0; i < len - 1; i++){
        for(int j = 0; j < len - 1 - i; j++){
            if(list[j] > list[j+1]){
                std::swap(list[j], list[j+1]);
            }
        }
    }
    return list;

    // for (int i = 0; i < list.size() ; i++){
    // cout << list[i] << endl;}

}