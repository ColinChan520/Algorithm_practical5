#include "QuickSort.h"
#include <vector>
#include <iostream>
#include <iterator>

using namespace std;


int partition(vector<int> &values, int left, int right) {
    int pivotIndex;
     if (right - left >= 3){
        pivotIndex = left + 2;
    }
    else{
        pivotIndex = left + (right - left) / 2;
    }
    int pivotValue = values[pivotIndex];
    int i = left, j = right;
    int temp;
    while(i <= j) {
        while(values[i] < pivotValue) {
            i++;
        }
        while(values[j] > pivotValue) {
            j--;
        }
        if(i <= j) {
            temp = values[i];
            values[i] = values[j];
            values[j] = temp;
            i++;
            j--;
        }
    }
    return i;
}

void quicksort(std::vector<int> &a, int start, int end)
{
    if (start >= end) {
        return;
    }
 
    int pivot = partition(a, start, end);
    quicksort(a, start, pivot - 1);

    quicksort(a, pivot, end);
}

std::vector<int> QuickSort::sort(std::vector<int> list){
    int start = 0;
    int end = list.size();
    quicksort(list, start, end - 1);
    return list;
}
 