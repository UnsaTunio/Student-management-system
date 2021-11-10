  #include<iostream>



using namespace std;

string arr1[20],arr2[20],arr3[20],arr4[20],arr5[20];

int total=0;

void enter()

{

		int ch=0;

			cout<<"\n\n\t\tHow many students do u want to enter??"<<endl;
			cout<<"\n\t\t";

			cin>>ch;

			if(total==0)

			{

			total=ch+total;

			for(int i=0;i<ch;i++)

			{

				cout<<"\n\n\t\tEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"\n\n\t\tEnter name ";

				cin>>arr1[i];

				cout<<"\n\n\t\tEnter Roll no ";

				cin>>arr2[i];

				cout<<"\n\n\t\tEnter Department ";

				cin>>arr3[i];

				cout<<"\n\n\t\tEnter Year ";

				cin>>arr4[i];

				cout<<"\n\n\t\tEnter contact ";

				cin>>arr5[i];

				

			}

	    	}

	    	else

	    	{

	    		

	    		for(int i=total;i<ch+total;i++)

			{

				cout<<"\n\n\t\tEnter the Data of student "<<i+1<<endl<<endl;

				cout<<"\n\n\t\tEnter name ";

				cin>>arr1[i];

				cout<<"\n\n\t\tEnter Roll no ";

				cin>>arr2[i];

				cout<<"\n\n\t\tEnter Department ";

				cin>>arr3[i];

				cout<<"\n\n\t\tEnter Year ";

				cin>>arr4[i];

				cout<<"\n\n\t\tEnter contact ";

				cin>>arr5[i];

			}

			total=ch+total;

			}

	

}

void show()

{

	if(total==0)

	{

		cout<<"\n\n\t\tNo data is entered"<<endl;

	}

	else{

		for(int i=0;i<total;i++)

	    		{

	    		cout<<"\n\n\t\tData of Student "<<i+1<<endl<<endl;

	    		cout<<"\n\n\t\tName "<<arr1[i]<<endl;

	    		cout<<"\n\n\t\tRoll no "<<arr2[i]<<endl;

	    		cout<<"\n\n\t\tDepartment "<<arr3[i]<<endl;

	    		cout<<"\n\n\t\tYear "<<arr4[i]<<endl;

	    		cout<<"\n\n\t\tContact "<<arr5[i]<<endl;

	    	    }

	    	}

}

void search()

{

	if(total==0)

	{

		cout<<"\n\n\t\tNo data is entered"<<endl;

	}

	else{

	string rollno;

				cout<<"\n\n\t\tEnter the roll no of student"<<endl;
			    
				cout<<"\n\n\t\t";	

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						cout<<"\n\n\t\tName "<<arr1[i]<<endl;

	    	        	cout<<"\n\n\t\tRoll no "<<arr2[i]<<endl;

	    		        cout<<"\n\n\t\tDepartment "<<arr3[i]<<endl;

	    		        cout<<"\n\n\t\tYear "<<arr4[i]<<endl;

	    	        	cout<<"\n\n\t\tContact "<<arr5[i]<<endl;

					}

				}

			}

}

void update()

{

	if(total==0)

	{

		cout<<"\n\n\t\tNo data is entered"<<endl;

	}

	else{

		string rollno;

				cout<<"\n\n\t\tEnter the roll no of student which you want to update"<<endl;
				
				cout<<"\n\n\t\t";

				cin>>rollno;

					for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						cout<<"\n\n\t\tPrevious data"<<endl<<endl;

						cout<<"\n\n\t\tData of Student "<<i+1<<endl;

						cout<<"\n\n\t\tName "<<arr1[i]<<endl;

	    	        	cout<<"\n\n\t\tRoll no "<<arr2[i]<<endl;

	    		        cout<<"\n\n\t\tDepartment "<<arr3[i]<<endl;

	    		        cout<<"\n\n\t\tYear "<<arr4[i]<<endl;

	    	        	cout<<"\n\n\t\tContact "<<arr5[i]<<endl;

	    	        	cout<<"\n\n\t\tEnter new data"<<endl<<endl;

							cout<<"\n\n\t\tEnter name ";

				            cin>>arr1[i];

				            cout<<"\n\n\t\tEnter Roll no ";

				            cin>>arr2[i];

			             	cout<<"\n\n\t\tEnter Department ";

				            cin>>arr3[i];

				            cout<<"\n\n\t\tEnter Year ";

				            cin>>arr4[i];

				            cout<<"\n\n\t\tEnter contact ";

				            cin>>arr5[i];

					}

				}

			}

		}



void deleterecord()

{

	if(total==0)

	{

		cout<<"\n\n\t\tNo data is entered"<<endl;

	}

	else{

		int a;

	        	cout<<"\n\n\t\tPress 1 to delete all record"<<endl;

				cout<<"\n\n\t\tPress 2 to delete specific record"<<endl;
				
				cout<<"\n\n\t\t";

				cin>>a;

				if(a==1)

				{

					total=0;

					cout<<"\n\n\t\tAll record is deleted..!!"<<endl;

				}

				else if(a==2)

				{

				string rollno;

				cout<<"\n\n\t\tEnter the roll no of student which you wanted to delete"<<endl;
				
				cout<<"\n\n\t\t";	

				cin>>rollno;

				for(int i=0;i<total;i++)

				{

					if(rollno==arr2[i])

					{

						for(int j=i;j<total;j++)

						{

						arr1[j]=arr1[j+1];

						arr2[j]=arr2[j+1];

					    arr3[j]=arr3[j+1];

						arr4[j]=arr4[j+1];

						arr5[j]=arr5[j+1];

				     	}

					total--;

					cout<<"\n\n\t\tYour required record is deleted"<<endl;

					}

				}

				}

				 

			

			else 

			{

				cout<<"\n\n\t\tInvalid input";

			}

}

}

main()

{
	

	int value;

	while(true)

	{
		cout<<"\n\n\n\t\t STUDENT MANAGEMENT SYSTEM ";
		cout<<"\n\t\t---------------------------";
		cout<<"\n\t\t***************************";

	cout<<"\n\n\t*\t 1. Press 1 to enter data\t*\n";

	cout<<"\n\n\t*\t 2. Press 2 to show data\t*\n";

	cout<<"\n\n\t*\t 3. Press 3 to search data\t*\n";

	cout<<"\n\n\t*\t 4. Press 4 to update data\t*\n";

	cout<<"\n\n\t*\t 5. Press 5 to delete data\t*\n";

	cout<<"\n\n\t*\t 6. Press 6 to exit\t\t*\n";
	
		cout<<"\n\t\t---------------------------";
		cout<<"\n\t\t***************************";
		
	cout<<"\n\n\t\t";	

	cin>>value;

	switch(value)

	{

		case 1:

			enter();

			break;

		case 2:

			show();

			break;

		case 3:

			search();

			break;

		case 4:

			update();

			break;

		case 5:

			deleterecord();

			break;

		case 6:

			exit(0);

			break;

		default:

			cout<<"Invalid input"<<endl;

			break;

	}

}

}
