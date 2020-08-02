#include<iostream>
using namespace std;
class Account{
private:
    int accBal;
public:
    Account(int accBal)
    {
        if(accBal>=0)
        {
            this -> accBal=accBal;
        }
        else
        {
            this -> accBal=0;
            cout<<"Invalid Initial Account Balance\n";
        }
    }
    void Credit(int amount)
    {
        accBal=accBal+amount;
    }
    void Debit(int amount)
    {
        if(accBal>=amount)
        {
            accBal=accBal-amount;
        }
        else
            cout<<"Debit amount exceeded account balance\n";
    }
    int getBalance()
    {
        return accBal;
    }
};
int main()
{
    int accBal,amount;
    cout<<"Enter Account Balance for Account1:";
    cin>>accBal;
    Account acc1(accBal);
    cout<<"Enter Account Balance for Account2:";
    cin>>accBal;
    Account acc2(accBal);
    cout<<"Account1 Initial Balance: "<<acc1.getBalance()<<"\nAccount2 Initial Balance: "<<acc2.getBalance()<<endl;
    cout<<"Enter Credit Amount for Account1:";
    cin>>amount;
    acc1.Credit(amount);
    cout<<"Enter Credit Amount for Account2:";
    cin>>amount;
    acc2.Credit(amount);
    cout<<"Account1 Balance after Credit: "<<acc1.getBalance()<<"\nAccount2 Balance after Credit: "<<acc2.getBalance()<<endl;
    cout<<"Enter Debit Amount for Account1:";
    cin>>amount;
    acc1.Debit(amount);
    cout<<"Enter Debit Amount for Account2:";
    cin>>amount;
    acc2.Debit(amount);
    cout<<"Account1 Balance after Debit: "<<acc1.getBalance()<<"\nAccount2 Balance after Debit: "<<acc2.getBalance()<<endl;
}
