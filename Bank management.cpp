#include<stdlib.h>
#include<fstream.h>
#include<dos.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>
#include<ctype.h>
#include<string.h>
 void frame()
{
 int i,j;
 for(i=3,j=1;i<78;i++,j++)
 {
  gotoxy(i,2);
  cout<<char(205);
  sound(j*10);
  delay(10);
  nosound();
  }
  nosound();

  for(i=3;i<47;i++,j++)
  {
  gotoxy(77,i);
  cout<<char(205);
  sound(j*20);
  delay(10);
  nosound();
  }
  nosound();
  for(i=77;i>2;i--,j--)
  {
  gotoxy(i,47);
  cout<<char(205);
  sound(j*20);
  delay(10);
  nosound();
  }
  nosound();
  for(i=46;i>2;i--,j--)
  {gotoxy(3,i);
  cout<<char(205);
  sound(j*10);
  delay(10);
  nosound();
  }
  nosound();
  }

class bbank{private:
		   int accno;
		   char n[20],actype,mob[11],add[30];
		   float balance;
	    public:
		  void accept()
		      {clrscr();
		       frame();
		       gotoxy(25,15);
		       cout<<"Enter the Account No"<<":-";
		       cin>>accno;
			 gotoxy(25,17);
		       cout<<"Enter the Name"<<":-";
		       cin>>n;
			while (1)
			     {  gotoxy(25,19);
			      cout<<"Enter the Account Type as S";
			      gotoxy(25,20);
			      cout<<"for Saving or C for Current Account"<<":-";
			      cin>>actype;
			      if (toupper(actype)=='S'||toupper(actype)=='C')
				  break;
			      else
				  {  gotoxy(25,22);
				   cout<<"Enter S or C Only"<<'\t';
			     } }
			  gotoxy(25,22);
			cout<<"Enter the Balance Amount"<<":-";
			cin>>balance;
			  gotoxy(25,24);
			cout<<"Enter Your Mobile Number"<<":-";
			cin>>mob;
			  gotoxy(25,26);
			cout<<"Enter Your Address"<<":-";
			cin>>add;
		      }
		  void display()
		       {frame();
			gotoxy(25,17);
			cout<<"Account Number";
			gotoxy(28,17);
			cout<<":-";
			gotoxy(31,17);
			cout<<accno;
			gotoxy(25,19);
			cout<<"Name";
			gotoxy(28,19);
			cout<<":-";
			gotoxy(31,19);
			cout<<n;
			gotoxy(25,21);
			cout<<"Account Type";
			gotoxy(28,21);
			cout<<":-";
			gotoxy(31,21);
			cout<<actype;
			gotoxy(25,23);
			cout<<"Balance Amount";
			gotoxy(28,23);
			cout<<":-";
			gotoxy(31,23);
			cout<<balance;
			gotoxy(25,25);
			cout<<"Mobile No";
			gotoxy(28,25);
			cout<<":-";
			gotoxy(31,25);
			cout<<mob;
			gotoxy(25,27);
			cout<<"Address";
			gotoxy(28,27);
			cout<<":-";
			gotoxy(31,27);
			cout<<add;
			gotoxy(40,40);
			cout<<"Press any key..... ";
			getch();
		       }
		  void deposit(float a)
		       {clrscr();
			balance=balance+a;
			gotoxy(40,40);
			cout<<"Your Amount is Deposited";
		       }
		  void withdraw(float a)
		       {clrscr();
			if (balance-1000>=a)
			   {balance=balance-a;
			    gotoxy(40,40);
			    cout<<"Your Amount is Withdrwan";
			   }
			else
			   {gotoxy(40,40);
			    cout<<"Withdrwal is Not Possible";
			   }
		       }
		  void modify()
		       {clrscr();
			frame();
			gotoxy(25,15);
			cout<<"Enter the Modified Data";
			gotoxy(25,17);
			cout<<"Enter the Account No"<<'\t';
			cin>>accno;
			gotoxy(25,19);
			cout<<"Enter the Name"<<'\t';
			cin>>n;
			while (1)
			      {gotoxy(25,21);
			       cout<<"Enter the Account Type as S";
				gotoxy(25,22);
				cout<<"for Saving Account or C for Current Account"<<'\t';
			       cin>>actype;
			       if (toupper(actype)=='S'||toupper(actype)=='C')
				   break;
			       else
				  {gotoxy(25,22);
				   cout<<"Enter S or C Only";
			      }   }
			gotoxy(25,24);
			cout<<"Enter the Balance Amount"<<'\t';
			cin>>balance;
			gotoxy(25,26);
			cout<<"Enter Your Mobile Number"<<'\t';
			cin>>mob;
			gotoxy(25,28);
			cout<<"Enter Your Address"<<'\t';
			cin>>add;
			gotoxy(40,40);
			cout<<"Press any key..... ";
			getch();
		       }
		  int search(int a)
		      {if (accno==a)
			  return 1;
		       else
			  return 0;
		      }
	   };

