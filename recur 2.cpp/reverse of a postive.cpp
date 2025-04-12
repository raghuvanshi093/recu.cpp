#include<iostream>
using namespace std;
void Reverse(int num){
    if(num==0)
    return;
    cout<<num%10;
    Reverse(num/10);
}
int main(){
    int num;
    cout<<"Enter the Postive Num";
    cin>>num;
    cout<<"Reverse of Digits :";
    Reverse(num);
}