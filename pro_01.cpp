#include<iostream>
using namespace std;

//to display first screen
 void welcome(){
 	cout<<"************* EXPENSE TRACKER *******************"<<endl;
 	cout<<"Choose an option :- "<<endl;
 	cout<<"1.Detail"<<endl;
 	cout<<"2.Budget"<<endl;
	cout<<"3.Summary"<<endl;
	cout<<"4.Goal"<<endl;
	cout<<"5.Bill payment"<<endl;
	return;
 }
 
 //to get the choice
 int choice(){
 	int n;
 	cin>>n;
 	return n;
 	
 }
 
 // functions
 int functions(int n){
 	switch(n){
 		// to print details
 		case 1:
 			int temp;
 			cout<<"*********DETAILS********"<<endl;
 			cout<<"CHOOSE CATEGORY:- "<<endl;
 			cout<<"1.Groceries"<<endl;
 			cout<<"2.Transportation"<<endl;
 			cout<<"3.Entertainment"<<endl;
 			cout<<"Select one option :-"<<endl;
 			cin>> temp;
 			return temp;
 			break;
 			
 		//to print budget
 		case 2:
 			int i,j;
 			cout<<"*******BUDGET**********"<<endl;
 			cout<<"Choose from following :-"<<endl;
 			cout<<"1.monthly"<<endl;
 			cout<<"2.Weekely"<<endl;
 			cout<<"Choose one option:-"<<endl;
 			cin>>i;
 			cout<<"Set Budget:-"<<endl;
 			cin>>j;
 			cout<<"Thanks For Visiting :)"<<endl;
 			break;
 			
 		// to get summry
 		case 3:
 			cout<<"*********SUMMARY*******"<<endl;
 			break;
 		
 		// to set goal
 		case 4:
 			int l;
 			cout<<"********GOAL*********"<<endl;
 			cout<<"Choose from following :-"<<endl;
 			cout<<"1.old Goal"<<endl;
 			cout<<"2.Set new Goal"<<endl;
 			cin>>l;
 			if(l == 1){
 				cout<<"Sorry You have No goal selected"<<endl;	
				cout<<"Thanks For Visiting :)"<<endl;	
			 }
			 else{
			 	char obj[40];
				int num,total;
			 	cout<<"********Set a New Goal *******8"<<endl;
			 	cout<<"What you want to buy :-"<<endl;
			 	cin>>obj;
			 	cout<<"Enter its amount:- "<<endl;
			 	cin>>num;
			 	cout<<"Enter total amt in bank:"<<endl;
			 	cin>>total;
			 	cout<<"The required amount is:-"<<endl;
			 	cout<<total-num<<endl;
			 	cout<<"Thanks For Visiting :)"<<endl;	
			 	
			 }
 			break;
 		
 		//to set bills
 		case 5:
 			cout<<"********Bill Payment*********"<<endl;
 			cout<<"Choose from following :-"<<endl;
		 	cout<<"1.Electricity"<<endl;
 			cout<<"2.Rent"<<endl;
 			cout<<"3.water"<<endl;
 			cout<<"4.Customise"<<endl;
 			break;
	 }
 }
 
 void grocery(int temp){
 	switch(temp){
 		case 1 :
 			int date,amt;
 			cout<<"********Groceries**********"<<endl;
 			cout<<"Enter date :-"<<endl;
 			cin>>date;
 			cout<<"Enter Amount :-"<<endl;
 			cin>>amt;
 			break;
 		case 2:
 			int a;
 			cout<<"******TRANSPORTATION**********"<<endl;
 			cout<<"Enter amount: "<<endl;
 			cin>>a;
 			break;
 		case 3:
 			int da,am;
 			cout<<"******ENTERTAINMENT********"<<endl;
 			cout<<"Enter date :-"<<endl;
 			cin>>da;
 			cout<<"Enter Amount :-"<<endl;
 			cin>>am;
 			break;
	 }
 }
 int main(){
 
	welcome();
	int n=choice();
   int temp=functions(n);
   if(n==1){
   	grocery(temp);
   }
	
 	return 0;
 }
 
