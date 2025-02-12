#include<bits/stdc++.h>
using namespace std;

void reverse_array(int arr[], int left, int right){
        if (left >= right) return ;
        swap(arr[left], arr[right]);
        reverse_array(arr, left +1 , right-1);
        
}
int main(){
    int n ;
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ;i++){
        cin>>arr[i];
    }

    // [Naive Approach] Using a temporary array - O(n) Time and O(n) Space

    // int temp[n];
    // for(int i = 0 ; i < n ; i++){
    //     temp[i] = arr[n-i-1];
    // }
    // for(int i = 0 ; i < n ; i++){
    //     cout<<temp[i] <<" ";
    // }

    // [Expected Approach - 1] Using Two Pointers - O(n) Time and O(1) Space

    // int left = 0 ; int right = n-1;
    // while(left < right){
    //     swap(arr[left], arr[right]);
    //     left++;
    //     right--;
    // }
    // for(int  i = 0 ; i < n ; i++){
    //     cout<<arr[i]<<" ";
    //}



    // [Expected Approach - 2] By Swapping Elements - O(n) Time and O(1) Space

    // for(int i = 0 ; i < n/2;i++){
    //     swap(arr[i], arr[n-i-1]);
    // }
    // for(int i = 0 ; i < n ; i++){
    //     cout<<arr[i]<<" ";
    // }


    // [Alternate Approach] Using Recursion - O(n) Time and O(n) Space

    int left = 0 ;
    int right = n-1;
    reverse_array(arr, left , right);
    for(int i = 0 ; i < n ; i++){
        cout<<arr[i]<<" ";
    }




    // Using Inbuilt Methods - O(n) Time and O(1) Space

    // reverse(arr,arr+n);
    //  for(int i = 0 ; i< n ; i++){
    //     cout<<arr[i]<<" ";
    //  }




}