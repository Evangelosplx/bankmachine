#include <iostream>
#include <iomanip>

using namespace std;

void showbalance(double balance);
double deposit();
double withdraw(double balance);

int main(){

int choice = 0;
double balance = 0;

do{
std::cout<<"Enter your choice: "<<endl;
cout<<"1. Show Balance: "<<endl;
cout<<"2. Deposit Money: "<<endl;
cout<<"3. Withdraw Money: "<<endl;
cout<<"4. Exit! "<<endl<<endl;

std::cin>>choice;


switch(choice){

case 1:showbalance(balance);
    break;
case 2:balance += deposit();
       showbalance(balance);
    break;
case 3:balance -= withdraw(balance);
       showbalance(balance);
    break;
case 4:
    cout<<"Thanks for Visiting! "<<endl;
    break;
default:cout<<"Invalid Choice! "<<endl;

}
}while(choice!= 4);

return 0;
}

void showbalance(double balance){

cout<<"Your balance is: $"<< std::setprecision(2) << std::fixed<<balance<<endl;

}

double deposit(){
    double amount = 0;

    std::cout<<"Enter your amount: "<<endl;
    std::cin>>amount;

 if (amount>0){
    return amount;
 }
else{
    std::cout<<"Invalid amount. "<<endl;
    return 0;
}

}

double withdraw(double balance){
 double amount = 0;

  std::cout<<"Enter your amount: "<<endl;
  std::cin>>amount;

    if (amount >balance){
        std::cout<<"Insufficient Amount! "<<endl;
        return 0;

    }
    else if (amount <0){
        cout<<"Invalid amount! "<<endl;
        return 0;

    }
    else {
        return amount ;
    }

}
