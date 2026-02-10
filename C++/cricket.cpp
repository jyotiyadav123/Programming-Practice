#include<iostream>
#include <string>
using namespace std;
struct cricket
{
    string player_name;
    int runs;
    int jersy_no;
};
int main()
{
    struct cricket c[5];
    cout<<"enter 5 cricketers data :"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<"player_name runs jersy_no :"<<endl;
        cin>>c[i].player_name>>c[i].runs>>c[i].jersy_no;
    }
    cout<<"details of cricketers :"<<endl;
    cout<<"player_name"<<" "<<"runs"<<" "<<"jersy_no"<<endl;
    for(int i=0;i<5;i++)
    {
        cout<<c[i].player_name<<"\t"<<c[i].runs<<"\t"<<c[i].jersy_no<<endl;
    }
    return 0;
}