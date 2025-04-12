 #include<iostream>
 using namespace std;
 int SumofDigits(int num){
    if(num==0)
    return 0;
    return (num%10)+SumofDigits(num/10);
 }
 int main(){
    int num;
    cout<<"Enter the Postive Num";

    cin>>num;

    cout<<"SUm of Digits :"<<SumofDigits(num);
 }