#include<bits/stdc++.h>
using namespace std;

class Student_Data{
    public:
    string name;
    int mids;
    float ends;
    bool pre_abs;

    float display_calculate_marks(){
        float total_marks;
        total_marks=mids*0.5+ends*0.75;
        return total_marks;
    }
};

int main(){

    Student_Data a,b,c;
    cout<<"enter the details of the 1st student"<<endl;
    cin>>a.name;
    cin>>a.mids;
    cin>>a.ends;
    cin>>a.pre_abs;
    cout<<"enter the details of the 2nd student"<<endl;
    cin>>b.name;
    cin>>b.mids;
    cin>>b.ends;
    cin>>b.pre_abs;
    cout<<"enter the details of the 3rd student"<<endl;
    cin>>c.name;
    cin>>c.mids;
    cin>>c.ends;
    cin>>c.pre_abs;

    cout<<"The details of the students are as follows "<<endl;

    cout<<"Name"<<"\t"<<a.name<<"\t"<<b.name<<"\t"<<c.name<<endl;
    cout<<"Mids"<<"\t"<<a.mids<<"\t"<<b.mids<<"\t"<<c.mids<<endl;
    cout<<"Ends"<<"\t"<<a.ends<<"\t"<<b.ends<<"\t"<<c.ends<<endl;
    cout<<"Attd"<<"\t"<<a.pre_abs<<"\t"<<b.pre_abs<<"\t"<<c.pre_abs<<endl;
    cout<<"Total"<<"\t"<<a.display_calculate_marks()<<"\t"<<b.display_calculate_marks()<<"\t"<<c.display_calculate_marks();
    return 0;
}