class loan{int accnol,month;
	   char nl[20],actypel,mobl[11],addl[30];
	   long lamt ,installment,ramt,rate,time,interest;

		  public:
			void acceptl()
	   {clrscr();
	   frame();
	   gotoxy(25,15);
	   cout<<"Enter the Account No"<<'\t';
	   cin>>accnol;
	   gotoxy(25,17);
	   cout<<"Enter the Name"<<'\t';
	   cin>>nl;
	   while (1)
	    {gotoxy(25,19);
	   cout<<"Enter the Account Type as S for ";
	   gotoxy(25,20);
	   cout<<"Saving Account or C for Current Account"<<'\t';
	   cin>>actypel;
	   if (toupper(actypel)=='S'||toupper(actypel)=='C')
	   break;
	     else
	      {gotoxy(25,21);
	       cout<<"Enter S or C Only";
	       }}
	   gotoxy(25,23);
	   cout<<"Enter Your Mobile Number"<<'\t';
	   cin>>mobl;
	   gotoxy(25,25);
	   cout<<"Enter Your Address"<<'\t';
	   cin>>addl;
	   gotoxy(40,40);
			cout<<"Press any key..... ";
			getch();
	   }
		   void issue()
	   {clrscr();
	   frame();
	   acceptl();
	   gotoxy(25,27);
	   cout<<"Enter the Loan Amount"<<'\t';
	   cin>>lamt;
	   gotoxy(25,29);
	   cout<<"Enter the Rate of Loan Amount"<<'\t';
	   cin>>rate;
	   gotoxy(25,31);
	   cout<<"Enter the Time Period of Loan Amount in Years"<<'\t';
	   cin>>time;
	   interest=(lamt*rate*time)/100;
	   ramt=lamt+interest;
	   gotoxy(25,33);
	   cout<<"Loan is Issued"<<endl;
	   gotoxy(25,35);
	   cout<<"Amount to be Deposited within the given Time="<<ramt<<endl;
	  gotoxy(40,40);
	   cout<<"Press any key..... ";
	  getch();
	   }
		   void returnl()
	   {clrscr();
	    frame();
	     month=12*time;
	     installment=lamt/month;
	     gotoxy(25,15);
	     cout<<"Remaining Loan before paying installment="<<ramt;
	     gotoxy(25,17);
	    cout<<"Installment of each Month to be given="<<installment;
	    gotoxy(25,19);
	    cout<<"Enter the Installment Amount to be Given"<<'\t';
	    cin>>installment;
	    ramt=ramt-installment;
	    gotoxy(25,21);
	    cout<<"Remaining Loan after paying installment="<<ramt;
	    if (ramt==0)
	    gotoxy(40,40);
	    cout<<"Full Loan is Returned";
	    gotoxy(40,40);
	    cout<<"Press any key..... ";
	    getch();
	    }
		   void displayl()
	     { frame();
	       gotoxy(25,15);
	      cout<<"Account No-"<<'\t'<<accnol;
	      gotoxy(25,17);
	      cout<<"Name-"<<'\t'<<nl;
	      gotoxy(25,19);
	      cout<<"Account Type-"<<'\t'<<actypel;
	      gotoxy(25,21);
	      cout<<"Loan Amount-"<<'\t'<<lamt;
	      gotoxy(25,23);
	      cout<<"Mobile No-"<<'\t'<<mobl;
	      gotoxy(25,25);
	      cout<<"Address-"<<'\t'<<addl;
	      gotoxy(25,27);
	      cout<<"Rate of Loan Amount-"<<'\t'<<rate;
	      gotoxy(25,29);
	      cout<<"Time Period of Loan Amount-"<<'\t'<<time;
	      gotoxy(40,40);
	      cout<<"Press any key..... ";
	      getch();
	   }
		  void modifyl()
	   {clrscr();
	    frame();
	    gotoxy(25,15);
	   cout<<"Enter the Modified Data";
	   gotoxy(25,17);
	   cout<<"Enter the Account No"<<'\t';
	   cin>>accnol;
	   gotoxy(25,19);
	   cout<<"Enter the Name"<<'\t';
	   cin>>nl;
	   while (1)
	   {gotoxy(25,21);
	   cout<<"Enter the Account Type as S";
	   gotoxy(25,22);
	   cout<<" for Saving Account or C for Current Account"<<'\t';
	   cin>>actypel;
	   if (toupper(actypel)=='S'||toupper(actypel)=='C')
	   break;
	     else
	      {gotoxy(25,23);
	       cout<<"Enter S or C Only";
	       }}
	   gotoxy(25,25);
	   cout<<"Enter the Loan Amount"<<'\t';
	   cin>>lamt;
	   gotoxy(25,27);
	   cout<<"Enter Your Mobile Number"<<'\t';
	   cin>>mobl;
	   gotoxy(25,29);
	   cout<<"Enter Your Address"<<'\t';
	   cin>>addl;
	   gotoxy(25,31);
	   cout<<"Enter the Rate of Loan Amount"<<'\t';
	   cin>>rate;
	   gotoxy(25,33);
	   cout<<"Enter the Time Period of Loan Amount"<<'\t';
	   cin>>time;
	   gotoxy(40,40);
	   cout<<"Press any key..... ";
	   getch();
	   }

