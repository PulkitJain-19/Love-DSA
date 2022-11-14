#include<iostream>
using namespace std;

int pow(int a,int b){
    int ans=1;
    for (int i=1; i<=b;i++){
        ans=ans*a;
    }
    return ans;

}
int main(){
    int x,y;
    cout<<"Enter the value of a and b"<<endl;
    cin>>x>>y;
    cout<<"a to the Power b is: "<<pow(x,y)<<endl;
    return 0;
}