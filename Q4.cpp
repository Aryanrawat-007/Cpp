
You are given an array of elements. Now you need to choose the best index of this array. An index of the array is called best if the special sum of 
this index is maximum across the special sum of all the other indices. To calculate the special sum for any index you pick the first element that is 
and add it to your sum. Now you pick next two elements i.e., and and add both of them to your sum. Now you will pick the next elements, and this 
continues till the index for which it is possible to pick the elements. Find the best index and in the output print its corresponding special sum. 
Note that there may be more than one best index, but you need to only print the maximum special sum.


#include <iostream>
 using namespace std;
  
 int main()
 {
     int size, i, j;
  
     cout << "Enter the size of array: ";
     cin >> size;
  
     int a[size];
  
     cout << "Enter array elements: ";
     for(i = 0; i < size; i++)
         cin >> a[i];
  
     int maxsum = a[0];
  
     for(i = 0; i < size; i++)
     {
         int sum = 0;
         int k = 1, ind = i;
  
         while(ind + k - 1 < size)
         {
             for(j = 0; j < k; j++)
                 sum += a[ind + j];
  
             ind += k;
             k++;
         }
  
         if(sum > maxsum)
             maxsum = sum;
     }
  
     cout << "Maximum Sum = " << maxsum << endl;
  
     return 0;
 }
