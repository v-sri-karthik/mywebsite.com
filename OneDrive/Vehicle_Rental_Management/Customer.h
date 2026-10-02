#ifndef CUSTOMER_H
#define CUSTOMER_H
#include <string>
using namespace std;

class Customer{
    private:
        static int nextCustomerId;
        int customer_id;
        string name;
        string phone;
        string email;
        string address;

    public:
        Customer(string name, string phone, string email, string address);

        int getCustomerId() const;

        string getName() const;

        string getPhone() const;

        string getEmail() const;

        void displayDetails() const;

        void updatePhone(string new_phone);
        
        void updateEmail(string new_email);
};

#endif