#include<iostream>
#include<string>
using namespace std;
struct books
{
    string title;
    string author_name;
    int price;
};
int main()
{
    struct books b[5];
    cout<<"enter 5 book details :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"title  author_name  price :";
        cin>>b[i].title>>b[i].author_name>>b[i].price;
    }
    cout<<"details of books :"<<endl;
    cout<<"title"<<" "<<"author_name"<<" "<<"price"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<b[i].title<<"\t"<<b[i].author_name<<"\t"<<b[i].price<<endl;
    }
        return 0;
}