	      int searchl(int a)
	   {if (accnol==a)
	     return 1;
	   else
	      return 0;
	   }
   };
void main()
{clrscr();

fstream obj,obj1;
bbank b;
loan k;
int l,a,ch,c=0,r;
char la;
float amt;
char chmain;
int i,j;
textmode(C40);
textcolor(1);

gotoxy(17,11);
char y1[]="Loading...";
cputs(y1);
char y2='-';
textcolor(100);


for(i=0;i<3;i++)
{
 for(j=17;j<28;j++)
 {
  gotoxy(j,14);
  clreol();
  putch(y2);
  delay(200);
  }
  clreol();
  delay(250);
 }
 textcolor(3);

 char z[]="       WELCOME TO";
 char z1[]="ST.MARY'S INTER COLLEGE";
 for(i=1;i<12;i++)
 {
 clrscr();
 gotoxy(10,i);
 cputs(z);
 gotoxy(10,i+1);
 cputs(z1);
 sound(i*50);
 delay(150);
 }
 nosound();
 for(i=4;i<39;i+=2)
 {
  gotoxy(i,17);
  cout<<char(2);
 }
 for(i=1;i<200;i=i+10)
 {
  sound(i*20);
  delay(175);

  nosound();
  }
  nosound();


    textmode(3);
    textmode(C4350);
    textbackground(BLUE);
    textcolor(GREEN);
    frame();
	 gotoxy(4,3);
	    cout<<"*****************ST MARY'S INTER COLLEGE******************";
	    gotoxy(24,5);
	    cout<<"****WELCOME TO THE PROJECT OF C++****";
	    gotoxy(22,8);
	    cout<<" ON  BANK  MANAGEMENT SYSTEM";
	    gotoxy(10,17);
	    cout<<"UNDER THE GUIDANCE OF-" ;
	    gotoxy(10,20);
	    cout<<   "MR ANIL KUMAR" ;
	    gotoxy(50,17);
	    cout<<"Submitted by-";
	    gotoxy(50,20);
	    cout<<"ABHISHT DIXIT"<<endl;
	    gotoxy(18,25);
	    cout<<"WELCOME TO BANK MANAGEMENT SYSTEM"<< '\t'<<'\t'<<'\t'<<endl;
	    delay(2400);

	     clrscr();

do
  { clrscr();
   frame();
    gotoxy(25,10);
     cout<<'\t'<<"MAIN MENU";
     gotoxy(25,13);
    cout<<"1-Add Records"<<endl;
    gotoxy(25,16);
    cout<<"2-Deposit"<<endl;
    gotoxy(25,19);
    cout<<"3-Withdraw"<<endl;
    gotoxy(25,22);
    cout<<"4-Display A Single Account Details"<<endl;
    gotoxy(25,25);
    cout<<"5-Display All Account Holder Details"<<endl;
    gotoxy(25,28);
    cout<<"6-Loan Section"<<endl;
    gotoxy(25,31);
    cout<<"7-Modify An Account"<<endl;
    gotoxy(25,34);
    cout<<"8-Delete An Account"<<endl;
    gotoxy(25,37);
    cout<<"9-Exit"<<endl;
    gotoxy(25,40);
    cout<<"Enter Your Choice";
    cin>>ch;

    switch (ch)
      {case 1:
	    obj.open("bbank.dat",ios::binary|ios::app);
	    b.accept();
	    obj.write((char *)&b,sizeof(b));
	    obj.close();
	    clrscr();
	    break;

      case 2:
	    clrscr();
	    obj.open("bbank.dat",ios::binary|ios::in|ios::out);
	    gotoxy(25,15);
	    cout<<"Enter the Account No"<<'\t';
	    cin>>a;
	    gotoxy(25,17);
	    cout<<"Enter the Amount to be Deposited"<<'\t';
	    cin>>amt;
	    c=0;
	    while (!obj.eof())
	    {obj.read((char *)&b,sizeof(b));
	    l=b.search(a);
	    c++;
	    if (l==1)
	    {b.deposit(amt);
	     obj.seekp((c-1)*sizeof(b),ios::beg);
	     obj.write((char *)&b,sizeof(b));
	     break;
	     }
	    }
	    if (l==0)
	    {gotoxy(25,25);
	    cout<<"Given Account No is Not Found";
	    }
	    obj.close();
	    break;

     case 3:
	   clrscr();
	   obj.open("bbank.dat",ios::binary|ios::in|ios::out);
	   gotoxy(25,15);
	   cout<<"Enter the Account No"<<'\t';
	   cin>>a;
	   gotoxy(25,17);
	   cout<<"Enter the Amount to be Withdrwan"<<'\t';
	   cin>>amt;
	   c=0;
	   while (!obj.eof())
	   {obj.read((char *)&b,sizeof(b));
	   l=b.search(a);
	   c++;
	   if (l==1)
	   {b.withdraw(amt);
	   obj.seekp((c-1)*sizeof(b),ios::beg);
	   obj.write((char *)&b,sizeof(b));
	   break;
	   }
     }
	   if (l==0)
	   {gotoxy(25,25);
	   cout<<"Given Account No is Not Found";
	   }
	    obj.close();
	    break;

     case 4:
	    clrscr();
	    frame();
	    obj.open("bbank.dat",ios::binary|ios::in);
	    gotoxy(25,15);
	    cout<<"Enter the Account Number"<<'\t';
	    cin>>a;
	    while (!obj.eof())
	    {obj.read((char *)&b,sizeof(b));
	    l=b.search(a);
	    if (l==1)
	    {b.display();
	    gotoxy(22,7);
	    break;
	    }
	 }
	   if (l==0)
	   {gotoxy(25,25);
	   cout<<"Given Account Number is Not Found";
	   }
	   obj.close();
	   break;

     case 5:
	    clrscr();
	    obj.open("bbank.dat",ios::binary|ios::in);
	    gotoxy(25,15);
	    cout<<"All Account Holders Details Are-";
	    while (!obj.eof())
	    {obj.read((char*)&b,sizeof(b));
	    if (obj.eof())
	    break;
	    b.display();
	    gotoxy(40,40);
	    }
	    obj.close();
	    break;

     case 6:
	 clrscr();
	 frame();
	 gotoxy(25,15);
	 cout<<'\t'<<"LOAN SECTION";
	 gotoxy(25,17);
	 cout<<"a)-Issue A Loan";
	 gotoxy(25,19);
	 cout<<"b)-Return Loan Amount";
	 gotoxy(25,21);
	 cout<<"c)-Display Single Loan Details";
	 gotoxy(25,23);
	 cout<<"d)-Display All Loan Details";
	 gotoxy(25,25);
	 cout<<"e)-Modify Loan Details";
	 gotoxy(25,27);
	 cout<<"f)-Delete Loan Details";
	 gotoxy(25,29);
	 cout<<"Enter Your Choice";
	 cin>>la;
	 switch (la)
	    { case 'a':
		  clrscr();
		  frame();
		  obj.open("loan.dat",ios::binary|ios::app);
		  k.issue();
		  obj.write((char *)&k,sizeof(k));
		  obj.close();
		  gotoxy(40,40);
			cout<<"Press any key..... ";
			getch();
		  break;


	     case 'b':
		   clrscr();
		   frame();
		   obj.open("loan.dat",ios::binary|ios::in|ios::out);
		   c=0;
		   gotoxy(25,15);
		   cout<<"Enter the Account No of which the";
		   gotoxy(25,16);
		   cout<<" Loan Details are to be Returned"<<'\t';
		   cin>>a;
		   while (!obj.eof())
		  {obj.read((char *)&k,sizeof(k));
		   c++;
		   r=k.searchl(a);
		   if (r==1)
		   {k.returnl();
		   obj.seekp((c-1)*sizeof(k),ios::beg);
		   obj.write((char *)&k,sizeof(k));
		   break;
		  }
		}
		if (r==0)
		{gotoxy(25,25);
		cout<<"Given Account Number is Not Found";
		}
		obj.close();
		gotoxy(25,25);
		cout<<"Loan is Returned";
	     break;

	     case 'c':
		    clrscr();
		    frame();
		    obj.open("loan.dat",ios::binary|ios::in);
		    gotoxy(25,15);
		    cout<<"Enter the Account Number"<<'\t';
		    cin>>a;
		    while (!obj.eof())
		    {obj.read((char *)&k,sizeof(k));
		    r=k.searchl(a);
		    if (r==1)
		    {k.displayl();
		    break;
		   }
		 }
	       if (r==0)
	       {gotoxy(25,25);
	       cout<<"Given Account Number is Not Found";
	     }
	      obj.close();
		break;

	    case 'd':
		    clrscr();
		    frame();
		    obj.open("loan.dat",ios::binary|ios::in);
		    gotoxy(25,13);
		    cout<<"All Loan Details Are-";
		    while (!obj.eof())
		    {obj.read((char *)&k,sizeof(k));
		    if (obj.eof())
		    break;
		    k.displayl();
		    gotoxy(40,40);
		    cout<<"Press any key.....";
		    getch();
		  }
		 obj.close();
		 break;

	   case 'e':
		   clrscr();
		   frame();
		   obj.open("loan.dat",ios::binary|ios::in|ios::out);
		   c=0;
		   gotoxy(25,15);
		   cout<<"Enter the Account No of which ";
		   gotoxy(25,16);
		   cout<<"the Loan Details are to be Modified"<<'\t';
		   cin>>a;
		   while (!obj.eof())
		  {obj.read((char *)&k,sizeof(k));
		   c++;
		  r=k.searchl(a);
		  if (r==1)
		  {k.modifyl();
		  obj.seekp((c-1)*sizeof(k),ios::beg);
		  obj.write((char *)&k,sizeof(k));
		  break;
		  }
		}
		 if (r==0)
		 {gotoxy(25,25);
		 cout<<"Given Account Number is Not Found";
		 }
		 obj.close();
		 gotoxy(25,25);
		 cout<<"Loan Details Are Modified";
		 break;

	   case 'f':
		   clrscr();
		   frame();
		   obj.open("loan.dat",ios::binary|ios::in|ios::out);
		   c=0;
		   gotoxy(25,15);
		   cout<<"Enter the Account No of which ";
		   gotoxy(25,16);
		   cout<<"Loan Details are to be Deleted"<<'\t';
		   cin>>a;
		   obj1.open("temp1.dat",ios::binary|ios::out);
		   while (!obj.eof())
		   {obj.read((char *)&k,sizeof(k));
		   if(obj.eof())
		   break;
		   r=k.searchl(a);
		   if (r==0)
		   {obj1.write((char *)&k,sizeof(k));
		   }
		else
		  c=1;
		}
		 obj.close();
		 obj1.close();
		 if (c==0)
		 {gotoxy(25,25);
		 cout<<"Given Account No is Not Found";
		 }
		 else
		{remove("loan.dat");
		rename("temp1.dat","loan.dat");
		gotoxy(25,25);
		cout<<"The Loan Details are Deleted";
		gotoxy(40,40);
		cout<<"Press any key..... "<<'\n';
		getch();
	       }
		break;

	default:
	 gotoxy(25,25);
	 cout<<"WRONG CHOICE IN LOAN SECTION";
     }
	  break;

     case 7:
	    clrscr();
	    obj.open("bbank.dat",ios::binary|ios::in|ios::out);
	    c=0;
	    gotoxy(25,15);
	    cout<<"Enter the Account Number to be Modified"<<'\t';
	    cin>>a;
	    while (!obj.eof())
	    {obj.read((char *)&b,sizeof(b));
	    c++;
	    l=b.search(a);
	    if (l==1)
	    {b.modify();
	     obj.seekp((c-1)*sizeof(b),ios::beg);
	     obj.write((char *)&b,sizeof(b));
	    break;
	    }
	  }
	     if (l==0)
	     {gotoxy(25,25);
	     cout<<"Given Account Number is Not Found";
	     }
	     obj.close();
	     gotoxy(25,25);
	     cout<<"Account Details Are Modified";
	     gotoxy(40,40);
			cout<<"Press any key..... ";
			getch();
	     break;

     case 8:
	    clrscr();
	    obj.open("bbank.dat",ios::binary|ios::in);
	    c=0;
	    gotoxy(25,15);
	    cout<<"Enter the Account No to be Deleted"<<'\t';
	    cin>>a;
	    obj1.open("temp.dat",ios::binary|ios::out);
	    while (!obj.eof())
	    {obj.read((char *)&b,sizeof(b));
	    if(obj.eof())
	    break;
	    l=b.search(a);
	    if (l==0)
	  {obj1.write((char *)&b,sizeof(b));
	  }
	  else
	    c=1;
	}
	  obj.close();
	  obj1.close();
	  if (c==0)
	 { gotoxy(25,25);
	  cout<<"Given Account No is Not Found";
	  }
	  else
	    {remove("bbank.dat");
	     rename("temp.dat","bbank.dat");
	     gotoxy(25,25);
	     cout<<"Account Details Are Deleted";
	     gotoxy(40,40);
	     cout<<"Press any key..... "<<'\n';
	     getch();
	     }
	    break;

     case 9:
	    exit(0);

     default:
	gotoxy(40,40);
	cout<<"WRONG CHOICE!";
	}
   }while(1);
}

