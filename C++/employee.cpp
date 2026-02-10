#include<iostream>
#include<string>
using namespace std;
struct employee
{
    string name;
    int id;
    double salary;
};
 int main()
 {
    struct employee e[5];
    cout<<"enter emplyee details :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"enter name id salary :";
        cin>>e[i].name>>e[i].id>>e[i].salary;
    }
    cout<<"employee details are :"<<endl;
    cout<<"name"<<" "<<"id"<<" "<<"salary"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<e[i].name<<"\t"<<e[i].id<<"\t"<<e[i].salary<<endl;

    }
    return 0;
}