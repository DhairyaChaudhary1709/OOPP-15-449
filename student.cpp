#include <iostream>
using namespace std;
class Studentdetails{
    public:
    string name;
    int rollno;
    string branch;
    int section;
    int marks[5];
    int total;
    float percentage;

    void input(){
        cout<<"ENter name:";
        cin>>name;
        cout<<"Enter rollno:";
        cin>>rollno;
        cout<<"ENter branch:";
        cin>>branch;
        cout<<"Enter section";
        cin>>section;
        for(int i=0;i<5;i++){
            cin>>marks[i];
        }
    }

    void calculate(){
        total=0;
        for(int i=0;i<5;i++){
            total+=marks[i];
        }
        percentage=total/5.0;
    }

    void display(){
        cout<<name<<endl;
        cout<<rollno<<endl;
        cout<<branch<<endl;
        cout<<section<<endl;
        for(int i=0;i<5;i++){
            cout<<marks[i]<<" ";
        }
        cout<<endl;
        cout<<"Your combine total marks out of 500 is:"<<total<<endl;
        cout<<"Percentage is:"<<percentage<<endl;
    }
};
int main(){
    Studentdetails s;
    s.input();
   s.calculate();
   s.display();
}