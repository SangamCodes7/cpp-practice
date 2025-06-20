#include<iostream>

using namespace std;
int sum(int a,int b);

int main (){
    int a,b;

    cout<<"ENTER THE NUMBER A : "<<endl ;
    cin>>a;
    cout<<"ENTER THE NUMBER B : "<<endl ;
    cin>>b;
cout <<"THE SUM OF TWO NUMBER IS : "<<sum (a ,b);

return 0;

}

int sum(int a, int b) {
    return a+b;

}