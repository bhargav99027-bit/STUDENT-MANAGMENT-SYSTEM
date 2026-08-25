#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

void delete_student()
{
     
     string target;
     ofstream TempFile;
     ifstream DocumentFile;
     TempFile.open("temp.txt");
     DocumentFile.open("document.txt");
     if(TempFile.is_open() && DocumentFile.is_open())
     {
       cout<<"ENTER THE STUDENT USN TO DELETE : ";
       cin.ignore();
       getline(cin,target);
       string line;
       while (getline(DocumentFile,line))
       {
         if( (line.find(target)<line.length()) && !line.empty())
         {
             cout<<"DELETED THE DATA OF THE STUDENT WHO'S USN IS :"<<target<<endl;
         }
         else
         {
            TempFile<<line<<endl;
         }

       }
       TempFile.close();
       DocumentFile.close();
       remove("document.txt");
       rename("temp.txt","document.txt");
       
     }
     else
     {
        cout<<"ERROR IN OPENING FILES"<<endl;
     }
}

void update_student()
{
     string target;
     ofstream TempFile;
     ifstream DocumentFile;
     TempFile.open("temp.txt");
     DocumentFile.open("document.txt");
     if(TempFile.is_open() && DocumentFile.is_open())
     {
       cout<<"ENTER THE STUDENT USN TO UPDATE : ";
       cin.ignore();
       getline(cin,target);
       string line;
       while (getline(DocumentFile,line))
       {
         if( (line.find(target)<line.length()) && !line.empty())
         {
             string usn;
             string name;
             string dep;
             string dob;
             int age;
             int sem;
             float CGPA;

             cout << "ENTER THE UDATED USN OF THE STUDENT: ";
             getline(cin, usn);

             cout << "ENTER THE UDATED NAME OF THE STUDENT: ";
             getline(cin, name);

             cout << "ENTER THE UDATED DEPARTMENT OF THE STUDENT: ";
             getline(cin, dep);

             cout << "ENTER THE UDATED AGE OF STUDENT: ";
             cin >> age;

             cout << "ENTER THE UDATED DATE OF BIRTH OF THE (DD-MM-YYYY) OF THE STUDENT: ";
             cin.ignore();
             getline(cin, dob);

             cout << "ENTER THE UDATED SEMESTER: ";
             cin >> sem;

             cout << "ENTER THE UDATED CGPA OF STUDENT: ";
             cin >> CGPA;

             //copying the updated data to the file
             TempFile<< usn << "  " <<name << "      " << dep << "        " << age << "  "<< dob << "   " << sem << "   " << CGPA << "\n";
             cout << endl;
             cout<<"STUDENT DATA UPDATED SUCCESSFULLY !"<<endl;

         }
         else
         {
            TempFile<<line<<endl;
         }

       }
       TempFile.close();
       DocumentFile.close();
       remove("document.txt");
       rename("temp.txt","document.txt");
       
     }
     else
     {
        cout<<"ERROR IN OPENING FILES"<<endl;
     }
}

void display_students()
{
    fstream file;
     string info;

     file.open("document.txt");
     if(file.is_open())
     {
        string line;
        while (getline(file,line))
        {
            cout<<line<<endl;
        }
        file.close();
        cout<<"`````````````````````````````````````````````````````````````````"<<endl;
     }
     else{
        cout<<"ERROR IN OPENING FILE"<<endl;
     }
}

void search_student()
{
     fstream file;
     string info;
     file.open("document.txt");
     if(file.is_open())
     {
        cout<<"ENTER THE STUDENT USN : ";
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

    Student()
    {
        usn="";
        name="";
        dep="";
        dob="00-00-0000";
        age=0;
        sem=0;
        CGPA=0.0f;
    }


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
           cout << "STUDENT DATA SAVED SUCCESSFULLY !"<< endl;
        } 
        else 
        {
           cout << "ERROR IN OPENING FILE." << endl;
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
      cout<<"6--> DISPLAY MENU AGAIN"<<endl;
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

