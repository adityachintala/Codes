#include<iostream>
using namespace std;

int main(){
    int n,k;
    cin>>n;
    cin>>k;
    int arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    int ans = 0 , c = 0;
    for(int i = 0;i<n;i++){
        if(arr[i] == 0){
            c++;
        }
        else{
            ans += c/2;
            c = 0;
        }
    }
    if(ans >= k)cout<<"true";
    else cout<<"false";
}