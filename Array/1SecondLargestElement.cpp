#include<bits/stdc++.h>
using namespace std;
int main(){
    int n ; 
    cin>>n;
    int arr[n];
    for(int i = 0 ; i < n ; i++){
        cin>>arr[i];
    }
    int largest = -1;
    int slargest = -1;
    for(int i = 0 ; i < n ; i++ ){
        if(arr[i] > largest){
            slargest = largest;
            largest = arr[i];
        }
        else if(arr[i] < largest && arr[i] > slargest){
            slargest = arr[i];
        }
    }
    cout<<slargest<<endl;
    

}