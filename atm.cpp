#include<iostream>
using namespace std;
class ATM{
    private:
    int balance;
    public:
    ATM(int bal)
    {
        balance=bal;
    }
    int getBalance(){
        return  balance;
    }
    int withDraw(int amount){
        if(amount>balance){
            return false;
        }
        balance=balance -amount;
        return true;
       
    }
    void deposit(int amount){
        balance=balance+amount;
    }

};
int main(){
    ATM atm(1000);
   int choice,amount,success;
   char op;
   do{
    cout<<"1.View balance"<<endl;
    cout<<"2.Cash Withdraw"<<endl;
    cout<<"3.Cash Deposit"<<endl;
    cout<<"4.Exit"<<endl;
    cout<<"Enter your choice:";
    cin>>choice;
    //cout<<"your available Balance is:"<<atm.getBalance()<<endl;
    switch(choice){
        case 1:
        cout<<"your available Balance is:"<<atm.getBalance()<<endl;
        break;
        case 2:
        cout<<"Enter amount to withdraw";
        cin>>amount;
        success=atm.withDraw(amount);
        if(success){
            cout<<"withdraw successful"<<endl;
        }else{
            cout<<"Insufficient balance"<<endl;
        }
        break;
        case 3:
        cout<<"Enter amount to deposit:";
        cin>>amount;
        atm.deposit(amount);
        cout<<"Deposit Successfully"<<endl;
        break;
        case 4:
        cout<<"Thanks for using ATM"<<endl;
        break;
        default:
        cout<<"Invalid choice"<<endl;
      }
   cout<<"Do you want to do another transaction[yes/no]:";
   cin>>op;
   }while(op=='y'||op=='Y');

}
