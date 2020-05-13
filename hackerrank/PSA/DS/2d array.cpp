#include <bits/stdc++.h>
using namespace std;
int main(){
    int sum=-9999,temp;
    int a[6][6];
    for(int i=0;i<6;i++){
        for(int j=0;j<6;j++){
        cin >> a[i][j];
    }}
    for(int i=1;i<5;i++){
        for(int j=1;j<5;j++){
    temp = a[i][j]+a[i-1][j]+a[i-1][j+1]+a[i-1][j-1]+a[i+1][j]+a[i+1][j-1]+a[i+1][j+1];
    /*if(0>sum){
        cout<<a[i-1][j-1]<<a[i][j-1]<<a[i+1][j-1]<<endl;
        cout<<" "<<a[i][j]<<" "<<endl;
        cout<<a[i-1][j+1]<<a[i][j+1]<<a[i+1][j+1]<<endl;}
    */
    sum = sum > temp ? sum : temp;

        }
    }
    cout<<sum;
}
