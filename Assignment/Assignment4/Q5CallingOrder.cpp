#include<iostream>
using namespace std;
class Student{
public:
    Student()
    {
        cout<<"Student Default Constructor"<<endl;
    }
    Student(string name,int id)
    {
        cout<<"Name of Student:"<<name<<endl;
        cout<<"ID of Student:"<<id<<endl;
    }
    ~Student()
    {
        cout<<"Student Destructor"<<endl;
    }
};

class Marks:virtual public Student{
public:
    Marks()
    {
        cout<<"Marks Default Constructor"<<endl;
    }
    Marks(string name,int id,int total,int stotal):Student(name,id)
    {
        cout<<"Total Marks in Academics:"<<total<<endl;
    }
    ~Marks()
    {
        cout<<"Marks Destructor"<<endl;
    }
};

class Sports:virtual public Student{
public:
    Sports()
    {
        cout<<"Sports Default Constructor"<<endl;
    }
    Sports(string name,int id,int total,int stotal):Student(name,id)
    {
        cout<<"Total Marks in Sports:"<<stotal<<endl;
    }
    ~Sports()
    {
        cout<<"Sports Destructor"<<endl;
    }
};

class Result:public Marks,public Sports{
public:
    Result()
    {
        cout<<"Result Default Constructor"<<endl;
    }
    Result(string name,int id,int total,int stotal):Student(name,id),Marks(name,id,total,stotal),Sports(name,id,total,stotal)
    {
        float avg;
        avg=(total+stotal)/2;
        cout<<"Average Marks in Sports:"<<avg<<endl;
    }
    ~Result()
    {
        cout<<"Result Destructor"<<endl;
    }
};

int main()
{
    cout<<"Order of Default Constructors calling"<<endl;
    Result rs1;
    cout<<"\n\n"<<endl;
    string name;
    int id,total,stotal;
    cout<<"Enter your Name:";
    getline(cin,name);
    cout<<"Enter your ID:";
    cin>>id;
    cout<<"Enter Total Marks in Academics:";
    cin>>total;
    cout<<"Enter Total Marks in Sports:";
    cin>>stotal;
    cout<<"\n\n";
    cout<<"Order of Parameterized Constructors calling"<<endl;
    Result rs2(name,id,total,stotal);
    cout<<"\n\n"<<endl;
    cout<<"Order of Destructors calling for rs1 and rs2 object"<<endl;
}
