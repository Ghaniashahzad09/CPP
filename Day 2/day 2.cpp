#include<iostream>
#include<cctype>
using namespace std;
int main()
{
   int choice;
   double C,F;

   cout<<"In which you want to convert?"<<endl;

   cout<< "\n 1. Fahrenhiet to celcius"<<endl;
   cout<< "\n 2. Celcius to Fahrenhiet"<<endl;
   
   	
   cout<<"\n Enter your choice: ";
   while(!(cin>>choice)|| cin.peek()!='\n'|| isalpha(cin.peek()))
  {
  	cout<<"\n Invalid input.Please enter an integer: ";
  	cin.clear();
  	cin.ignore(1000,'\n');
  }

   if(choice==1)
   {
   	cout<<"\n Enter temprature in Fahrenhiet: ";
   	 while(!(cin>>F)|| cin.peek()!='\n'|| isalpha(cin.peek()))
  {
  	cout<<"\n Invalid input.Please enter an integer: ";
  	cin.clear();
  	cin.ignore(1000,'\n');
  }

    cout<<"\n The temprature in celcius is: "<<(F-32)*5/9;
     
   }

   else if(choice==2)
   {
   		cout<<"\n Enter temprature in Celcius: ";
   		 while(!(cin>>C)|| cin.peek()!='\n'|| isalpha(cin.peek()))
        {
        	cout<<"\n Invalid input.Please enter an integer";
        	cin.clear();
  	        cin.ignore(1000,'\n');
        }

        cout<<"\n The temprature in Fahrenhiet is: "<<(C- 9/5)+32;
   }
   else{
    cout<<"Invalid input";
   }

}