#include<iostream>
#include<cstring>
#include<cstdio>
#include "Invoice.h"
using namespace std;
int main()
{
    string no,desc;
    int qty,p;
    cout<<"Enter the part Number for item1:";
    getline(cin,no);
    cout<<"Enter the part Description for item1:";
    getline(cin,desc);
    cout<<"Enter the Quantity for item1:";
    cin>>qty;
    cout<<"Enter the Price per item for item1:";
    cin>>p;
    Invoice i1(no,desc,qty,p);
    fflush(stdin);
    cout<<"\n\nEnter the part Number for item2:";
    getline(cin,no);
    cout<<"Enter the part Description for item2:";
    getline(cin,desc);
    cout<<"Enter the Quantity for item2:";
    cin>>qty;
    cout<<"Enter the Price per item for item2:";
    cin>>p;
    Invoice i2(no,desc,qty,p);
    i2.setPartNumber(no);
    i2.setPartDesc(desc);
    i2.setQuantity(qty);
    i2.setPrice(p);
    i1.display();
    cout<<"The invoice amount for item1 is : "<<i1.getInvoiceAmount()<<endl;
    cout<<"\n\nPart Number for item2:"<<i2.getPartNumber()<<endl;
    cout<<"Part Description for item2:"<<i2.getPartDesc()<<endl;
    cout<<"Quantity for item2:"<<i2.getQuantity()<<endl;
    cout<<"Price per Item for item2:"<<i2.getPrice()<<endl;
    cout<<"The invoice amount for item2 is : "<<i2.getInvoiceAmount()<<endl;
    return 0;
}
