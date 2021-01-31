#include <iostream>

using namespace std;

int main()

{
    string username,part1="Mr. ",part2="Mrs. ",item,sign="Ghc ";
    int choice,title,printer=50,table=30,phone=70;
    int goods[3]={printer,phone,table};
    double ID,amount_owed,vat_amount,amount_you_have,amount_to_add,balance;
    float vat=0.12;
    int quantity;

    cout<<"                      WELCOME TO INF SUPERMARKET"<<endl;

    cout<<"___________________________________________________________________________"<<endl;
    cout<<"___________________________________________________________________________"<<endl<<endl;
    cout<<"Please enter your first name"<<endl<<endl;
    cin>>username;
    cout<<""<<endl;

    cout<<"Please enter the number assigned to what you want "<<endl<<endl;
    cout<< "Gender "<<endl<<endl;
    cout<< "1. Male"<<endl;
    cout<< "2. Female"<<endl;
    cin>>title;

    if (title==1) {cout<<"Welcome "<<part1<<username<<endl<<endl;}

    else;

    if (title==2){cout<<"Welcome "<<part2<<username<<endl<<endl;}

    cout<<"please enter your id"<<endl;
    cin>>ID;
    cout<<""<<endl;
    cout<<"Dear "<<username<<endl<<endl;
    cout<<"These are the items sold here;"<<endl;
    cout<<"1. Printer at Gh¢ 50"<<endl;
    cout<<"2. Phone at Gh¢ 70"<<endl;
    cout<<"3. Table at Gh¢ 30"<<endl<<endl;
    cout<<"You only pay 12% vat on what you buy"<<endl<<endl;

cout<<"Please what do you want to buy"<<endl;
    cin>>choice;

    cout<<""<<endl;
    cout<<"How many would you like to buy"<<endl;
    cin>>quantity;

    switch (choice) {
    case 1: vat_amount=goods[0]*quantity*vat;
    break;
    case 2: vat_amount=goods[1]*quantity*vat;
    break;
    case 3: vat_amount=goods[2]*quantity*vat;
    break;

    }

    switch(choice){
    case 1: amount_owed= (goods[0]*quantity)+vat_amount;
    cout<<"Total amount you owe is "<<sign<<amount_owed<<endl<<endl;
    break;
    case 2: amount_owed= (goods[1]*quantity)+vat_amount;
    cout<<"Total amount you owe is "<<sign<<amount_owed<<endl<<endl;
    break;
    case 3: amount_owed= (goods[2]*quantity)+vat_amount;
    cout<<"Total amount you owe is "<<sign<<amount_owed<<endl<<endl;
    break;
    default: cout<<"Enter the number assigned to the item you want";
    }
    cout<<""<<endl;

    cout<<"Please how much do you have on you"<<endl;
    cin>>amount_you_have;

    amount_to_add=amount_owed-amount_you_have;
    balance=amount_you_have-amount_owed;

    if (amount_you_have>amount_owed){
        cout<<"Your balance is "<<sign<<balance<<endl;
        }

else;

       if(amount_you_have<amount_owed) {        cout<<"Sorry, please you still owe  "<<sign<<amount_to_add<<endl;
    }




cout<<"___________________________________________________________________________"<<endl;
cout<<"___________________________________________________________________________"<<endl;

cout<<"                         HERE IS YOUR RECEIPT           "<<endl;
cout<<"               "<<endl;
   if (title==1) {cout<<"             Name of the costumer:"<<part1<<username<<endl;}

    else;

    if (title==2){cout<<"             Name of the costumer:"<<part2<<username<<endl;}
cout<<"             Unique ID: "<<ID<<endl;
if (choice==1){
cout<<"             Item bought: Printer"<<endl;
}
else;
if (choice==2){
    cout<<"             Item bought: Phone"<<endl;
}
else;
if (choice==3){
    cout<<"             Item bought: Table"<<endl;
}
cout<<"             Quantity bought: "<<quantity<<endl;
cout<<"             Vat amount: "<<sign<<vat_amount<<endl;
cout<<"             Total cost: "<<sign<<amount_owed<<endl;
cout<<"             Total amount paid: "<<sign<<amount_you_have<<endl;
    if (amount_you_have>amount_owed){
        cout<<"             Your balance is "<<sign<<balance<<endl;
        }

else;

       if(amount_you_have<amount_owed) {        cout<<"             Please you still owe "<<sign<<amount_to_add<<endl;
    }
 if (title==1) {cout<<"                        Thanks for transactions "<<part1<<username<<endl;}

    else;

    if (title==2){cout<<"                        Thanks for transactions "<<part2<<username<<endl;}



    return 0;
}

