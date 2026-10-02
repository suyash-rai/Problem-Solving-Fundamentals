#include <iostream>
using namespace std;

int main(){
   int size;
   cout<<"Enter the number of element you want to compare : ";
   cin>>size;
   int arr[size];

   cout<<"Enter the numbers you want to compare : "<<endl;
   for (int i = 0; i < size; i++){
      cin>>arr[i];
   }

   cout<<"The array is : ";
   for (int i = 0; i < size; i++){
      cout<<arr[i]<<" ";
   }

   for (int i = 0; i < size - 1; ++i) {
      int min_idx = i;
      for (int j = i + 1; j < size; ++j) {
         if (arr[j] < arr[min_idx]) {
             min_idx = j;
         }
     }
     int temp = arr[min_idx];
     arr[min_idx] = arr[i];
     arr[i] = temp;
    }
   cout<<"\nThe sorted array is : ";
   for (int i = 0; i < size; i++)
   {
      cout<<arr[i]<<" ";
   }

   cout<<"\nThe minimum and maximum elememt of the array are "<<arr[0]<<" and "<<arr[size-1]<<" respectively.";
   return 0;
}