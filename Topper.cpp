#include<iostream>
#include<conio.h>
using namespace std;
class student
{
private:
    char name [10],grade;
    int rollno,marks;
public:
    void view(int n);
    void getdata();
    int sendmarks();
    void display();
};
int x,i,maxi=0,n,m,index=0;
main ()
{
    student s[3];
    char ch;
    do
    {
    cout<<"Press 1 to enter details"<<endl;
    cout<<"Press 2 to view details of any student"<<endl;
    cout<<"Press 3 to view details of the topper"<<endl;
    cin>>x;
    switch(x)
    {
    case 1:
        for(i=0;i<3;i++)
            s[i].getdata();
            break;
    case 2:
        cout<<"Enter roll no";
        cin>>n;
        for (int j=0;j<3;j++)
            s[j].view(n);
        break;
    case 3:
        for (m=0;m<3;m++)
        {
            if (maxi<s[m].sendmarks())
            {
             index=m;
            }

        }
        s[index].display();
       break;
    }
    cout<<"Do you want to continue? (Y/N) "<<endl;
    ch=getch();
  }while(ch!='n'||ch!='N');
}
void student::getdata()
{
    cout<<"Enter name: ";
    cin>>name;
    cout<<"Enter Roll number: ";
    cin>>rollno;
    cout<<"Enter marks: ";
    cin>>marks;
    if (marks>=90)
        grade='A';
    else if (marks>=70&&marks<90)
        grade='B';
    else if (marks>=50&&marks<70)
        grade='C';
    else if (marks>=30&&marks<50)
        grade='D';
    else if (marks>30)
        grade='F';
}
 void student::view(int n)
{

        if (n==rollno)
            display();
}
int student::sendmarks()
    {
     return(marks);
    }

void student::display()
{
        cout<<"Name is "<<name<<endl;
        cout<<"Roll number is "<<rollno<<endl;
        cout<<"Marks are "<<marks<<endl;
        cout<<"Grade is "<<grade<<endl;
}



