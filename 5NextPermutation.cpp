#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ;
    cin>>n;
    vector<int> arr(n);
    for(int i = 0 ; i < n;i++){
        cin>>arr[i];
    }
    int index = -1;
    // 1. find the break point (longest integer prefix match)
    // 2. find the number greater than index so you can stay close
    // 3. try to please run in sorted order 
    for(int i = n-2; i >= 0; i--){
        if(arr[i] < arr[i+1]){
            index = i;
            break;
        }
    }
    if(index == -1){
        reverse(arr.begin(),arr.end());
        for (int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
        return 0;
    }
    for(int i = n-1; i>= index;i--){
        if(arr[i] > arr[index]){
            swap(arr[i], arr[index]);
            break;
        }
    }
    reverse(arr.begin() + index +1,arr.end());

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;


}