#include<iostream>
#include<cstring>
#include "Invoice.h"
using namespace std;
Invoice::Invoice(string no,string desc,int qty,int p)
    {
        pno=no;
        pdesc=desc;
        if(qty<0)
            {
                quantity=0;
            }
        else
            {
                quantity=qty;
            }
        if(p<0)
            {
                price=0;
            }
        else
            {
                price=p;
            }
    }
void Invoice::setPartNumber(string no)
    {
        pno=no;
    }
string Invoice::getPartNumber()
    {
        return pno;
    }
void Invoice::setPartDesc(string desc)
    {
        pdesc=desc;
    }
string Invoice::getPartDesc()
    {
        return pdesc;
    }
void Invoice::setQuantity(int qty)
    {
        if(qty<0)
        {
            quantity=0;
        }
        else
        {
            quantity=qty;
        }
    }
int Invoice::getQuantity()
    {
        return quantity;
    }
void Invoice::setPrice(int p)
    {
        if(p<0)
        {
            price=0;
        }
        else
        {
            price=p;
        }
    }
int Invoice::getPrice()
    {
        return price;
    }
int Invoice::getInvoiceAmount()
    {
        int invamt=quantity*price;
        return invamt;
    }
void Invoice::display()
    {
        cout<<"\n\nPart Number for item1:"<<pno<<endl;
        cout<<"Part Description for item1:"<<pdesc<<endl;
        cout<<"Quantity for item1:"<<quantity<<endl;
        cout<<"Price per Item for item1:"<<price<<endl;
    }
