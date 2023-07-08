#include<iostream>
#include<string.h>
#include<fstream>
#include<stdlib.h>
using namespace std;
class insurance
{
public:
string name,dob,address,aadharno,mob;
int sal,age;
void registerUser()
{
    string username, password;
    cout << "Enter a username: ";
    cin >> username;
    cout << "Enter a password: ";
    cin >> password;
    ofstream outFile("users.txt", ios::app);
    outFile << username << "," << password << endl;
    outFile.close();
}
bool loginUser()
{
    string username, password;
    cout << "Enter your username: ";
    cin >> username;
    cout << "Enter your password: ";
    cin >> password;

    ifstream inFile("users.txt");
    string line;
    while (getline(inFile, line))
        {
        size_t pos = line.find(",");
        string storedUsername = line.substr(0, pos);
        string storedPassword = line.substr(pos + 1);
        if (username == storedUsername && password == storedPassword) {
            inFile.close();
            return true;
        }
    }
    inFile.close();
    return false;
}
void choice()
{
    int choosepolicy;
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++\n";
    cout<<"+                                                     +\n";
    cout<<"+        ENTER WHICH TYPE OF POLICY YOU WANT          +\n";
    cout<<"+                                                     +\n";
    cout<<"+++++++++++++++++++++++++++++++++++++++++++++++++++++++";
    cout<<"\n        1. Automobile policy";
    cout<<"\n        2. Health policy";
    cout<<"\n        3. Travel policy";
    cout<<"\n        4. Property policy \n";
    cin>>choosepolicy;
    switch(choosepolicy)
    {
    case 1:
        {
           automobile();
           break;
        }
    case 2:
        {
           health();
           break;
        }
    case 3:
        {
           travel();
           break;
        }
    case 4:
        {
           property();
           break;
        }
    default:
        {
            cout<<".....INVALID CHOICE :).......";
            break;
        }
    }
}
void automobile()
{
    string carmodel,manufac,carno,pur;
    fflush(stdin);
    cout<<"==========MOTOR POLICY===========";
    cout<<"\n\n      Enter your Name:";
    getline(cin,name);
    cout<<"\n\n      Enter your Mobile Number:";
    cin>>mob;
    cout<<"\n\n      Enter your Address:";
    cin.ignore();
    getline(cin,address);
    cout<<"\n\n      Enter your DOB(DD MM YYYY):";
    cin>>dob;
    cout<<"\n\n      Enter your Annual Salary(in numbers):";
    cin>>sal;
    cout<<"\n\n      Enter your Age(in numbers):";
    cin>>age;
    cout<<"\n\n      Enter your Aadhar Card number:";
    cin.ignore();
    getline(cin,aadharno);
    cout<<"\n\n      Enter your Car Model:";
    getline(cin,carmodel);
    cout<<"\n\n      Enter the year of Manufacturing of your Car:";
    cin>>manufac;
    cout<<"\n\n      Enter your Car's Registration Number (eg: MH46BAXXXX):";
    cin>>carno;
    cout<<"\n\n      What do you use your Car for?";
    cin.ignore();
    getline(cin,pur);
}
void health()
{
    string relationship,health,allergies;
    fflush(stdin);
    cout<<"==========HEALTH POLICY===========";
    cout<<"\n\n    Enter your Name:";
    getline(cin,name);
    cout<<"\n\n    Enter your Mobile Number:";
    cin>>mob;
    cin.ignore();
    cout<<"\n\n    Enter your Address:";
    cin.ignore();
    getline(cin,address);
    cout<<"\n\n    Enter your DOB(DD MM YYYY):";
    cin>>dob;
    cout<<"\n\n    Enter your Annual Salary(in numbers):";
    cin>>sal;
    cout<<"\n\n    Enter your Age(in numbers):";
    cin>>age;
    cout<<"\n\n    Enter your Aadhar Card number:";
    getline(cin,aadharno);
    cout<<"\n\n    Enter your Relationship Status:";
    cin>>relationship;
    cout<<"\n\n    Did you had any Health issues before or now?If yes then which:";
    getline(cin,health);
    cout<<"\n\n    Do you have any type of Allergies?If yes then which:";
    getline(cin,allergies);
}
void travel()
{
    string travel,arrival,country,reason;
    cout<<"==========TRAVEL POLICY===========";
    cout<<"\n\n    Enter your Name:";
    getline(cin,name);
    cout<<"\n\n    Enter your Mobile Number:";
    cin>>mob;
    cin.ignore();
    cout<<"\n\n    Enter your Address:";
    cin.ignore();
    getline(cin,address);
    cout<<"\n\n    Enter your DOB(DD MM YYYY):";
    cin>>dob;
    cout<<"\n\n    Enter your Annual Salary(in numbers):";
    cin>>sal;
    cout<<"\n\n    Enter your Age(in numbers):";
    cin>>age;
    cout<<"\n\n    Enter your Aadhar Card number:";
    getline(cin,aadharno);
    cout<<"\n\n    Enter your Travel Date:";
    cin>>travel;
    cout<<"\n\n    Enter your Arrival Date:";
    cin>>arrival;
    cout<<"\n\n    Enter the Country you are Visiting:";
    getline(cin,country);
    cout<<"\n\n    Enter the Reason for Visit:";
    getline(cin,reason);
}
void property()
{
    string owner;
    int tax,price;
    cout<<"==========PROPERTY POLICY===========";
    cout<<"\n\n    Enter your name:";
    getline(cin,name);
    cout<<"\n\n    Enter your Mobile Number:";
    cin>>mob;
    cin.ignore();
    cout<<"\n\n    Enter your Address:";
    cin.ignore();
    getline(cin,address);
    cout<<"\n\n    Enter your DOB(DD MM YYYY):";
    cin>>dob;
    cout<<"\n\n    Enter your Annual Salary(in numbers):";
    cin>>sal;
    cout<<"\n\n    Enter your Age(in numbers):";
    cin>>age;
    cout<<"\n\n    Enter your Aadhar Card number:";
    getline(cin,aadharno);
    cout<<"\n\n    Enter the Owner Name of the Property:";
    getline(cin,owner);
    cout<<"\n\n    Enter the Property's Tax Bill Number:";
    cin>>tax;
    cout<<"\n\n    Enter the Price of the Property:"<<"\n";
    cin>>price;
}
};
class policy:virtual public insurance
{
 public:
    void choose()
    {
        int chooseinsurance;
      cout<<"\n*****************************************************\n";
        cout<<"*                                                   *\n";
        cout<<"*            CHOOSE YOUR YEARLY PACKAGE             *\n";
        cout<<"*                                                   *\n";
        cout<<"*****************************************************";
        cout<<"\n           1.TATA AIG";
        cout<<"\n             Premium:(p.a) 10,000";
        cout<<"\n\n         2.ICICI Lombard";
        cout<<"\n             Premium:(p.a) 12,000";
        cout<<"\n\n         3.BAJAJ Allianz";
        cout<<"\n             Premium:(p.a) 18,000";
        cin>>chooseinsurance;
        switch(chooseinsurance)
        {
        case 1:
            {
                TATA();
                break;
            }
        case 2:
            {
                ICICI();
                break;
            }
        case 3:
            {
                BAJAJ();
                break;
            }
        default:
            {
                cout<<".....INVALID CHOICE :).......";
                break;
            }
        }
    }
    void TATA()
    {
        float month1;
       month1=10,000/12;
       cout<<"-------------------------------------------TATA AIG------------------------------------------------------";
       cout<<" \n     YOUR BILL:";
       cout<<" \n     Name              : "<<name;
       cout<<" \n     Mobile Number     : "<<mob;
       cout<<" \n     Address           : "<<address;
       cout<<" \n     DOB               : "<<dob;
       cout<<" \n     Annual Salary     : "<<sal;
       cout<<" \n     Age               : "<<age;
       cout<<" \n     Aadhar Card Number: "<<aadharno;
       cout<<" \n     Package           : 10,000";
       cout<<" \n     Payment Per Year  : "<<month1;
    cout<<"\n ---------------------------------------------------------------------------------------------------------";
}
void ICICI()
{
    float month2;
    month2=12,000/12;
       cout<<"-------------------------------------------ICICI Lombard-------------------------------------------------";
       cout<<" \n     YOUR BILL:";
       cout<<" \n     Name              : "<<name;
       cout<<" \n     Mobile Number     : "<<mob;
       cout<<" \n     Address           : "<<address;
       cout<<" \n     DOB               : "<<dob;
       cout<<" \n     Annual Salary     : "<<sal;
       cout<<" \n     Age               : "<<age;
       cout<<" \n     Aadhar Card Number: "<<aadharno;
       cout<<" \n     Package           : 12,000";
       cout<<" \n     Payment Per Year  : "<<month2;
    cout<<"\n ---------------------------------------------------------------------------------------------------------";
}
void BAJAJ()
{
    float month3;
    month3=18,000/12;
       cout<<"-------------------------------------------BAJAJ Allianz-------------------------------------------------";
       cout<<" \n     YOUR BILL:";
       cout<<" \n     Name              : "<<name;
       cout<<" \n     Mobile Number     : "<<mob;
       cout<<" \n     Address           : "<<address;
       cout<<" \n     DOB               : "<<dob;
       cout<<" \n     Annual Salary     : "<<sal;
       cout<<" \n     Age               : "<<age;
       cout<<" \n     Aadhar Card Number: "<<aadharno;
       cout<<"| \n     Package           : 18,000";
       cout<<"| \n     Payment Per Year  : "<<month3;
    cout<<"\n ---------------------------------------------------------------------------------------------------------";
}
};
int main()
{
    policy p;
    policy *pob=&p;
    cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WELCOME TO POLICY BAZAAR~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n";
    int choice;
    do {
        cout << "\n1. Register\n2. Login\n3. Quit\n";
        cin >> choice;
        switch (choice)
        {
            case 1:
                pob->registerUser();
                break;
            case 2:
                {
                if (pob->loginUser())
                    {
                    cout << "Login successful.\n";
                    pob->choice();
                    pob->choose();
                    break;
                }
                 else
                    {
                    cout << "Invalid username or password.\n";
                }
                }
                break;
            case 3:
                return 0;
            default:
                cout << "Invalid choice.\n";
        }
    } while (true);
    cout<<"\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~THANK YOU FOR VISITING US :)~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~";
}

