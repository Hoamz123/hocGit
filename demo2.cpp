#include<bits/stdc++.h>
using namespace std;
void budbleSort(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n-1-i;j++){
            if(a[j] > a[j+1]){
                swap(a[j],a[j+1]);
            }
        }
    }
}
int main(){
    int n;cin >> n;
    int a[n];
    for(int &x : a){
        cin >> x;
    }
    budbleSort(a,n);
    for(int i : a){
        cout << i << " ";
    }
}