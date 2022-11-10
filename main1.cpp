#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
        int j=1;
        while(j<=n-i+1){
        cout<<j;
        j++;}
        int st=1;
        while(st<=i-1){
            cout<<"*";
            st++;
        }
        j=i-1;
        while(j>=1){
            cout<<"*";
            j--;
        }
        j=n-i+1;
        while(j>=1){
            cout<<j;
            j--;
        }
        cout<<endl;
        i++;
    }
    return 0;
}