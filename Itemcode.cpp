#include<iostream>
#include<conio.h>
using namespace std;
class items
{
 private:
    int itemcode[10];
    int itemprice[10];
    int i;
 public:
    void getitems()
    {
         cout<<"\a";
           cout<<"Enter item code of item "<<i+1<<": ";
           cin>>itemcode[i];
           cout<<"\a";

           cout<<"Enter item price of item "<<i+1<<": ";
           cin>>itemprice[i];
           cout<<"\a";

           cout<<"\n\n";
           i++;
         cout<<"\n\n\n";
    }
    void display()
    {
        int k=1,t;
        for(t=0;t<i;t++)
         {
          cout<<"\t\tFor item"<<k<<"\n\a\a\a";
          cout<<"\tItem code :"<<itemcode[t]<<"\n";
          cout<<"\tItem price :Rs."<<itemprice[t]<<"\n\n";
          k++;
          cout<<"\n\n";
         }
    }
    void sum()
    {
         int sum=0,q;
         for(q=0;q<i;q++)
          sum = sum + itemprice[q];
         cout<<"\n\n total = Rs."<<sum<<"\n\n\a\a\a";
    }
    void removes()
    {
        int code,sumup=0,f,u,h;
        cout<<"Enter code of the item to be removed\n";
        cin>>code;

        for(h=0;h<i;++h)
         {
           if(itemcode[h]==code)
            itemprice[h]=0;
         }

            if(h==8)
             {
              cout<<"\nYou have not bought this item.\n";
             }
            else
             {
               cout<<"\n\tThe new bill is:\n";
               for(h=0;h<i;h++)
                cout<<"Item : "<<itemcode[h]<<"\tItem price : Rs"<<itemprice[h]<<"\n";
             }

        for(f=0;f<i;f++)
          sumup = sumup + itemprice[f];
         cout<<"\n\t\t\Your Total amount is Rs."<<sumup;
         cout<<"\n\n";
       }
    void initialise()
    {
     i=0;
    }
};

 main()
 {
     items i;
     int c;
     char ch=' ';

     i.initialise();

     cout<<"\a\n\n\t\t\t\t WELCOME \n\n\a";

     while(ch!='n')
      {
       cout<<"Press 1 for entering items\n";
       cout<<"Press 2 for total\n";
       cout<<"Press 3 for displaying items\n";
       cout<<"Press 4 for removing items\n\n";
       cout<<"Make your choice and press enter\n";
       cin>>c;

       switch (c)
        {
         cout<<"\n";
        case 1:
         cout<<"\a\a";
         i.getitems();

        case 2:
         cout<<"\a\a";
         i.sum();
         cout<<"do you want to continue?(y/n)\n\a";
         ch=getch();
         break;
        case 3:
         cout<<"\a\a";
         i.display();
         cout<<"do you want to continue?(y/n)\n\a";
         ch=getch();
         break;
        case 4:
         cout<<"\a\a";
         i.removes();
         cout<<"do you want to continue?(y/n)\a\n";
         ch=getch();
         break;
     }

    }

}


