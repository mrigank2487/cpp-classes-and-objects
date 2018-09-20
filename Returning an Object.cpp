#include<iostream>
using namespace std;
class test
{
    int x,y;
public:
    void getxy()
    {
        cout<<"Enter two values: ";
        cin>>x>>y;
    }
    void display()
    {
        cout<<x<<" "<<y;
    }
    test sumobj(test t2)
    {
        test t4;
        t4.x=x+t2.x;
        t4.y=y+t2.y;
        return(t4);
    }
};
main()
{
    test t1,t2,t3;
    t1.getxy();
    t2.getxy();
    t3=t1.sumobj(t2);
    t3.display();

}
