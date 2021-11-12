//6.Write a program to merge two sorted array into one sorted array.

/*
Arr1[] = {10,15, 17, 20}
Arr2[] = {5, 9, 13, 19}
Result[] = {5, 9, 10, 13, 15, 17, 19, 20}
Algorithm
1. Traverse both array
   1.1. If arr1[i] < arr2[j]
      1.1.1. Add arr[i] to new array
      1.1.2. Increment ‘i’ and index of result array ‘k’
   1.2. If arr2[i] < arr1[j]
      1.2.1. Add arr[j] to new array
      1.2.2. Increment ‘j’ and index of result array ‘k’
2. Repeat procedure until both arrays are exhausted
3. Return resultant array
*/

#include <iostream>
#define SIZE(arr) (sizeof(arr) / sizeof(arr[0]))
using namespace std;
void mergeSortedArrays(int *arr1, int n1, int *arr2, int n2, int *result){
   int i, j, k;
   i = 0;
   j = 0;
   k = 0;
   while (i < n1 && j < n2) {
      if (arr1[i] < arr2[j]) {
         result[k] = arr1[i];
         ++k;
         ++i;
      } else {
         result[k] = arr2[j];
         ++k;
         ++j;
      }
   }
   while (i < n1) {
      result[k] = arr1[i];
      ++k;
      ++i;
   }
   while (j < n2) {
      result[k] = arr2[j];
      ++k;
      ++j;
   }
}
void dispalyArray(int *arr, int n){
   for (int i = 0; i < n; ++i) {
      cout << arr[i] << " ";
   }
   cout << endl;
}
int main(){
   int arr1[] = {10, 15, 17, 20};
   int arr2[] = {5, 9, 7, 13, 19};
   int result[SIZE(arr1) + SIZE(arr2)];
   cout << "First sorted array:" << endl;
   dispalyArray(arr1, SIZE(arr1));
   cout << "Second sorted array:" << endl;
   dispalyArray(arr2, SIZE(arr2));
   mergeSortedArrays(arr1, SIZE(arr1), arr2, SIZE(arr2), result);
   cout << "Final sorted array:" << endl;
   dispalyArray(result, SIZE(result));
   return 0;
}
/*
Output
When you compile and execute the above program. It generates the following output −

First sorted array:
10 15 17 20
Second sorted array:
5 9 7 13 19
Final sorted array:
5 9 7 10 13 15 17 19 20
*/
