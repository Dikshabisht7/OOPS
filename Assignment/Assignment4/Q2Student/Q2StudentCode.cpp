#include<iostream>
using namespace std;

class Student{
public:
    void display()
    {
        cout<<"\nStudent"<<endl;
    }
};

class UnderGraduateStudent:public Student{
public:
    void display()
    {
        cout<<"UnderGraduate Student"<<endl;
    }
};

class GraduateStudent:public Student{
public:
    void display()
    {
        cout<<"Graduate Student"<<endl;
    }
};

class Freshman:public UnderGraduateStudent{
public:
    void display()
    {
        fflush(stdin);
        string name,age;
        cout<<"\n\nEnter details of Freshman"<<endl;
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter age:";
        cin>>age;
        cout<<"\nName of Freshman:"<<name<<endl;
        cout<<"Age of Freshman:"<<age<<endl;
    }
};

class Senior:public UnderGraduateStudent{
public:
    void display()
    {
        fflush(stdin);
        string name,age;
        cout<<"\n\nEnter details of Senior"<<endl;
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter age:";
        cin>>age;
        cout<<"\nName of Senior:"<<name<<endl;
        cout<<"Age of Senior:"<<age<<endl;
    }
};

class Junior:public UnderGraduateStudent{
public:
    void display()
    {
        fflush(stdin);
        string name,age;
        cout<<"\n\nEnter details of Junior"<<endl;
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter age:";
        cin>>age;
        cout<<"\nName of Junior:"<<name<<endl;
        cout<<"Age of Junior:"<<age<<endl;
    }
};

class DoctoralStudent:public GraduateStudent{
public:
    void display()
    {
        fflush(stdin);
        string name,age;
        cout<<"\n\nEnter details of Doctoral Student"<<endl;
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter age:";
        cin>>age;
        cout<<"\nName of Doctoral Student:"<<name<<endl;
        cout<<"Age of Doctoral Student:"<<age<<endl;
    }
};

class MastersStudent:public GraduateStudent{
public:
    void display()
    {
        fflush(stdin);
        string name,age;
        cout<<"\n\nEnter details of Masters Student"<<endl;
        cout<<"Enter name:";
        getline(cin,name);
        cout<<"Enter age:";
        cin>>age;
        cout<<"\nName of Masters Student:"<<name<<endl;
        cout<<"Age of Masters Student:"<<age<<endl;
    }

};

int main()
{
    int ch;
    cout<<"Menu:\n1-UnderGraduate Student\n2-Graduate Student"<<endl;
    cin>>ch;
    if(ch==1)
    {
        Freshman f;
        f.Student::display();
        f.UnderGraduateStudent::display();
        f.display();
        Senior s;
        s.display();
        Junior j;
        j.display();
    }
    else
    {
        DoctoralStudent ds;
        ds.Student::display();
        ds.GraduateStudent::display();
        ds.display();
        MastersStudent ms;
        ms.display();
    }
}
