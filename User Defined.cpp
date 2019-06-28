#include <iostream>
using namespace std;
class student
{
    public:
    int rno;
    float percent;
    char name[20];
    void accept()
    {
        cout<<"Enter Student's Name \n";
        cin>>name;
        cout<<"Enter Student's Roll Number \n";
        cin>>rno;
        cout<<"Enter Student's Percentage \n";
        cin>>percent;
    }
    void display()
    {
        cout<<name<<" ( "<<rno<<" )  "<<"has Scored "<<percent<<"% in his Mid Term Exams.";
    }
};
int main()
{
    student a;
    a.accept();
    a.display();
    return 0;
}
