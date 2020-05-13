#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,a,max=0,x;
    cin >>n;
    int arr[5]={0,0,0,0,0};
    for(int i=0;i<n;i++){
        cin>>a;
        arr[a-1]++; 
    }
    for(int i=0;i<5;i++){
        if(arr[i]>max){
            max = arr[i];
            x = i+1;
        }
    }
    cout<<x;
}
