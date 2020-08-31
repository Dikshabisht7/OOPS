#include<iostream>
#include<cstring>
using namespace std;
class Invoice
{
private:
    string pno;
    string pdesc;
    int quantity;
    int price;
public:
    Invoice(string ,string ,int ,int );
    void setPartNumber(string );
    string getPartNumber();
    void setPartDesc(string );
    string getPartDesc();
    void setQuantity(int );
    int getQuantity();
    void setPrice(int );
    int getPrice();
    int getInvoiceAmount();
    void display();
};
