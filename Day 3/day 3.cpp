#include<iostream>
#include <cstdlib>  
#include <ctime> 

using namespace std;

bool validatePhoneNumber(const string& phoneNumber) {
    if (phoneNumber.length() == 10 && isdigit(phoneNumber[0]) && phoneNumber[0] != '0') {
        return true;
    }
    cout<<"\n Error: Phone Number must based on 10 Digits and not contain Alphabets , Re-Enter: ";
    return false;
}

int main()
{
	string name, last_name, father_name,phoneNumber, address;
    int date, month, year,age;

    while (true) {
       
      cout<<"\n Enter your first name: ";
       getline(cin, name);
        bool containsDigit = false;
       for (char c : name) {
            if (isdigit(c)) {
               containsDigit = true;
               break;
           }
        }

        if (containsDigit) {
            cout << "\n Error: Please enter a valid string without numbers." << endl;
        } else {
            break;
        }
   }
     while (true) {
       
      cout<<"\n Enter your last name: ";
        getline(cin, last_name);
      bool containsDigit = false;
       for (char c : last_name) {
          if (isdigit(c)) {
               containsDigit = true;
               break;
           }
        }

       if (containsDigit) {
           cout << "\n Error: Please enter a valid string without numbers." << endl;
       } else {
           break;
        }
  }


    while (true) {
        cout << "\n Enter your father's name: ";
        getline(cin, father_name);
        bool containsDigit = false;
        for (char c : father_name) {
            if (isdigit(c)) {
                containsDigit = true;
                break;
           }
        }

        if (containsDigit) {
            cout << "\n Error: Please enter a valid string without numbers." << endl;
       } else {
            break;
        }
   }
    
   cout << "\n Enter birth date between (1-31): ";
    while (!(cin >> date) || cin.peek() != '\n' || isalpha(cin.peek()) || (date < 1 || date > 31)) {
        cout << "\n Invalid input. Please enter an integer: ";  
        cin.clear();
        cin.ignore(1000, '\n');
    }

   cout << "\n Enter birth month between(1-12): ";
    while (!(cin >> month) || cin.peek() != '\n' || isalpha(cin.peek()) || ( month < 1 || month > 12) ) {

        cout << "\n Invalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(1000, '\n');
    }
    
   cout << "\nEnter birth year between (1990-2024): ";
    while (!(cin >> year) || cin.peek() != '\n' || isalpha(cin.peek()) || (year < 1990 || year > 2024)) {
        cout << "\nInvalid input. Please enter an integer: ";
        cin.clear();
        cin.ignore(1000, '\n');
    } 

  do{
  	
  	cout<<"\n Enter phone number: ";
  	cin>>phoneNumber;
  	
    }while(!(validatePhoneNumber(phoneNumber)));
   

   cout<<"\n Enter your address: ";
   cin >> address;

    age=2024-year;
    cout<<"\n Your age is: "<<age<<endl;
   
    srand(time(0));
    int rollNumber = rand() % 90000 + 10000;
    cout << "\n Generated Roll Number: " << rollNumber << endl;

system("cls");
cout<<"\n ----------Student details----------"<<endl;
cout<<"\n Roll number: "<<rollNumber<<endl;
cout<<"\n First Name: "<<name<<endl;
cout<<"\n Last Name: "<<last_name<<endl;
cout<<"\n Father's Name: "<<father_name<<endl;
cout<<"\n Date of birth: "<<date<<"/"<<month<<"/"<<year<<endl;
cout<<"\n Phone Number: "<<phoneNumber<<endl;
cout<<"\n Address: "<<address<<endl;
cout<<"\n Age: "<<age;

    return 0;

}