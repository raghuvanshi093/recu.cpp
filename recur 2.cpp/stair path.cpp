#include<iostream>
using namespace std;
int StairPath(int n){
    if(n==2)
    return 2;
    if(n==1)
    return 1;
    return StairPath(n-1)+(StairPath(n-2));
}
int main(){
    cout<<StairPath(5);
    return 0;
}