#include<iostream>
#include<string>
using namespace std;
class student
{
    public:
    string name;
    int roll_no;
    float marks;
    void setdata()
    {
        cout<<"name roll_no marks :";
        cin>>name>>roll_no>>marks;
    }
void display()
{
    cout<<"Name :"<<name<<"Roll_no :"<<roll_no<<"Marks :"<<marks<<endl;
    cout<<"*******"<<endl;

}
};
int main()
{
    int i,n;
    cout<<"enter value of n :";
    cin>>n;
    class student s[n];
    cout<<"enter student data"<<endl;
    for(i=0;i<n;i++)
    {
        cout<<"enter student no :"<<i+1<<endl;
        s[i].setdata();
    }
    cout<<"display data";
    for(i=0;i<n;i++)
    {
    s[i].display();
}
return 0;
}
