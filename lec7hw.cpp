#include<iostream>
using namespace std;

int main(){
    int x;
    cout<<"Enter the Amount"<<endl;
    cin>>x;
    int n;
    switch(1){
        case 1: n=x/100;
        cout<<"No. of Hundred Rupee Note : "<<n<<endl;
        x=x%100;
        case 2: 
        n=x/50;
        cout<<"No. of fifty Rupee Note : "<<n<<endl;
        x=x%50;
        case 3:n=x/20;
        cout<<"No. of twenty Rupee Note : "<<n<<endl;
        x=x%20;
        case 4: n=x/1;
        cout<<"No. of one Rupee Note : "<<n<<endl;
        default:cout<<"Done :)"<<endl;
    
    }
    return 0;
}