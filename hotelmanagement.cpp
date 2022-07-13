#include<iostream>
using namespace std;
int main()
{
    int choice;
    int quant;
    int roomprice, pastaprice,burgerprice,noodlesprice,shakeprice, chickenprice;
    roomprice=1200;
    pastaprice=350;
    burgerprice=300;
    noodlesprice= 250;
    shakeprice=200;
    chickenprice-700;
    int Qrooms=0, Qpasta=0, Qburger=0, Qnoodles=0, Qshake=0, Qchicken=0;// food we have
    int Srooms=0, Spasta=0, Sburger=0, Snoodles=0, Sshake=0, Schicken=0;//food we sold
    int total_rooms=0, total_pasta=0, total_burger=0, total_noodles=0, total_shake=0, total_chicken=0;//total pricing
    cout<<"\n\t Quantity of items we have";
    cout<<"\n Quantity of rooms we have";
    cin>>Qrooms;
    cout<<"\n Quantity of pasta we have";
    cin>>Qpasta;
    cout<<"\n Quantity of burger we have";
    cin>>Qburger;
    cout<<"\n Quantity of noodles we have";
    cin>>Qnoodles;
    cout<<"\n Quantity of shake we have";
    cin>>Qshake;
    cout<<"\n Quantity of chicken we have";
    cin>>Qchicken;

    m:
    cout<<"\n\t\t\tPlease select from the given menu options";
    cout<<"\n\n1) Rooms";
    cout<<"\n\n2) Pasta";
    cout<<"\n\n3) Burger";
    cout<<"\n\n4) Noodles";
    cout<<"\n\n5) Shake";
    cout<<"\n\n6) Chicken";
    cout<<"\n\n7) Information regarding total sales and collection"; //used by owner check total details of the day
    cout<<"\n\n8) Exit";

    cout<<"\n\n Please enter your choice";
    cin>>choice;
    
    switch(choice)
    {
        case 1:
        cout<<"\n\n Enter number of rooms you want ";
        cin>>quant;
        if (Qrooms-Srooms>=quant)
        {
            Srooms=Srooms+quant;
            total_rooms=total_rooms+quant*roomprice;
            cout<<"\n\n\t\t "<<quant<<"rooms have been alloted to you";

        }
        else
          cout<<"\n\n\t\t"<<Qrooms-Srooms<<"rooms are left in the hotel";
          break;

          case 2:
        cout<<"\n\n Enter Pasta Quantity ";
        cin>>quant;
        if (Qpasta-Spasta>=quant)
        {
            Spasta=Spasta+quant;
            total_pasta=total_pasta+quant*pastaprice;
            cout<<"\n\n\t\t "<<quant<<"pasta is the order";

        }
        else
          cout<<"\n\n\t\t"<<Qpasta-Spasta<<"pasta remaining in the hotel";
          break;

          
          case 3:
        cout<<"\n\n Enter Burger Quantity ";
        cin>>quant;
        if (Qburger-Sburger>=quant)
        {
            Sburger=Sburger+quant;
            total_burger=total_burger+quant*burgerprice;
            cout<<"\n\n\t\t "<<quant<<"burger is the order";

        }
        else
          cout<<"\n\n\t\t"<<Qburger-Sburger<<"burger remaining in the hotel";
          break;

          case 4:
        cout<<"\n\n Enter Noodles Quantity ";
        cin>>quant;
        if (Qnoodles-Snoodles>=quant)
        {
            Snoodles=Snoodles+quant;
            total_noodles=total_noodles+quant*noodlesprice;
            cout<<"\n\n\t\t "<<quant<<"noodle is the order";

        }
        else
          cout<<"\n\n\t\t"<<Qnoodles-Snoodles<<"noodles remaining in the hotel";
          break;

          case 5:
        cout<<"\n\n Enter Shake Quantity ";
        cin>>quant;
        if (Qshake-Sshake>=quant)
        {
            Sshake=Sshake+quant;
            total_shake=total_shake+quant*shakeprice;
            cout<<"\n\n\t\t "<<quant<<"shake is the order";

        }
        else
          cout<<"\n\n\t\t"<<Qshake-Sshake<<"shake remaining in the hotel";
          break;

          case 6:
        cout<<"\n\n Enter Chicken Quantity ";
        cin>>quant;
        if (Qchicken-Schicken>=quant)
        {
            Schicken=Schicken+quant;
            total_chicken=total_chicken+quant*chickenprice;
            cout<<"\n\n\t\t "<<quant<<"chicken is the order";

        }
        else
          cout<<"\n\n\t\t"<<Qchicken-Schicken<<"chicken remaining in the hotel";
          break;

          case 7:
        cout<<"\n\n\t Details of sales and collection of the day";
        cout<<"\n\n Number of rooms we had"<<Qrooms;
        cout<<"\n\n Number of rooms we rent "<<Srooms;
        cout<<"\n\n Reamining rooms"<<Qrooms-Srooms;
        cout<<"\n\n Total room collection:"<<total_rooms;

        cout<<"\n\n Number of pasta we had"<<Qpasta;
        cout<<"\n\n Number of pasta we gave "<<Spasta;
        cout<<"\n\n Pasta rooms"<<Qpasta-Spasta;
        cout<<"\n\n Total pasta collection:"<<total_pasta;

        cout<<"\n\n Number of burger we had"<<Qburger;
        cout<<"\n\n Number of burger we rent "<<Sburger;
        cout<<"\n\n Reamining burher"<<Qburger-Sburger;
        cout<<"\n\n Total burger collection:"<<total_burger;

        cout<<"\n\n Number of noodles we had"<<Qnoodles;
        cout<<"\n\n Number of noodles we rent "<<Snoodles;
        cout<<"\n\n Reamining noodles"<<Qnoodles-Snoodles;
        cout<<"\n\n Total noodles collection:"<<total_noodles;

        cout<<"\n\n Number of shake we had"<<Qshake;
        cout<<"\n\n Number of shake we rent "<<Sshake;
        cout<<"\n\n Reamining shake"<<Qshake-Sshake;
        cout<<"\n\n Total shake collection:"<<total_shake;

        cout<<"\n\n Number of chicken we had"<<Qchicken;
        cout<<"\n\n Number of chicken we rent "<<Schicken;
        cout<<"\n\n Reamining chicken"<<Qchicken-Schicken;
        cout<<"\n\n Total chicken collection:"<<total_chicken;

        case 8:
        exit(0);

        default:
        cout<<"Please select the options mentioned above!";
        
    } 
    goto m;



}
