#include<iostream>
using namespace std;
int fact (int a){
    int ans=1;
    for(int i=1;i<=a;i++){
      ans= ans*i;
    }
    return ans;

}
int nCr(int n, int r){
     int num= (fact(n));
     int denom= fact(r)*fact(n-r) ;
     return num/denom;
}      
int main(){
    int a,b;
    cout<<"Enter the value for 'n' and 'r' ^(n>r) "<<endl;    
    cin>>a>>b;
    cout<<"The Result is : "<<nCr(a,b)<<endl;
    return 0;
}