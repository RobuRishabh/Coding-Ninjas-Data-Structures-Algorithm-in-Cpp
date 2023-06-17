/*
Binary Search (Recursive)
Send Feedback
Given an integer sorted array (sorted in increasing order) and an element x, find the x in given array using binary search.
Return the index of x.
Return -1 if x is not present in the given array.
Note : If given array size is even, take first mid.
Input format :

Line 1 : Array size

Line 2 : Array elements (separated by space)

Line 3 : x (element to be searched)

Sample Input :
6
2 3 4 5 6 8 
5 
Sample Output:
3 
Hint : Use helper function to solve this question.
**************************************************************************************************************************
#include <iostream>
#include "solution.h"
using namespace std;

int main() {
    int input[100000],length,element, ans;
    cin >> length;
    for(int i =0;i<length;i++)
    { 
        cin >> input[i];;
    }

    cin>>element;
    ans = binarySearch(input, length, element);
    cout<< ans << endl;
}

*/
#include"bits/stdc++.h"
// input - input array
// size - length of input array
// element - value to be searched
int binarySearch(int input[], int left, int right, int element){
    if(right >= left){
        int mid = (left + right)/2;
        if(input[mid] == element) return mid;
        else if(input[mid] > element){
            return binarySearch(input, left, mid-1, element);
        }
        else {
            return binarySearch(input, mid+1, right, element);
        }
    }
    return -1;
}

int binarySearch(int input[], int size, int element) {
    // Write your code here
    return binarySearch(input, 0, size-1, element);
}
