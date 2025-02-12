#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; cin>>n;
    int arr[n];
    for(int  i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int d ; cin>>d;


    // [Naive Approach] Rotate one by one - O(n * d) Time and O(1) Space
    // for(int i = 0 ; i < d ;i++){
    //     int temp = arr[0];
    //     for(int j = 0 ; j < n-1; j++){
    //         arr[j] = arr[j+1];
    //     }
    //     arr[n-1] = temp;
    // }

    // [Better Approach] Using Temporary Array - O(n) Time and O(n) Space
    d %= n;

    // int temp[n];
    // for(int i  = 0 ; i < n-d  ; i++){
    //     temp[i] = arr[d+i];
    // }
    // for(int i = 0; i < d ; i++){
    //     temp[n-d+i] = arr[i];
    // }
    // for(int i = 0 ; i < n;i++){
    //     arr[i] = temp[i];
    // }

    // [Expected Approach 1] Using Juggling Algorithm - O(n) Time and O(1) Space

    // int cycle = __gcd(n,d);
    // for(int i = 0 ; i < cycle ; i++){
    //     int startEle = arr[i];
    //     int currInd = i;

    //     while(true) {
    //         int k = (currInd + d) % n;
    //         if(k == i)  break;
    //         arr[currInd] = arr[k];
    //         currInd = k;
    //     }
    //     arr[currInd] = startEle;
    // }

    // [Expected Approach 2] Using Reversal Algorithm - O(n) Time and O(1) Space

    reverse(arr, arr + d);
    reverse(arr+d , arr+n);
    reverse(arr , arr+n);


    for(int i = 0 ; i< n ; i++){
        cout<<arr[i]<<" ";
    }

}