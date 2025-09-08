#include<iostream>
using namespace std;
int main(){
double s;
cin>>s;
double sum=0;
int number=0;
double a=2;
while(sum<s){
sum+=a;
a*=0.98;
number++;
}
cout<<number;
    return 0;
}