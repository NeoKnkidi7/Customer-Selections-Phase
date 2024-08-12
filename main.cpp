#include <iostream>
#include <iomanip>


using namespace std;

int main() {
    char packageType;
    string customerName;
    int minutesUsed;
    double contractAmount, additionalAmount, totalAmount;

    do {
        // Input customer details
        cout << "Enter customer name: ";
        getline(cin, customerName);

        // Input package type with validation
        do {
            cout << "Enter package type (A, B, or C): ";
            cin >> packageType;
            packageType = toupper(packageType);  // Convert to uppercase for validation

            if (packageType != 'A' && packageType != 'B' && packageType != 'C') {
                cout << "Invalid input. Please enter A, B, or C." << endl;
            }
        } while (packageType != 'A' && packageType != 'B' && packageType != 'C');

        // Input minutes used
        cout << "Enter minutes used: ";
        cin >> minutesUsed;

        // Calculate bill based on package type
        switch (packageType) {
            case 'A':
                contractAmount = 390.00;
                additionalAmount =  (minutesUsed - 450) * 1.45 : 0;
                break;

            case 'B':
                contractAmount = 590.00;
                additionalAmount =  (minutesUsed - 900) * 1.25 : 0;
                break;

            case 'C':
                contractAmount = 690.00;
                additionalAmount = 0;  // Unlimited minutes
                break;
        }

        // Calculate total amount
        totalAmount = contractAmount + additionalAmount;

        // Display customer information and bill details
        cout << "\nCustomer Name: " << customerName << endl;
        cout << "Package Type: " << packageType << endl;
        cout << "Contract Amount: R" << fixed << setprecision(2) << contractAmount << endl;
        cout << "Additional Amount: R" << fixed << setprecision(2) << additionalAmount << endl;
        cout << "Total Amount Due: R" << fixed << setprecision(2) << totalAmount << endl;

        // Ask if there are more bills to be calculated
        char moreBills;
        cout << "\nCalculate another bill? (Y/N): ";
        cin >> moreBills;
        cin.ignore();  // Clear newline from the buffer
        moreBills = toupper(moreBills);

        if (moreBills != 'Y') {
            cout << "Exiting program. Have a great day!\n";
        }

    } while (toupper(packageType) != 'N');

    return 0;
}
