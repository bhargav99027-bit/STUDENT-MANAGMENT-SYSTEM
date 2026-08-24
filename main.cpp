#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void load_student()
{
    cout<<"DEVELOPMENT UNDER PROCESS"<<endl;
}

void save_student()
{
     cout<<"DEVELOPMENT UNDER PROCESS"<<endl;
}

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
  cout<<"DEVELOPMENT UNDER PROCESS"<<endl;
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
        cout<<"DEVELOPMENT UNDER PROCESS"<<endl;
    }

    void saveToFile(fstream &file) 
    {
         cout<<"DEVELOPMENT UNDER PROCESS"<<endl;
    }
};

int main() 
{
    vector<Student> s;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    cout<<"===============================STUDENT MANAGMENT SYSTEM====================================="<<endl;
    cout<<"--------------------------------------------------------------------------------------------"<<endl;
    cout<<"1--> ADD STUDENT"<<endl;
    cout<<"2--> DISPLAY STUDENTS"<<endl;
    cout<<"3--> SEARCHING STUDENT"<<endl;
    cout<<"4--> UPDATE STUDENT"<<endl;
    cout<<"5--> DELETE STUDENT"<<endl;
    cout<<"6--> SAVE STUDENT DATA"<<endl;
    cout<<"7--> LOAD STUDENT DATA"<<endl;
    cout<<"8--> DISPLAY MENU AGAIN"<<endl;
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
        s.push_back(student1);

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
        save_student();
        break;
    }
    case 7:
    {
        load_student();
        break;
    }
    case 8:
    {
      cout<<"--------------------------------------------------------------------------------------------"<<endl;
      cout<<"===============================STUDENT MANAGMENT SYSTEM====================================="<<endl;
      cout<<"--------------------------------------------------------------------------------------------"<<endl;
      cout<<"1--> ADD STUDENT"<<endl;
      cout<<"2--> DISPLAY STUDENTS"<<endl;
      cout<<"3--> SEARCHING STUDENT"<<endl;
      cout<<"4--> UPDATE STUDENT"<<endl;
      cout<<"5--> DELETE STUDENT"<<endl;
      cout<<"6--> SAVE STUDENT DATA"<<endl;
      cout<<"7--> LOAD STUDENT DATA"<<endl;
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

