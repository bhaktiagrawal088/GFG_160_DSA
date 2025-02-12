#include<bits/stdc++.h>
using namespace std;
int main() { 
    int n ; 
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i ++){
        cin>>arr[i];
    }
    // int temp[n];
    // int j = 0 ;
    // for(int i = 0 ; i < n ; i++){
    //     if(arr[i] != 0 ){
    //         temp[j++] = arr[i];
    //     }
    // }
    // while ( j < n ){
    //     temp[j++] = 0;
    // }

    // for(int i = 0 ; i < n ; i++){
    //     cout<<temp[i]<<" ";
    // }

    // T.C  -- 0(n) and S.C -- 0(n)


    // int count = 0;
    // for(int i = 0 ; i < n ; i++){
    //     if(arr[i] != 0){
    //         arr[count] = arr[i];
    //         count++;
    //     }
    // }
    // while(count < n){
    //     arr[count++] = 0;
    // }
    // for(int i = 0 ; i <n  ; i++){
    //     cout<<arr[i]<<" ";
    // }

    // T.C  -- 0(n) and S.C -- 0(1)

    int count = 0 ; 
    for(int i = 0 ; i < n ; i++){
        if(arr[i] != 0 ){
            swap(arr[count], arr[i]);
            count++;
        }
    }
    for(int i = 0 ; i < n ;i++){
        cout<<arr[i]<<" ";
    }

    // T.C  -- 0(n) and S.C -- 0(1)




}