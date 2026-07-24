#include<iostream>
using namespace std;

void swapbyvalue(int x,int y){
    int temp=x;
    x=y;
    y=temp;
    cout<<"Call by value is: "<<x<<" and "<<y<<endl;
}

void swapbyrefrence(int &x,int &y){
    int temp= x;
    x = y;
    y = temp;
    cout<<"Call by refrence value is: "<<x<<" and "<<y<<endl;
}

void swapbyaddress(int *x,int *y){
    int temp=*x;
    *x = *y;
    *y = temp;
    cout<<"Call by address is: "<<*x<<" and "<<*y<<endl;
}
void show(int x,int y){
    cout<<"Orignal value of x is : "<<x<<endl;
    cout<<"Orignal value of y is : "<<y<<endl;
}
int main(){
    int x,y;
    cin>>x;
    cin>>y;
    swapbyvalue(x,y);
    show(x,y);
    swapbyrefrence(x,y);
    show(x,y);
    swapbyaddress(&x,&y);
    show(x,y);

    
}