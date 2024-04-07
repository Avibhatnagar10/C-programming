#include <stdio.h>

// Function prototypes
void checkBalance();
void withdrawCash();
void depositMoney();
void transferFunds();

int main() {
    int option;
    int pin;

    //Set default PIN
    int correctpin= 1215;

    //Get PIN from the user
    printf("Enter your PIN:");
    scanf("%d", &pin);

    //Validatw PIN
    if (!validatePin(pin)){
        printf("Incorrect PIN bro...\n");
        return 1;
    }

    // Display menu
    printf("Welcome to the ATM!\n");
    printf("1. Check Balance\n");
    printf("2. Withdraw Cash\n");
    printf("3. Deposit Money\n");
    printf("4. Transfer Funds\n");
    printf("5. Exit\n");

    // Get user option
    printf("Enter your choice: ");
    scanf("%d", &option);

    // Switch statement to handle user options
    switch (option) {
        case 1:
            checkBalance();
            break;
        case 2:
            withdrawCash();
            break;
        case 3:
            depositMoney();
            break;
        case 4:
            transferFunds();
            break;
        case 5:
            printf("Thank you for using the ATM. Goodbye!\n");
            break;
        default:
            printf("Invalid option! Please try again.\n");
            break;
    }

    return 0;
}

// Function to simulate checking balance
void checkBalance() {
    printf("Your current balance is $1000\n"); // Replace with actual balance retrieval logic
}

//Function to validate PIN
int validatePin(int pin){
    int correctPin=1215;
    return pin ==correctPin;
}
// Function to simulate cash withdrawal
void withdrawCash() {
    float amount;
    printf("Enter the amount to withdraw: $");
    scanf("%f", &amount);
    printf("Withdrawn $%.2f from your account.\n", amount); // Replace with actual withdrawal logic
}

// Function to simulate depositing money
void depositMoney() {
    float amount;
    printf("Enter the amount to deposit: $");
    scanf("%f", &amount);
    printf("Deposited $%.2f into your account.\n", amount); // Replace with actual deposit logic
}

// Function to simulate transferring funds
void transferFunds() {
    float amount;
    printf("Enter the amount to transfer: $");
    scanf("%f", &amount);
    printf("Transferred $%.2f to another account.\n", amount); // Replace with actual transfer logic
}
