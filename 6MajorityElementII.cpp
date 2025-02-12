#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i< n; i++){
        cin>>arr[i];
    }
    //************* Brute force approach ********** TC -> O(n^2) and SC -> O(1)
    for(int i = 0 ; i < n ; i++){
        int count = 0 ;
        for(int j = 0 ; j < n ; j++){
            if(arr[i] == arr[j]){
                count ++;
            }
        }
        if(count > n/3){
            cout<<arr[i]<<" ";
        }
        return 0;
    }
    cout<<-1<<endl;
    return 0;


    // ************ Better approach ********** TC -> O(n) and SC -> O(n)
    // map<int, int> count;
    // for(int num : arr){
    //     count[num]++;
    // }
    // for(auto i : count){
    //     if(i.second > n/3){
    //         cout<<i.first<<" ";
    //     }
    // }
    // return 0;

    // *************Moore's Voting Algo*************
    // ***********Optimal Approach ***************** TC -> O(n) and SC -> O(1)
    // int el1 , el2;
    // int count1 =0;
    // int count2 = 0;
    // for(int i = 0 ; i <n ;i++){
    //     if(count == 0){
    //         el = arr[i];
    //         count = 1;
    //     }
    //     else if (arr[i] == el){
    //         count++;
    //     }
    //     else{
    //         count--;
    //     }
    // }
    // int count2 = 0 ;
    // for(int i = 0 ; i < n ; i++){
    //     if(arr[i] == el) count2 ++;
    // }
    // if(count2 > n/3){
    //     cout<<el<<"";
    // }
    // else{
    //     cout<<-1<<endl;
    // }
}