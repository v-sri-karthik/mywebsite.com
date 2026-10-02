#include <customer.h>
#include <iostream>
using namespace std;

int Customer::nextCustomerId = 1;
Customer::Customer(string name, string phone, string email, string address){
    this->name=name;
    this->phone=phone;
    this->email=email;
    this->address=address;

    this->customer_id = nextCustomerId++;
}

int Customer::getCustomerId() const {
    return customer_id;
}

string Customer::getName() const {
    return name;
}

string Customer::getPhone() const {
    return phone;
}

string Customer::getEmail() const {
    return email;
}

void Customer::displayDetails() const {
    cout<<"Customer Details: "<<endl;
    cout<<"ID: "<<customer_id<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Phone: "<<phone<<endl;
    cout<<"Email: "<<email<<endl;
    cout<<"Address: "<<address<<endl;
}

void Customer::updatePhone(string new_phone){
    phone = new_phone;
    cout<<"*Phone Number Updated*"<<endl;
}
        
void Customer::updateEmail(string new_email){
    email = new_email;
    cout<<"*Email Updated*"<<endl;
}

