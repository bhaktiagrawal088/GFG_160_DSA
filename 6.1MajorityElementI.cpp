#include<bits/stdc++.h>
using  namespace std;
int main(){
    int n;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n; i++){
        cin>>arr[i];
    }
    // ************Brute Force approach ****************** TC -> O(n^2) and  SC -> O(1)
    // for(int  i = 0 ; i < n ;i++){
    //     int cnt = 0 ;
    // for(int j = 0 ; j < n ; j++){
    //         if(arr[i] == arr[j]){
    //             cnt++;
    //         }
    //     }
    // if(cnt > n/2){
    //     cout<<arr[i]<<" ";
    //     return 0;
    // }  
    // }
    // cout << "-1" << endl;  
    // return 0;

    // ************* Better approach **************** TC -> O(n) and SC -> O(n)
    // map<int, int> mp;
    // for(int i = 0 ; i < n ; i ++){
    //     mp[arr[i]]++;
    // }
    // for(auto it : mp){
    //     if(it.second > n/2){
    //         cout<<it.first<<" ";
    //         return 0;
    //     }
    // }
    // cout<< -1 <<endl;
    // return 0;

    // *********Moore's Voting Algorithm****************
    // *****************Optimal approach *************** TC -> O(n) and SC -> O(1)
    int el;
    int cnt = 0 ;
    for(int i = 0 ; i< n; i++){
        if(cnt == 0){
            el = arr[i];
            cnt = 1;
        }
        else if (arr[i] == el){
            cnt++;
        }
        else{
            cnt--;

        }
    }
    int cnt1= 0;
    for(int i = 0 ; i  < n ; i++){
        if(arr[i] == el) cnt1++;
    }
    if(cnt1 > n/2){
        cout<<el<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
}