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
    // vector<int> ls;
    // for(int i = 0 ; i < n ; i ++){
    //     if(ls.size() == 0 || ls[0] != arr[i]){
    //         int count = 0 ;
    //         for(int j = 0 ; j < n ; j++){
    //             if(arr[i] == arr[j]){
    //                 count++;
    //             }
    //         }
    //         if(count > n/3){
    //             ls.push_back(arr[i]);
    //         }
    //     }
    //     if(ls.size() == 2) break;
        
    // }
    // if(!ls.empty()){
    //     for(int n : ls){
    //         cout<<n<<" ";
    //     }
    // }
    // else{
    //     cout<<-1;
    // }


    // ************ Better approach ********** TC -> O(n) and SC -> O(n)
    // map<int, int> count;
    // for(int num : arr){
    //     count[num]++;
    // }
    // bool found = false;
    // for(auto i : count){
    //     if(i.second > n/3){
    //         cout<<i.first<<" ";
    //         found  = true;
    //     }
    // }
    // if(!found){
    //     cout<<-1;
    // }

    // return 0;

    // II Method
    // vector<int> ls;
    // map<int, int> mpp;
    // int mm = (int) (n/3)  + 1;
    // for(int i = 0 ; i < n ; i++){
    //     mpp[arr[i]]++;
    //     if(mpp[arr[i]] == mm){
    //         ls.push_back(arr[i]);
    //     }
    //     if(ls.size() == 2) break;
    // }
    // if(!ls.empty()){
    //     for(int n : ls){
    //         cout<<n<<" ";
    //     }
    // }
    // else{
    //     cout<<-1<<endl;
    // }

    // *************Moore's Voting Algo*************
    // ***********Optimal Approach ***************** TC -> O(n) and SC -> O(1)
    int el1 = INT_MIN , el2 = INT_MIN;
    int count1 =0;
    int count2 = 0;
    for(int i = 0 ; i < n ;i++){
        if(count1 == 0 && el2 != arr[i]){
            count1 = 1;
            el1 = arr[i];
        }
        if(count2 == 0 && el1!= arr[i]){
            count2 = 1;
            el2 = arr[i];
        }
        else if(el1 == arr[i]) count1++;
        else if(el2 == arr[i]) count2++;
        else{
            count1--;
            count2--;
        }
    }
    int cnt1 = 0 ; int cnt2 = 0;
    vector<int > ls;
    int mm = (int) (n/3) + 1;
    for(int  i = 0 ; i < n ;i++){
        if(el1 == arr[i]) cnt1++;
        if(el2 == arr[i]) cnt2++;
    }
    if(cnt1 >= mm){
        ls.push_back(el1);
    }
    if(cnt2 >= mm){
        ls.push_back(el2);
    }

    if(ls.empty()){
        cout<<-1;
    }
    else{
        for(int i : ls){
            cout<<i<<" ";
        }
    }

    // **************Coding ninjas***************
    // vector<int> majorityElement(vector<int> v) {
    //     // Write your code here
    //     int el1 = INT_MIN;
    //     int el2 = INT_MIN;
    //     int cnt1 = 0;
    //     int cnt2 = 0;
    //     int n = v.size();
    //     for(int i = 0 ;  i < n ; i++){
    //         if(el1 == v[i]) cnt1++;
    //         else if(el2 == v[i]) cnt2++;
    //         else if(cnt1 == 0){
    //             cnt1 = 1;
    //             el1 = v[i];
    //         }
    //         else if(cnt2 == 0){
    //             cnt2 = 1;
    //             el2 = v[i];
    //         }
    //         else{
    //             cnt1--;cnt2--;
    //         }
    //     }
    //     int mm = (int)(n/3) + 1;
    //     vector<int> ls;
    //     int count1 = 0 ; int count2 = 0;
    //     for(int i = 0 ; i <n ; i++){
    //         if(el1 == v[i]) count1++;
    //         if(el2 == v[i]) count2++;
    //     }
    //     if(count1 >= mm){
    //         ls.push_back(el1);
    //     }
    //     if(count2 >= mm){
    //         ls.push_back(el2);
    //     }
    //     return ls;
    // }
}
    