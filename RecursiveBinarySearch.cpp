#include "RecursiveBinarySearch.h"
#include <iostream>

using namespace std;

bool BinarySearch_Recursive(std::vector<int> array, int low, int high, int value)
{
	if (low > high)
		return false;
	int mid = low + (high - low) / 2;
	if (array[mid] == value)
		return true;
	else if (array[mid] > value)
		return BinarySearch_Recursive(array, low, mid - 1, value);
	else
		return BinarySearch_Recursive(array, mid + 1, high, value);

}

bool RecursiveBinarySearch::search(std::vector<int> a, int b){
    int low = 0;
	int high = a.size() - 1;
	return BinarySearch_Recursive(a,low,high,b);
}
