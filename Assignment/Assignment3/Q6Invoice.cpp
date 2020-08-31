#include<iostream>
#include<cstring>
#include<cstdio>
using namespace std;
class Invoice
{
private:
    string pno;
    string pdesc;
    int quantity;
    int price;
public:
   Invoice(string no,string desc,int qty,int p)
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
    void setPartNumber(string no)
    {
        pno=no;
    }
    string getPartNumber()
    {
        return pno;
    }
    void setPartDesc(string desc)
    {
        pdesc=desc;
    }
    string getPartDesc()
    {
        return pdesc;
    }
    void setQuantity(int qty)
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
    int getQuantity()
    {
        return quantity;
    }
    void setPrice(int p)
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
    int getPrice()
    {
        return price;
    }
    int getInvoiceAmount()
    {
        int invamt=quantity*price;
        return invamt;
    }
    void display()
    {
        cout<<"\n\nPart Number for item1:"<<pno<<endl;
        cout<<"Part Description for item1:"<<pdesc<<endl;
        cout<<"Quantity for item1:"<<quantity<<endl;
        cout<<"Price per Item for item1:"<<price<<endl;
    }
};
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
