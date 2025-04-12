#include<iostream>
using namespace std;
int Power(int x, int n){
    if (n==1)return x;

    int ans = Power(x,n/2);
    if(n%2==0)
        return ans*ans ;

    
    else
        return ans*ans*x;
    
}
int main(){
    cout<<Power(2,5);
    return 0;
}