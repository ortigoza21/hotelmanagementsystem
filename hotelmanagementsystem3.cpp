 #include <iostream>

// Define the HotelManagementSystem class
class HotelManagementSystem {
public:
    void displayMenu() {
        std::cout << "1. Add Guest\n2. Remove Guest\n3. View Guests\n4. Exit\n";
    }
    void addGuest() {
        std::cout << "Adding a guest...\n";
    }
    void removeGuest() {
        std::cout << "Removing a guest...\n";
    }
    void viewGuests() {
        std::cout << "Viewing guests...\n";
    }
};

int main() {
    HotelManagementSystem system;
    int choice;

    do {
        system.displayMenu();
        std::cin >> choice;
        std::cin.ignore();  // Ignore the leftover newline character after reading the choice

        switch (choice) {
            case 1:
                system.addGuest();
                break;
            case 2:
                system.removeGuest();
                break;
            case 3:
                system.viewGuests();
                break;
            case 4:
                std::cout << "Exiting the system. Goodbye!\n";
                break;
            default:
                std::cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}