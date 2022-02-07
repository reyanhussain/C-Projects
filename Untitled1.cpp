#include "iostream"
#include <conio.h>
#include <stdlib.h>
#include "string"
#include "fstream"
using namespace std;
struct pass
	{	 	
	string name;
	int id;
	int age;//
	string clas;//
	string from;//
	string to;//
	//string date;
	string time;//
	};
	struct train
	{
	string id;//
	//string clas;
	string from;//
	string to;//
	//string date;
	string time;//
	//int sts=15;
	pass p[15];
};
	string name12;
	string password12;
int main()
{					//khi to lahore	
	train t[3][3][1];//{t1 8.30
					//  t4 	12.30
					//  t7} 16.30
	fstream tr1("TrainA.txt",ios::app|ios::in|ios::out);
	fstream tr2("TrainB.txt",ios::app|ios::in|ios::out);
	fstream tr3("TrainC.txt",ios::app|ios::in|ios::out);
	fstream tr4("TrainD.txt",ios::app|ios::in|ios::out);
	fstream tr5("TrainE.txt",ios::app|ios::in|ios::out);
	fstream tr6("TrainF.txt",ios::app|ios::in|ios::out);
	fstream tr7("TrainG.txt",ios::app|ios::in|ios::out);
	fstream tr8("TrainH.txt",ios::app|ios::in|ios::out);
	fstream tr9("TrainI.txt",ios::app|ios::in|ios::out);
	/*tr1<<"************************************************************************************"<<endl;
	tr1<<"					RECORD OF TRAINS"<<endl;
	tr1<<"************************************************************************************"<<endl;
	tr1<<"	Train Name 			From			To			Time"<<endl;
	tr2<<"************************************************************************************"<<endl;
	tr2<<"					RECORD OF TRAINS"<<endl;
	tr2<<"************************************************************************************"<<endl;
	tr2<<"	Train Name 			From			To			Time"<<endl;
	tr3<<"************************************************************************************"<<endl;
	tr3<<"					RECORD OF TRAINS"<<endl;
	tr3<<"************************************************************************************"<<endl;
	tr3<<"	Train Name 			From			To			Time"<<endl;
	tr4<<"************************************************************************************"<<endl;
	tr4<<"					RECORD OF TRAINS"<<endl;
	tr4<<"************************************************************************************"<<endl;
	tr4<<"	Train Name 			From			To			Time"<<endl;
	tr5<<"************************************************************************************"<<endl;
	tr5<<"					RECORD OF TRAINS"<<endl;
	tr5<<"************************************************************************************"<<endl;
	tr5<<"	Train Name 			From			To			Time"<<endl;
	tr6<<"************************************************************************************"<<endl;
	tr6<<"					RECORD OF TRAINS"<<endl;
	tr6<<"************************************************************************************"<<endl;
	tr6<<"	Train Name 			From			To			Time"<<endl;
	tr7<<"************************************************************************************"<<endl;
	tr7<<"					RECORD OF TRAINS"<<endl;
	tr7<<"************************************************************************************"<<endl;
	tr7<<"	Train Name 			From			To			Time"<<endl;
	tr8<<"************************************************************************************"<<endl;
	tr8<<"					RECORD OF TRAINS"<<endl;
	tr8<<"************************************************************************************"<<endl;
	tr8<<"	Train Name 			From			To			Time"<<endl;
	tr9<<"************************************************************************************"<<endl;
	tr9<<"					RECORD OF TRAINS"<<endl;
	tr9<<"************************************************************************************"<<endl;
	tr9<<"	Train Name 			From			To			Time"<<endl;*/
	for (int i=0;i<3;i++)
	{
		for (int j=0;j<3;j++)
		{
			for (int k=0;k<1;k++)
			{	
				if(i==0)
				{	
					if (j==0)
					{
					t[i][j][k].from="Karachi";
					t[i][j][k].to="Lahore";
					t[i][j][k].time="08.30";
					t[i][j][k].id="A01";
					//tr1<<"	   "<<t[i][j][k].id<<"	 			"<<t[i][j][k].from<<"		  	"<<t[i][j][k].to<<"	   		"<<t[i][j][k].time<<endl;
					//tr1<<"================================================================================================================="<<endl;
					//tr1<<"						Train Passenger Info	"<<endl;
					//tr1<<"================================================================================================================="<<endl;
					//tr1<<"  Name 			Age 			ID 			From 			To 			Shift 			Class"<<endl;			
					}
					else if (j==1)
					{
					t[i][j][k].from="Karachi";
					t[i][j][k].to="Lahore";
					t[i][j][k].time="14.30";
					t[i][j][k].id="A02";
					//tr2<<"	   "<<t[i][j][k].id<<"	 			"<<t[i][j][k].from<<"		  	"<<t[i][j][k].to<<"	   		"<<t[i][j][k].time<<endl;
					//tr2<<"================================================================================================================="<<endl;
					//tr2<<"						Train Passenger Info	"<<endl;
					//tr2<<"================================================================================================================="<<endl;
					//tr2<<"  Name 			Age 			ID 			From 			To 			Shift 			Class"<<endl;
					}
					else
					{
					t[i][j][k].from="Karachi";
					t[i][j][k].to="Lahore";
					t[i][j][k].time="18.30";
					t[i][j][k].id="A03";
					//tr3<<"	   "<<t[i][j][k].id<<"	 			"<<t[i][j][k].from<<"		  	"<<t[i][j][k].to<<"	   		"<<t[i][j][k].time<<endl;
					//tr3<<"================================================================================================================="<<endl;
					//tr3<<"						Train Passenger Info	"<<endl;
					//tr3<<"================================================================================================================="<<endl;
					//tr3<<"  Name 			Age 			ID 			From 			To 			Shift 			Class"<<endl;
					}
				}
				else if (i==1)
				{	
					if(j==0)
					{
					t[i][j][k].from="Lahore";
					t[i][j][k].to="Karachi";
					t[i][j][k].time="08.30";
					t[i][j][k].id="B01";
					//tr4<<"	   "<<t[i][j][k].id<<"	 			"<<t[i][j][k].from<<"		  	"<<t[i][j][k].to<<"	   		"<<t[i][j][k].time<<endl;
					//tr4<<"================================================================================================================="<<endl;
					//tr4<<"						Train Passenger Info	"<<endl;
					//tr4<<"================================================================================================================="<<endl;
					//tr4<<"  Name 			Age 			ID 			From 			To 			Shift 			Class"<<endl;
					}
					else if(j==1)
					{
					t[i][j][k].from="Lahore";
					t[i][j][k].to="Karachi";
					t[i][j][k].time="14.30";
					t[i][j][k].id="B02";
					//tr5<<"	   "<<t[i][j][k].id<<"	 			"<<t[i][j][k].from<<"		  	"<<t[i][j][k].to<<"	   		"<<t[i][j][k].time<<endl;
					//tr5<<"================================================================================================================="<<endl;
					//tr5<<"						Train Passenger Info	"<<endl;
					//tr5<<"================================================================================================================="<<endl;
					//tr5<<"  Name 			Age 			ID 			From 			To 			Shift 			Class"<<endl;
					}
					else if(j==2)
					{
					t[i][j][k].from="Lahore";
					t[i][j][k].to="Karachi";
					t[i][j][k].time="18.30";
					t[i][j][k].id="B03";
					//tr6<<"	   "<<t[i][j][k].id<<"	 			"<<t[i][j][k].from<<"		  	"<<t[i][j][k].to<<"	   		"<<t[i][j][k].time<<endl;
					//tr6<<"================================================================================================================="<<endl;
					//tr6<<"						Train Passenger Info	"<<endl;
					//tr6<<"================================================================================================================="<<endl;
					//tr6<<"  Name 			Age 			ID 			From 			To 			Shift 			Class"<<endl;
					}
				}
				else if (i==2)
				{	
					if(j==0)
					{
					t[i][j][k].from="Peshawar";
					t[i][j][k].to="Quetta";
					t[i][j][k].time="08.30";
					t[i][j][k].id="C01";
					//tr7<<"	   "<<t[i][j][k].id<<"	 			"<<t[i][j][k].from<<"		  "<<t[i][j][k].to<<"	   	"<<t[i][j][k].time<<endl;
					//tr7<<"================================================================================================================="<<endl;
					//tr7<<"						Train Passenger Info	"<<endl;
					//tr7<<"================================================================================================================="<<endl;
					//tr7<<"  Name 			Age 			ID 			From 			To 			Shift 			Class"<<endl;
					}
					else if(j==1)
					{
					t[i][j][k].from="Peshawar";
					t[i][j][k].to="Quetta";
					t[i][j][k].time="14.30";
					t[i][j][k].id="C02";
					//tr8<<"	   "<<t[i][j][k].id<<"	 			"<<t[i][j][k].from<<"		  "<<t[i][j][k].to<<"	   	"<<t[i][j][k].time<<endl;
					//tr8<<"================================================================================================================="<<endl;
					//tr8<<"						Train Passenger Info	"<<endl;
					//tr8<<"================================================================================================================="<<endl;
					//tr8<<"  Name 			Age 			ID 			From 			To 			Shift 			Class"<<endl;
					}
					else if(j==2)
					{
					t[i][j][k].from="Peshawar";
					t[i][j][k].to="Quetta";
					t[i][j][k].time="18.30";
					t[i][j][k].id="C03";
					//tr9<<"	   "<<t[i][j][k].id<<"	 			"<<t[i][j][k].from<<"		  "<<t[i][j][k].to<<"	   	"<<t[i][j][k].time<<endl;
					//tr9<<"================================================================================================================="<<endl;
					//tr9<<"						Train Passenger Info	"<<endl;
					//tr9<<"================================================================================================================="<<endl;
					//tr9<<"  Name 			Age 			ID 			From 			To 			Shift 			Class"<<endl;
					}
				}
			}
		}
	}

	/*tr1.close();
	tr2.close();
	tr3.close();
	tr4.close();
	tr5.close();
	tr6.close();
	tr7.close();
	tr8.close();
	tr9.close();*/
	int global;
	cout<<"Welcome Into The Times Railway Management System: "<<endl<<endl<<endl;
	cout<<"************************************************************************"<<endl;
	cout<<"				Instructions"<<endl;
	cout<<"************************************************************************"<<endl;
	cout<<endl<<"KINDLY FOLLOW THESE INSTRUCTIONS VERY CAREFULLY OTHERWISE IT WILL NOT BE WISE"<<endl;
	cout<<endl<<"1. Follow The Specified Format of Name While Booking i.e (Firstname_Lastname)."<<endl;
	cout<<"2.There Are Total 9 Trains Available Each Have A Capacity Of 15 Passengers."<<endl;
	cout<<"3.You Can Only Access User Mode Only If You Are The Member Of Our Management."<<endl;
	cout<<"4.There Are Only 3 Shifts Available For Each Station And Each Station Have Only 3 Trains Available."<<endl;
	cout<<"5.In Case You Did'nt Follow The Format You Were Told or Any Error occured Then Run The Program Again. "<<endl;
	cout<<"6.If You Are The Authorized Person Then You Will Need The Password And Username To Login To User Menu. "<<endl;
	cout<<"7.Once You Entered Yourself in the Program Then There's No Coming Back So Be Carefull. "<<endl;
	cout<<"8.For Authorized Persons Only The Updation of Record and Deletion Of Records Will be Available in Future Update. "<<endl;
	cout<<"9.Generate Your Ticket From Here And Pay Your Fees To Station Incharge. "<<endl;
	cout<<"====================================================="<<endl;
	cout<<"			Please Enjoy"<<endl;
	cout<<"====================================================="<<endl;
	cout<<endl<<endl;
	cout<<"			Press 1 To Continue Otherwise Close The Program."<<endl;
	cin>>global;
	system("CLS");
	if(global==1)
	{
	cout<<"Welcome into the times railway management system : "<<endl<<endl;
	cout<<"Press 1 for User : "<<endl;
	cout<<"Press 2 for Booking: "<<endl;
	int mn;
	cin>>mn;
	system("CLS");
	if(mn==2)//Booking Module
	{
	cout<<"Welcome into the times railway management system : "<<endl<<endl;
	int c;
	cout<<"How many tickets you want to buy: ";
	cin>>c;
	int sad=7500*c;
	int ti[c];
	int ag[c];
	int ds[c];
	int cl[c];
	string na[c];
	int sn[c],k=89725;
	cout<<endl<<endl<<endl;
	for(int i=0;i<c;i++)
	{
		sn[i]=k+1;
		k=k+1;
	}
	for(int i=0;i<c;i++)
	{
	system("CLS");
	cout<<"Welcome into the times railway management system : "<<endl<<endl;
	cout<<"Enter Details of Passenger "<<i+1<<endl<<endl;
	cout<<"Enter Your Age: ";
	cin>>ag[i];//
	system("CLS");
	cout<<"Welcome into the times railway management system : "<<endl<<endl;
	cout<<"Enter Details of Passenger "<<i+1<<endl<<endl;
	cout<<"If you Want to travel from karachi to lahore press 1: "<<endl;
	cout<<"If you Want to travel from lahore to karachi press 2: "<<endl;
	cout<<"If you Want to travel from peshawar to quetta press 3: "<<endl;
	cin>>ds[i];//
	system("CLS");
	if(ds[i]==1||ds[i]==2||ds[i]==3)
	{
	}
	else
	{
		cout<<"Wrong Input Come Back Again..."<<endl;
		break;
	}
	cout<<"Welcome into the times railway management system : "<<endl<<endl;
	cout<<"Enter Details of Passenger "<<i+1<<endl<<endl;
	cout<<"If you want to travel in business class press 1: "<<endl;
	cout<<"If you want to travel in economy class press 2: "<<endl;
	cout<<"If you want to travel in ac sleeper class press 3: "<<endl;
	cin>>cl[i];
	system("CLS");
	if(cl[i]==1||cl[i]==2||cl[i]==3)
	{
	}
	else
	{
		cout<<"Wrong Input Come Back Again..."<<endl;
		break;
	}
	cout<<"Welcome into the times railway management system : "<<endl<<endl;
	cout<<"Enter Details of Passenger "<<i+1<<endl<<endl;
	cout<<"If you want to book your ticket for 08:30 press 1: "<<endl;
	cout<<"If you want to book your ticket for  14:30 press 2: "<<endl;
	cout<<"If you want to book your ticket fot 18:30 press 3: "<<endl;
	cin>>ti[i];//
	system("CLS");
	if(ti[i]==1||ti[i]==2||ti[i]==3)
	{
	}
	else
	{
		cout<<"Wrong Input Come Back Again..."<<endl;
		break;
	}
	cout<<"Welcome into the times railway management system : "<<endl<<endl;
	cout<<"Enter Details of Passenger "<<i+1<<endl<<endl;
	cout<<"Enter Your name (First_Last)";
	cin>>na[i];
	cout<<endl<<endl;
	}
	fstream fl("ticket.txt",ios::app|ios::in|ios::out);
	/*fl<<"************************************"<<endl;
	fl<<"	Ticket Record of Passengers "<<endl;
	fl<<"************************************"<<endl;*/
	system("CLS");
	cout<<"Welcome into the times railway management system : "<<endl<<endl;
	cout<<"Ticket Details"<<endl;
	for(int i=0;i<c;i++)	
	{
		cout<<"************************************"<<endl;
		cout<<"		Passenger "<<i+1<<endl;
		cout<<"************************************"<<endl;
		fl<<"************************************"<<endl;
		fl<<"		Passenger "<<i+1<<endl;
		fl<<"************************************"<<endl;
		if (ds[i]>=1&&ds[i]<=3&&ti[i]>=1&&ti[i]<=3)
	{
		if (ds[i]==1)//matrix
		{
			if (ti[i]==1)
			{	
				t[0][0][0].p[i].from="Karachi";
				t[0][0][0].p[i].to="Lahore";
				t[0][0][0].p[i].time="08.30";
				t[0][0][0].p[i].name=na[i];
				t[0][0][0].p[i].id=sn[i];
				t[0][0][0].p[i].age=ag[i];
				if(cl[i]==1)
				{
					t[0][0][0].p[i].clas="Buisiness";
				}
				else if(cl[i]==2)
				{
					t[0][0][0].p[i].clas="Economy";
				}
				else if(cl[i]==3)
				{
					t[0][0][0].p[i].clas="Ac_Sleeper";
				}
				cout<<" Name : "<<t[0][0][0].p[i].name<<endl;
				cout<<" Age : "<<t[0][0][0].p[i].age<<endl;
				cout<<" ID : "<<t[0][0][0].p[i].id<<endl;
				cout<<" From : "<<t[0][0][0].p[i].from<<endl;
				cout<<" To : "<<t[0][0][0].p[i].to<<endl;
				cout<<" Shift :"<<t[0][0][0].p[i].time<<endl;
				cout<<" Class :"<<t[0][0][0].p[i].clas<<endl;
				cout<<" Price : 7500/-"<<endl;
				fl<<" Name : "<<t[0][0][0].p[i].name<<endl;
				fl<<" Age : "<<t[0][0][0].p[i].age<<endl;
				fl<<" ID : "<<t[0][0][0].p[i].id<<endl;
				fl<<" From : "<<t[0][0][0].p[i].from<<endl;
				fl<<" To : "<<t[0][0][0].p[i].to<<endl;
				fl<<" Shift :"<<t[0][0][0].p[i].time<<endl;
				fl<<" Class :"<<t[0][0][0].p[i].clas<<endl;
				//erma 		        43  			89726 		     	Karachi 		Lahore 		     	08.30 		     	Buisiness 		   
  				tr1<<"  "<<t[0][0][0].p[i].name<<" 		        "<<t[0][0][0].p[i].age<<"  			"<<t[0][0][0].p[i].id<<" 		     	"<<t[0][0][0].p[i].from<<" 		"<<t[0][0][0].p[i].to<<" 		     	"<<t[0][0][0].p[i].time<<" 		     	"<<t[0][0][0].p[i].clas;
				
				tr1<<endl;
			}
			else if (ti[i]==2)
			{
				t[0][1][0].p[i].from="Karachi";
				t[0][1][0].p[i].to="Lahore";
				t[0][1][0].p[i].time="14.30";
				t[0][1][0].p[i].name=na[i];
				t[0][1][0].p[i].id=sn[i];
				t[0][1][0].p[i].age=ag[i];
				
				if(cl[i]==1)
				{
					t[0][1][0].p[i].clas="Buisiness";
				}
				else if(cl[i]==2)
				{
					t[0][1][0].p[i].clas="Economy";
				}
				else if(cl[i]==3)
				{
					t[0][1][0].p[i].clas="Ac_Sleeper";
				}
				cout<<" Name : "<<t[0][1][0].p[i].name<<endl;
				cout<<" Age : "<<t[0][1][0].p[i].age<<endl;
				cout<<" ID : "<<t[0][1][0].p[i].id<<endl;	
				cout<<" From : "<<t[0][1][0].p[i].from<<endl;
				cout<<" To : "<<t[0][1][0].p[i].to<<endl;
				cout<<" Shift :"<<t[0][1][0].p[i].time<<endl;
				cout<<" Class :"<<t[0][1][0].p[i].clas<<endl;
				cout<<" Price : 7500/-"<<endl;
				fl<<" Name : "<<t[0][1][0].p[i].name<<endl;
				fl<<" Age : "<<t[0][1][0].p[i].age<<endl;
				fl<<" ID : "<<t[0][1][0].p[i].id<<endl;	
				fl<<" From : "<<t[0][1][0].p[i].from<<endl;
				fl<<" To : "<<t[0][1][0].p[i].to<<endl;
				fl<<" Shift :"<<t[0][1][0].p[i].time<<endl;
				fl<<" Class :"<<t[0][1][0].p[i].clas<<endl;
				tr2<<"  "<<t[0][1][0].p[i].name<<" 		        "<<t[0][1][0].p[i].age<<"  			"<<t[0][1][0].p[i].id<<" 		     	"<<t[0][1][0].p[i].from<<" 		"<<t[0][1][0].p[i].to<<" 		     	"<<t[0][1][0].p[i].time<<" 		     	"<<t[0][1][0].p[i].clas;
				
				tr2<<endl;
			}
			else
			{
				t[0][2][0].p[i].from="Karachi";
				t[0][2][0].p[i].to="Lahore";
				t[0][2][0].p[i].time="18.30";
				t[0][2][0].p[i].name=na[i];
				t[0][2][0].p[i].id=sn[i];
				t[0][2][0].p[i].age=ag[i];
				if(cl[i]==1)
				{
					t[0][2][0].p[i].clas="Buisiness";
				}
				else if(cl[i]==2)
				{
					t[0][2][0].p[i].clas="Economy";
				}
				else if(cl[i]==3)
				{
					t[0][2][0].p[i].clas="Ac_Sleeper";
				}
				cout<<" Name : "<<t[0][2][0].p[i].name<<endl;
				cout<<" Age : "<<t[0][2][0].p[i].age<<endl;
				cout<<" ID : "<<t[0][2][0].p[i].id<<endl;
				cout<<" From : "<<t[0][2][0].p[i].from<<endl;
				cout<<" To : "<<t[0][2][0].p[i].to<<endl;
				cout<<" Shift :"<<t[0][2][0].p[i].time<<endl;
				cout<<" Class :"<<t[0][2][0].p[i].clas<<endl;
				cout<<" Price : 7500/-"<<endl;
				fl<<" Name : "<<t[0][2][0].p[i].name<<endl;
				fl<<" Age : "<<t[0][2][0].p[i].age<<endl;
				fl<<" ID : "<<t[0][2][0].p[i].id<<endl;
				fl<<" From : "<<t[0][2][0].p[i].from<<endl;
				fl<<" To : "<<t[0][2][0].p[i].to<<endl;
				fl<<" Shift :"<<t[0][2][0].p[i].time<<endl;
				fl<<" Class :"<<t[0][2][0].p[i].clas<<endl;
				tr3<<"  "<<t[0][2][0].p[i].name<<" 		        "<<t[0][2][0].p[i].age<<"  			"<<t[0][2][0].p[i].id<<" 		     	"<<t[0][2][0].p[i].from<<" 		"<<t[0][2][0].p[i].to<<" 		     	"<<t[0][2][0].p[i].time<<" 		     	"<<t[0][2][0].p[i].clas;
				
				tr3<<endl;
				}
		}
		else if (ds[i]==2)//matrix
		{
			if (ti[i]==1)
			{
				t[1][0][0].p[i].from="Lahore";
				t[1][0][0].p[i].to="Karachi";
				t[1][0][0].p[i].time="08.30";
				t[1][0][0].p[i].name=na[i];
				t[1][0][0].p[i].id=sn[i];
				t[1][0][0].p[i].age=ag[i];
				if(cl[i]==1)
				{
					t[1][0][0].p[i].clas="Buisiness";
				}
				else if(cl[i]==2)
				{
					t[1][0][0].p[i].clas="Economy";
				}
				else if(cl[i]==3)
				{
					t[1][0][0].p[i].clas="Ac_Sleeper";
				}
				cout<<" Name : "<<t[1][0][0].p[i].name<<endl;
				cout<<" Age : "<<t[1][0][0].p[i].age<<endl;
				cout<<" ID : "<<t[1][0][0].p[i].id<<endl;
				cout<<" From : "<<t[1][0][0].p[i].from<<endl;
				cout<<" To : "<<t[1][0][0].p[i].to<<endl;
				cout<<" Shift :"<<t[1][0][0].p[i].time<<endl;
				cout<<" Class :"<<t[1][0][0].p[i].clas<<endl;
				cout<<" Price : 7500/-"<<endl;
				fl<<" Name : "<<t[1][0][0].p[i].name<<endl;
				fl<<" Age : "<<t[1][0][0].p[i].age<<endl;
				fl<<" ID : "<<t[1][0][0].p[i].id<<endl;
				fl<<" From : "<<t[1][0][0].p[i].from<<endl;
				fl<<" To : "<<t[1][0][0].p[i].to<<endl;
				fl<<" Shift :"<<t[1][0][0].p[i].time<<endl;
				fl<<" Class :"<<t[1][0][0].p[i].clas<<endl;
				tr4<<"  "<<t[1][0][0].p[i].name<<" 		        "<<t[1][0][0].p[i].age<<"  			"<<t[1][0][0].p[i].id<<" 		     	"<<t[1][0][0].p[i].from<<" 		        "<<t[1][0][0].p[i].to<<" 		"<<t[1][0][0].p[i].time<<" 		     	"<<t[1][0][0].p[i].clas;		
				
				tr4<<endl;
			}
			else if (ti[i]==2)
			{
				t[1][1][0].p[i].from="Lahore";
				t[1][1][0].p[i].to="Karachi";
				t[1][1][0].p[i].time="14.30";
				t[1][1][0].p[i].name=na[i];
				t[1][1][0].p[i].id=sn[i];
				t[1][1][0].p[i].age=ag[i];
				
				if(cl[i]==1)
				{
					t[1][1][0].p[i].clas="Buisiness";
				}
				else if(cl[i]==2)
				{
					t[1][1][0].p[i].clas="Economy";
				}
				else if(cl[i]==3)
				{
					t[1][1][0].p[i].clas="Ac_Sleeper";
				}
				cout<<" Name : "<<t[1][1][0].p[i].name<<endl;
				cout<<" Age : "<<t[1][1][0].p[i].age<<endl;
				cout<<" ID : "<<t[1][1][0].p[i].id<<endl;
				cout<<" From : "<<t[1][1][0].p[i].from<<endl;
				cout<<" To : "<<t[1][1][0].p[i].to<<endl;
				cout<<" Shift :"<<t[1][1][0].p[i].time<<endl;
				cout<<" Class :"<<t[1][1][0].p[i].clas<<endl;
				cout<<" Price : 7500/-"<<endl;
				fl<<" Name : "<<t[1][1][0].p[i].name<<endl;
				fl<<" Age : "<<t[1][1][0].p[i].age<<endl;
				fl<<" ID : "<<t[1][1][0].p[i].id<<endl;
				fl<<" From : "<<t[1][1][0].p[i].from<<endl;
				fl<<" To : "<<t[1][1][0].p[i].to<<endl;
				fl<<" Shift :"<<t[1][1][0].p[i].time<<endl;
				fl<<" Class :"<<t[1][1][0].p[i].clas<<endl;
				tr5<<"  "<<t[1][1][0].p[i].name<<" 		        "<<t[1][1][0].p[i].age<<"  			"<<t[1][1][0].p[i].id<<" 		     	"<<t[1][1][0].p[i].from<<" 			"<<t[1][1][0].p[i].to<<" 		"<<t[1][1][0].p[i].time<<" 		     	"<<t[1][1][0].p[i].clas;		
			
				tr5<<endl;	
			}
			else
			{	
				t[1][2][0].p[i].from="Lahore";
				t[1][2][0].p[i].to="Karachi";
				t[1][2][0].p[i].time="18.30";
				t[1][2][0].p[i].name=na[i];
				t[1][2][0].p[i].id=sn[i];
				t[1][2][0].p[i].age=ag[i];
				
				if(cl[i]==1)
				{
					t[1][2][0].p[i].clas="Buisiness";
				}
				else if(cl[i]==2)
				{
					t[1][2][0].p[i].clas="Economy";
				}
				else if(cl[i]==3)
				{
					t[1][2][0].p[i].clas="Ac_Sleeper";
				}
				
				cout<<" Name : "<<t[1][2][0].p[i].name<<endl;
				cout<<" Age : "<<t[1][2][0].p[i].age<<endl;
				cout<<" ID : "<<t[1][2][0].p[i].id<<endl;
				cout<<" From : "<<t[1][2][0].p[i].from<<endl;
				cout<<" To : "<<t[1][2][0].p[i].to<<endl;
				cout<<" Shift :"<<t[1][2][0].p[i].time<<endl;
				cout<<" Class :"<<t[1][2][0].p[i].clas<<endl;
				cout<<" Price : 7500/-"<<endl;
				fl<<" Name : "<<t[1][2][0].p[i].name<<endl;
				fl<<" Age : "<<t[1][2][0].p[i].age<<endl;
				fl<<" ID : "<<t[1][2][0].p[i].id<<endl;
				fl<<" From : "<<t[1][2][0].p[i].from<<endl;
				fl<<" To : "<<t[1][2][0].p[i].to<<endl;
				fl<<" Shift :"<<t[1][2][0].p[i].time<<endl;
				fl<<" Class :"<<t[1][2][0].p[i].clas<<endl;
				tr6<<"  "<<t[1][2][0].p[i].name<<" 		        "<<t[1][2][0].p[i].age<<"  			"<<t[1][2][0].p[i].id<<" 		     	"<<t[1][2][0].p[i].from<<" 			"<<t[1][2][0].p[i].to<<" 		"<<t[1][2][0].p[i].time<<" 		     	"<<t[1][2][0].p[i].clas;		
			
				tr6<<endl;	
			}
		}
		else if (ds[i]==3)//matrix
		{
			if (ti[i]==1)
			{
				t[2][0][0].p[i].from="Peshawar";
				t[2][0][0].p[i].to="Quetta";
				t[2][0][0].p[i].time="08.30";
				t[2][0][0].p[i].name=na[i];
				t[2][0][0].p[i].id=sn[i];
				t[2][0][0].p[i].age=ag[i];
				
				if(cl[i]==1)
				{
					t[2][0][0].p[i].clas="Buisiness";
				}
				else if(cl[i]==2)
				{
					t[2][0][0].p[i].clas="Economy";
				}
				else if(cl[i]==3)
				{
					t[2][0][0].p[i].clas="Ac_Sleeper";
				}
				cout<<" Name : "<<t[2][0][0].p[i].name<<endl;
				cout<<" Age : "<<t[2][0][0].p[i].age<<endl;
				cout<<" ID : "<<t[2][0][0].p[i].id<<endl;
				cout<<" From : "<<t[2][0][0].p[i].from<<endl;
				cout<<" To : "<<t[2][0][0].p[i].to<<endl;
				cout<<" Shift :"<<t[2][0][0].p[i].time<<endl;
				cout<<" Class :"<<t[2][0][0].p[i].clas<<endl;
				cout<<" Price : 7500/-"<<endl;
				fl<<" Name : "<<t[2][0][0].p[i].name<<endl;
				fl<<" Age : "<<t[2][0][0].p[i].age<<endl;
				fl<<" ID : "<<t[2][0][0].p[i].id<<endl;
				fl<<" From : "<<t[2][0][0].p[i].from<<endl;
				fl<<" To : "<<t[2][0][0].p[i].to<<endl;
				fl<<" Shift :"<<t[2][0][0].p[i].time<<endl;
				fl<<" Class :"<<t[2][0][0].p[i].clas<<endl;
				tr7<<"  "<<t[2][0][0].p[i].name<<" 		        "<<t[2][0][0].p[i].age<<"  			"<<t[2][0][0].p[i].id<<" 		     	"<<t[2][0][0].p[i].from<<" 		"<<t[2][0][0].p[i].to<<" 			"<<t[2][0][0].p[i].time<<" 		     	"<<t[2][0][0].p[i].clas;		
			
				tr7<<endl;
			}
			else if (ti[i]==2)
			{
				t[2][1][0].p[i].from="Peshawar";
				t[2][1][0].p[i].to="Quetta";
				t[2][1][0].p[i].time="14.30";
				t[2][1][0].p[i].name=na[i];
				t[2][1][0].p[i].id=sn[i];
				t[2][1][0].p[i].age=ag[i];
			
				if(cl[i]==1)
				{
					t[2][1][0].p[i].clas="Buisiness";
				}
				else if(cl[i]==2)
				{
					t[2][1][0].p[i].clas="Economy";
				}
				else if(cl[i]==3)
				{
					t[2][1][0].p[i].clas="Ac_Sleeper";
				}
				cout<<" Name : "<<t[2][1][0].p[i].name<<endl;
				cout<<" Age : "<<t[2][1][0].p[i].age<<endl;
				cout<<" ID : "<<t[2][1][0].p[i].id<<endl;
				cout<<" From : "<<t[2][1][0].p[i].from<<endl;
				cout<<" To : "<<t[2][1][0].p[i].to<<endl;
				cout<<" Shift :"<<t[2][1][0].p[i].time<<endl;
				cout<<" Class :"<<t[2][1][0].p[i].clas<<endl;
				cout<<" Price : 7500/-"<<endl;
				fl<<" Name : "<<t[2][1][0].p[i].name<<endl;
				fl<<" Age : "<<t[2][1][0].p[i].age<<endl;
				fl<<" ID : "<<t[2][1][0].p[i].id<<endl;
				fl<<" From : "<<t[2][1][0].p[i].from<<endl;
				fl<<" To : "<<t[2][1][0].p[i].to<<endl;
				fl<<" Shift :"<<t[2][1][0].p[i].time<<endl;
 				fl<<" Class :"<<t[2][1][0].p[i].clas<<endl;
				tr8<<"  "<<t[2][1][0].p[i].name<<" 		        "<<t[2][1][0].p[i].age<<"  			"<<t[2][1][0].p[i].id<<" 		     	"<<t[2][1][0].p[i].from<<" 		"<<t[2][1][0].p[i].to<<" 			"<<t[2][1][0].p[i].time<<" 		     	"<<t[2][1][0].p[i].clas;		
			
				tr8<<endl;
			}
			else
			{
				t[2][2][0].p[i].from="Peshawar";
				t[2][2][0].p[i].to="Quetta";
				t[2][2][0].p[i].time="18.30";
				t[2][2][0].p[i].name=na[i];
				t[2][2][0].p[i].id=sn[i];
				t[2][2][0].p[i].age=ag[i];
				
				if(cl[i]==1)
				{
					t[2][2][0].p[i].clas="Buisiness";
				}
				else if(cl[i]==2)
				{
					t[2][2][0].p[i].clas="Economy";
				}
				else if(cl[i]==3)
				{
					t[2][2][0].p[i].clas="Ac_Sleeper";
				}
				cout<<" Name : "<<t[2][2][0].p[i].name<<endl;
				cout<<" Age : "<<t[2][2][0].p[i].age<<endl;
				cout<<" ID : "<<t[2][2][0].p[i].id<<endl;
				cout<<" From : "<<t[2][2][0].p[i].from<<endl;
				cout<<" To : "<<t[2][2][0].p[i].to<<endl;
				cout<<" Shift :"<<t[2][2][0].p[i].time<<endl;
				cout<<" Class :"<<t[2][2][0].p[i].clas<<endl;
				cout<<" Price : 7500/-"<<endl;
				fl<<" Name : "<<t[2][2][0].p[i].name<<endl;
				fl<<" Age : "<<t[2][2][0].p[i].age<<endl;
				fl<<" ID : "<<t[2][2][0].p[i].id<<endl;
				fl<<" From : "<<t[2][2][0].p[i].from<<endl;
				fl<<" To : "<<t[2][2][0].p[i].to<<endl;
				fl<<" Shift :"<<t[2][2][0].p[i].time<<endl;
				fl<<" Class :"<<t[2][2][0].p[i].clas<<endl;
				tr9<<"  "<<t[2][2][0].p[i].name<<" 		        "<<t[2][2][0].p[i].age<<"  			"<<t[2][2][0].p[i].id<<" 		     	"<<t[2][2][0].p[i].from<<" 		"<<t[2][2][0].p[i].to<<" 			"<<t[2][2][0].p[i].time<<" 		     	"<<t[2][2][0].p[i].clas;		
			
				tr9<<endl;
			}
			
		}
	}
}
	cout<<endl<<"*********************************************"<<endl;
	cout<<"		total = "<<sad<<"\-"<<endl;
	cout<<"*********************************************"<<endl;
fl.close();
	tr1.close();
	tr2.close();
	tr3.close();
	tr4.close();
	tr5.close();
	tr6.close();
	tr7.close();
	tr8.close();
	tr9.close();
}
else if(mn==1)//User Module
{
	cout<<"Welcome into the times railway management system : "<<endl<<endl;
	cout<<"Enter Username: ";
	cin>>name12;
	cout<<"Enter Password: ";
	cin>>password12;
	system("CLS");
	if((name12=="shaheer"&&password12=="12345")||(name12=="erma"&&password12=="23456")||(name12=="ahmer"&&password12=="34567")||(name12=="rohma"&&password12=="45678"))
	{
	cout<<"Welcome into the times railway management system : "<<endl<<endl;
	cout<<"Press 1 to view record of Tickets of Passengers: "<<endl;
	cout<<"Press 2 for view record of trains: "<<endl;
	int er;
	cin>>er;
	system("CLS");
	cout<<"Welcome into the times railway management system : "<<endl<<endl;
	if(er==1)//Record of Tickets
	{
	
	char pol;
	fstream fl("ticket.txt",ios::in);
	fl.seekg(ios::beg);
	while(fl.eof()==false)
	{
		fl.get(pol);
		cout<<pol;
	}
	fl.close();
	}
	
	else if(er==2)//record of trains
	{
		
		cout<<"Press 1 to View Record of Karachi to lahore Trains"<<endl;
		cout<<"Press 2 to View Record of Lahore to Karachi Trains"<<endl;
		cout<<"Press 3 to View Record of Peshawar to Quetta Trains"<<endl;
		int bn;
		cin>>bn;
		system("CLS");
		cout<<"Welcome into the times railway management system : "<<endl<<endl;
		if(bn==1)
		{
			cout<<"Press 1 to View record of 08:30 Train"<<endl;
			cout<<"Press 2 to View record of 12:30 Train"<<endl;
			cout<<"Press 3 to View record of 18:30 Train"<<endl;
			int zs;
			cin>>zs;
			system("CLS");
			cout<<"Welcome into the times railway management system : "<<endl<<endl;
			if (zs==1)
			{
				char mb;
				fstream tr1("TrainA.txt",ios::in);
				tr1.seekg(ios::beg);
				while(tr1.eof()==false)
			{
				tr1.get(mb);
				cout<<mb;
			}
			tr1.close();
			}
			else if (zs==2)
			{
				char mb;
				fstream tr2("TrainB.txt",ios::in);
				tr2.seekg(ios::beg);
				while(tr2.eof()==false)
			{
				tr2.get(mb);
				cout<<mb;
			}
			tr2.close();
			}
			else if (zs==3)
			{
				char mb;
				fstream tr3("TrainC.txt",ios::in);
				tr3.seekg(ios::beg);
				while(tr3.eof()==false)
			{
				tr3.get(mb);
				cout<<mb;
			}
			tr3.close();
			}
			else 
			{
				cout<<"Wrong Input Run the Program Again:";
			}
		}
		else if(bn==2)
		{
			cout<<"Press 1 to View record of 08:30 Train"<<endl;
			cout<<"Press 2 to View record of 12:30 Train"<<endl;
			cout<<"Press 3 to View record of 18:30 Train"<<endl;
			int zs;
			cin>>zs;
			system("CLS");
			cout<<"Welcome into the times railway management system : "<<endl<<endl;
			if (zs==1)
			{
				char mb;
				fstream tr4("TrainD.txt",ios::in);
				tr4.seekg(ios::beg);
				while(tr4.eof()==false)
			{
				tr4.get(mb);
				cout<<mb;
			}
			tr4.close();
			}
			else if (zs==2)
			{
				char mb;
				fstream tr5("TrainE.txt",ios::in);
				tr5.seekg(ios::beg);
				while(tr5.eof()==false)
			{
				tr5.get(mb);
				cout<<mb;
			}
			tr5.close();
			}
			else if (zs==3)
			{
				char mb;
				fstream tr6("TrainF.txt",ios::in);
				tr6.seekg(ios::beg);
				while(tr6.eof()==false)
			{
				tr6.get(mb);
				cout<<mb;
			}
			tr6.close();
			}
			else 
			{
				cout<<"Wrong Input Run the Program Again:";
			}
		}
		else if(bn==3)
		{
			cout<<"Press 1 to View record of 08:30 Train"<<endl;
			cout<<"Press 2 to View record of 12:30 Train"<<endl;
			cout<<"Press 3 to View record of 18:30 Train"<<endl;
			int zs;
			cin>>zs;
			system("CLS");
			cout<<"Welcome into the times railway management system : "<<endl<<endl;
			if (zs==1)
			{
				char mb;
				fstream tr7("TrainG.txt",ios::in);
				tr7.seekg(ios::beg);
				while(tr7.eof()==false)
			{
				tr7.get(mb);
				cout<<mb;
			}
			tr7.close();
			}
			else if (zs==2)
			{
				char mb;
				fstream tr8("TrainH.txt",ios::in);
				tr8.seekg(ios::beg);
				while(tr8.eof()==false)
			{
				tr8.get(mb);
				cout<<mb;
			}
			tr8.close();
			}
			else if (zs==3)
			{
				char mb;
				fstream tr9("TrainI.txt",ios::in);
				tr9.seekg(ios::beg);
				while(tr9.eof()==false)
			{
				tr9.get(mb);
				cout<<mb;
			}
			tr9.close();
			}
			else 
			{
				cout<<"Wrong Input Run the Program Again:";
			}
		}
		else
		{
			cout<<"Wrong Input Run the Program Again: ";
		}
	}
}
else if((name12!="shaheer"&&password12=="12345")||(name12!="erma"&&password12=="23456")||(name12!="ahmer"&&password12=="34567")||(name12!="rohma"&&password12=="45678"))
{
	cout<<"Wrong Username Please Come Back Later";
}
else if((name12=="shaheer"&&password12!="12345")||(name12=="erma"&&password12!="23456")||(name12=="ahmer"&&password12!="34567")||(name12=="rohma"&&password12!="45678"))
{
	
	cout<<"Wrong Password Please Come Back Later";
}
else if((name12!="shaheer"&&password12!="12345")||(name12!="erma"&&password12!="23456")||(name12!="ahmer"&&password12!="34567")||(name12!="rohma"&&password12!="45678"))
{
	cout<<"Wrong Username and Password Please Come Back Later";
}
}
}
else
{
	cout<<"Wrong Input Please Try Again Later: ";
}


}

















