#include<iostream>
#include<string>
using namespace std;
struct student
{
    string name;
    int roll_no;
    int marks;
};
int main()
{
    struct student s[5];
    cout<<"Enter the details of students:"<<endl;
    for(int i=0;i<5;i++)        
    {
        cout<<"Enter name of student "<<i+1<<": ";
        cin>>s[i].name;
        cout<<"Enter roll number of student "<<i+1<<": ";
        cin>>s[i].roll_no;
        cout<<"Enter marks of student "<<i+1<<": ";
        cin>>s[i].marks;
    }
    cout<<"\nDetails of students are:"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"Student "<<i+1<<":"<<endl;
        cout<<"Name: "<<s[i].name<<endl;
        cout<<"Roll Number: "<<s[i].roll_no<<endl;
        cout<<"Marks: "<<s[i].marks<<endl;
    }   

    return 0;
}