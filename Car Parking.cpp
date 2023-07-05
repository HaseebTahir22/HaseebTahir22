#include<iostream>
using namespace std;
main()
{
	cout<<"\t\tC A R P A R K I N G"<<endl;
	int enter;
	int car=0,bike=0,rikshaw=0;
	while(true)
	{
		cout<<"Press 1 to enter car"<<endl;
		cout<<"Press 2 to enter bike"<<endl;
		cout<<"Press 3 to enter rikshaw"<<endl;
		cout<<"Press 4 to show record"<<endl;
		cout<<"Press 5 to delete record"<<endl;
		cout<<"Press 6 to exit"<<endl;
		cin>>enter;
		if(enter==1)
		{
			car++;
			system("CLS");
			cout<<"Car id Added"<<endl;
		}
		else if(enter==2)
		{
			bike++;
			system("CLS");
			cout<<"Bike is Added"<<endl;
		}
		else if(enter==3)
		{
			rikshaw++;
			system("CLS");
			cout<<"Rikshaw is Added"<<endl;
		}
		else if(enter==4)
		{
			cout<<"Car"<<car<<endl;
			cout<<"Bike"<<bike<<endl;
			cout<<"Rikshaw"<<rikshaw<<endl;
		}
		else if(enter==5)
		{
			car=0;
			bike=0;
			rikshaw=0;
			system("CLS");
			cout<<"All record is deleted..!!"<<endl;
		}
		else if(enter==6)
		{
			exit(0);
		}
		else{
			cout<<"Invalid input"<<endl;
		}
	}
}
