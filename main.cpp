#include<iostream>
using namespace std;

int main(){
    int i=1;
    int n;
    cin>>n;
    while(i<=n){
    int spac =1;
     int j=1;
    while(spac<=n-i){
        cout<<" ";
        spac++;
    }
   
    while(j<=i){
        cout<<j;
        j++;
    }
    j=i-1;
    while(j>=1){
        cout<<j;
        j--;
    }
    cout<<endl;
    i++;
    }

    return 0;
}