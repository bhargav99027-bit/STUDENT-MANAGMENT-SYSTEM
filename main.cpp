#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void delete_student()
{
     cout<<"DEVELOPMENT UNDER PROCESS"<<endl;
}

void update_student()
{
     cout<<"DEVELOPMENT UNDER PROCESS"<<endl;
}

void display_students()
{
    cout<<"DEVELOPMENT UNDER PROCESS"<<endl;
}

void search_student()
{
     fstream file;
     string info;
     file.open("document.txt");
     if(file.is_open())
     {
        cout<<"ENTER THE STUDENT INFO : ";
        cin.ignore();
        getline(cin,info);
        string line;
        while (getline(file,line))
        {
            if(line.find(info)<info.length() && !info.empty())
            {
                cout<<line<<endl;
            }
            
        }
        file.close();
     }
     else
     {
        cout<<"ERROR IN OPENING FILE"<<endl;
     }
}

class Student {
private:
    string usn;
    string name;
    string dep;
    string dob;
    int age;
    int sem;
    float CGPA;

public:
    void getInfo() 
    {
        cout << "ENTER THE USN OF THE STUDENT: ";
        cin.ignore();
        getline(cin, usn);

        cout << "ENTER THE NAME OF THE STUDENT: ";
        getline(cin, name);

        cout << "ENTER THE DEPARTMENT OF THE STUDENT: ";
        getline(cin, dep);

        cout << "ENTER THE AGE OF STUDENT: ";
        cin >> age;

        cout << "ENTER THE DATE OF BIRTH OF THE (DD-MM-YYYY) OF THE STUDENT: ";
        cin.ignore();
        getline(cin, dob);

        cout << "ENTER THE SEMESTER: ";
        cin >> sem;

        cout << "ENTER THE CGPA OF STUDENT: ";
        cin >> CGPA;
    }

    void saveToFile(fstream &file) 
    {
         file << usn << "  " <<name << "      " << dep << "        " << age << "  "<< dob << "   " << sem << "   " << CGPA << "\n";
    }
};

int main() 
{
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    cout<<"===============================STUDENT MANAGMENT SYSTEM====================================="<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    cout<<"1--> ADD STUDENT"<<endl;
    cout<<"2--> DISPLAY STUDENTS"<<endl;
    cout<<"3--> SEARCHING STUDENT"<<endl;
    cout<<"4--> UPDATE STUDENT"<<endl;
    cout<<"5--> DELETE STUDENT"<<endl;
    cout<<"6--> DISPLAY MENU AGAIN"<<endl;
    cout<<"0--> EXIT"<<endl;
     while(1)
    {
    int  ch;
    cout<<"---------------------------------------------------------------------------------------------"<<endl;
    cout<<"ENTER YOUR CHOICE: ";
    cin>>ch;
    switch (ch)
    {

    case 1:
    {
        Student student1;
        student1.getInfo();

        fstream file("document.txt", ios::out | ios::app);
        if (file.is_open()) 
        {
           student1.saveToFile(file);
           cout << "Student data saved successfully!" << endl;
        } 
        else 
        {
           cout << "Error opening file." << endl;
        }
        file.close();
        break;
    }

    case 2:
    {
       display_students();
       break;
    }

    case 3:
    {
        search_student();
        break;
    }

    case 4:
    {
        update_student();
        break;
    }

    case 5:
    {
        delete_student();
        break;
    }
    
    case 6:
    {
      cout<<"--------------------------------------------------------------------------------------------"<<endl;
      cout<<"===============================STUDENT MANAGMENT SYSTEM====================================="<<endl;
      cout<<"--------------------------------------------------------------------------------------------"<<endl;
      cout<<"1--> ADD STUDENT"<<endl;
      cout<<"2--> DISPLAY STUDENTS"<<endl;
      cout<<"3--> SEARCHING STUDENT"<<endl;
      cout<<"4--> UPDATE STUDENT"<<endl;
      cout<<"5--> DELETE STUDENT"<<endl;
      cout<<"8--> DISPLAY MENU AGAIN"<<endl;
      cout<<"0--> EXIT"<<endl;  
        break;
    }
    case 0:
    {
        cout<<"EXITED FROM MANAGMENT"<<endl;
        return 0;
    }
    
    default:
    {
        cout<<"INVALID STATE, PLEASE TRY WHICH ARE IN MENU"<<endl;
        break;
    }
  }

 }
}

