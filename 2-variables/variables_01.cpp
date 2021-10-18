#include<iostream> 

using namespace std; 

int main(){
    cout << "--------------------------" << endl; 
    cout << "C++ Getting Started Guide! \n";
    cout << "--------------------------" << endl << endl; 
    cout << "A documentation ❤ provided by RogerioXTI" << endl; 
    
    cout << "\n🚀 Welcome to Session 02: Variables & User Input 🚀" << endl; 
    cout << "In this session we'll explore the realms of variable storage & usage and receiving data from the user." << endl << endl;

    cout << "Let's see one example of variable usage: " << endl; 
    string product = "Laka"; 
    double price = 42; 
    int quantity = 256;
    bool isAvailable = (quantity > 0) ? true : false;
    char rank = 'S';

    cout << "Product Name: " << product << endl; 
    cout << "Product Price: " << price << endl; 
    cout << "Product Quantity: " << quantity << endl; 
    cout << "Is the product Available? (1 for yes, 0 for no): " << isAvailable << endl; 
    cout << "Rank of the Product: " << rank << endl; 

    cout << "\nNow you know how to: \n\t1 - How to assign values to variables.\n\t2 - How to output the formatted message to the user." << endl;
    cout << "In the following session you'll explore: \n\t1 - How to perform Mathematical calculations.\n\t2 - Solving 'Complex' algorithms with simple Computer Logic.";

    cout << "See you soon :) " << endl; 

    
    cout << "\n--------------------------------------------------------------------------------------------------------\n" << endl; 
    cout << "The C++ Getting Started Guide! is meant to help you understand and practice your Logic Skills. \n";
    cout << "Feel absolutely free to send Pull Requests to improve the material." << endl;
    cout << "\n--------------------------------------------------------------------------------------------------------" << endl;
    
    return 0; 
}