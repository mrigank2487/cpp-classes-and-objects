#include<iostream>
using namespace std;
class time
{
 int h,m;
 public:
     void gettime()
     {
      cout<<"Enter time in hours and minutes: ";
      cin>>h>>m;
     }
     time sumtime(time T2)
     {
      time T4;
      int Q;
      T4.m=m+T2.m;
      Q=T4.m/60;
      T4.h=h+T2.h+Q;
      T4.m=T4.m % 60;
      return(T4);
     }
     void display()
     {
      cout<<"Total is: "<<h<<" hours and ";
      cout<<m<<" minutes.\n\n\n\n\n\n";
     }
};
 main()
  {
    time t1,t2,t3;
    t1.gettime();
    t2.gettime();
    t3 =t1.sumtime(t2);
    t3.display();
  }
