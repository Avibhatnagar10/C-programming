#include <stdio.h>
#include <stdbool.h>

// Function to switch the bulb on
void switchOn(bool *bulbState) {
    *bulbState = true;
    printf("Bulb is now ON\n");
}

// Function to switch the bulb off
void switchOff(bool *bulbState) {
    *bulbState = false;
    printf("Bulb is now OFF\n");
}

int main() {
    bool bulbState = false; // Initially, the bulb is off
    
    int choice;
    
    do {
        printf("\nChoose an option:\n");
        printf("1. Switch ON\n");
        printf("2. Switch OFF\n");
        printf("3. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        
        switch(choice) {
            case 1:
                switchOn(&bulbState);
                break;
            case 2:
                switchOff(&bulbState);
                break;
            case 3:
                printf("Exiting program...\n");
                break;
            default:
                printf("Invalid choice. Please enter 1, 2, or 3.\n");
        }
    } while(choice != 3);
    
    return 0;
}
