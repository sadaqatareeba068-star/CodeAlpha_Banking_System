#include<iostream>
#include<string>

using namespace std;

class Account
{
private:
    string customerName;
    int accountNumber;
    float balance;

public:

    // Create account
    void createAccount()
    {
        cout << "\n===== CREATE ACCOUNT =====\n";

        cout << "Enter Customer Name: ";
        cin >> customerName;

        cout << "Enter Account Number: ";
        cin >> accountNumber;

        cout << "Enter Initial Balance: ";
        cin >> balance;

        cout << "\nAccount Created Successfully!\n";
    }

    // Deposit money
    void deposit()
    {
        float amount;

        cout << "\nEnter Amount to Deposit: ";
        cin >> amount;

        balance += amount;

        cout << "\nAmount Deposited Successfully!\n";
    }

    // Withdraw money
    void withdraw()
    {
        float amount;

        cout << "\nEnter Amount to Withdraw: ";
        cin >> amount;

        if(amount > balance)
        {
            cout << "\nInsufficient Balance!\n";
        }
        else
        {
            balance -= amount;

            cout << "\nWithdrawal Successful!\n";
        }
    }

    // Display account details
    void displayAccount()
    {
        cout << "\n===== ACCOUNT DETAILS =====\n";

        cout << "Customer Name: " << customerName << endl;
        cout << "Account Number: " << accountNumber << endl;
        cout << "Current Balance: " << balance << endl;
    }
};

int main()
{
    Account acc;

    int choice;

    acc.createAccount();

    do
    {
        cout << "\n========== BANK MENU ==========\n";

        cout << "1. Deposit Money\n";
        cout << "2. Withdraw Money\n";
        cout << "3. Check Account Details\n";
        cout << "4. Exit\n";

        cout << "Enter Your Choice: ";
        cin >> choice;

        switch(choice)
        {
            case 1:
                acc.deposit();
                break;

            case 2:
                acc.withdraw();
                break;

            case 3:
                acc.displayAccount();
                break;

            case 4:
                cout << "\nThank You for Using Banking System!\n";
                break;

            default:
                cout << "\nInvalid Choice!\n";
        }

    } while(choice != 4);

    return 0;
}

