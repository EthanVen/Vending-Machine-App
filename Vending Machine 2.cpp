#include <iostream>
using namespace std;

int main()
{
    int useChoice; //Declaring variables to be used in the code.                   
    char vendingChoice;
    char stockChoice;
    int userConfirmation;
    int stockChange;
    double revenue = 0;
    double itemPrice;
    double orderPrice = 0;
    bool validInput = false;
    int orderQuantity;
    int appleQuantity = 10;
    int grapeQuantity = 10;
    int oliveQuantity = 10;
    int apricotQuantity = 10;
    int huitoQuantity = 10;
    int pearQuantity = 10;
    int blueberryQuantity = 10;
    int jujubeQuantity = 10;
    int peanutQuantity = 10;
    int cherryQuantity = 10;
    int kiwiQuantity = 10;
    int watermelonQuantity = 10;
    double userMoney = 100;

    cout << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl; // Giving the user input options for which functions of the machine they would like to use.
    while (validInput == false) { // Creating while loop to validate user input. If something incorrect is entered they are asked to put in a valid entry.
        cin >> useChoice; // Allowing user to input which function of the machine they would like to use.
        if (useChoice == 1) { // If user inputs 1 allows them to select a product to buy
            validInput = true; // Flags 1 as a valid input so it does not enter the while loop
            cout << "What would you like from the vending machine?" << endl; // Displays the options they can purchase from the machine
            cout << "[1] Apple (1.20)  [4] Apricot (1.40) [7] Blueberry (2.30)   [A] Cherry (1.90)" << endl;
            cout << "[2] Grapes (1.80) [5] Huito (2.00)   [8] Jujube (1.90)      [B] Kiwi (1.70)" << endl;
            cout << "[3] Olive (0.80)  [6] Pears (1.20)   [9] Peanuts (2.10)     [C] Watermelon (1.60)" << endl;
            cin >> vendingChoice; // Allows them to choose which item to buy
            if (vendingChoice == '1') { 
                cout << "How many Apples would you like" << endl;
                cin >> orderQuantity; // Allows the user to input the amount of the item they would like to purchase
                while (orderQuantity > appleQuantity) { // Checks if there is enough of that item in stock and if not asks them to select a smaller amount
                    cout << "There are only " << appleQuantity << " Apples in stock please order a smaller amount." << endl;
                    cin >> orderQuantity; // Allows them to enter a new amount to exit the loop
                }
                itemPrice = orderQuantity * 1.20; // Checks how much the order will cost.
                orderPrice = itemPrice + orderPrice; // Checks how much the entire order will cost
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl; 
                cin >> userConfirmation; // Allows the user to enter if they would like to finalise the payment for the fruit
                if (userConfirmation == 1) { // If the user confirms it the quantity of the item is adjusted, the money is taken out of their account and is added to the revenue of the machine
                    while (itemPrice > userMoney) { // Checks if the order costs more then the money the user has remaining
                        cout << "You can't afford this order please enter a smaller amount" << endl; // Tells the user they can't afford it
                        cin >> orderQuantity; // Allows them to enter a new amount to order
                        itemPrice = orderQuantity * 1.20;
                    }
                    appleQuantity = appleQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl; // The user is told how much money they have left
                } else {
                cout << "Your order has been voided" << endl; // Voids the current order from the user as the purchase was not confirmed
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl; // Re prints the initial message
                validInput = false; // Puts the user back into the loop so they can choose another function to use
                // This code is repeated and all the comments pertain to all code underneath until option 2
            } else if (vendingChoice == '2') {
                cout << "How many bunches of Grapes would you like?" << endl;
                cin >> orderQuantity;
                while (orderQuantity > grapeQuantity) {
                    cout << "There are only " << grapeQuantity << " bunches of Grapes in stock please order a smaller amount." << endl;
                    cin >> orderQuantity;
                }
                itemPrice = orderQuantity * 1.80;
                orderPrice = itemPrice + orderPrice;
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl;
                cin >> userConfirmation;
                if (userConfirmation == 1) {
                    while (itemPrice > userMoney) {
                        cout << "You can't afford this order please enter a smaller amount" << endl;
                        cin >> orderQuantity;
                        itemPrice = orderQuantity * 1.80;
                    }
                    grapeQuantity = grapeQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl;
                }
                else {
                    cout << "Your order has been voided" << endl;
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;

            } else if (vendingChoice == '3') {
                cout << "How many Olives would you like?" << endl;
                cin >> orderQuantity;
                while (orderQuantity > oliveQuantity) {
                    cout << "There are only " << oliveQuantity << " Olives in stock please order a smaller amount." << endl;
                    cin >> orderQuantity;
                }
                itemPrice = orderQuantity * 0.80;
                orderPrice = itemPrice + orderPrice;
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl;
                cin >> userConfirmation;
                if (userConfirmation == 1) {
                    while (itemPrice > userMoney) {
                        cout << "You can't afford this order please enter a smaller amount" << endl;
                        cin >> orderQuantity;
                        itemPrice = orderQuantity * 0.80;
                    }
                    oliveQuantity = oliveQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl;
                }
                else {
                    cout << "Your order has been voided" << endl;
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;

            } else if (vendingChoice == '4') {
                cout << "How many Apricots would you like?" << endl;
                cin >> orderQuantity;
                while (orderQuantity > apricotQuantity) {
                    cout << "There are only " << apricotQuantity << " Apricots in stock please order a smaller amount." << endl;
                    cin >> orderQuantity;
                }
                itemPrice = orderQuantity * 1.40;
                orderPrice = itemPrice + orderPrice;
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl;
                cin >> userConfirmation;
                if (userConfirmation == 1) {
                    while (itemPrice > userMoney) {
                        cout << "You can't afford this order please enter a smaller amount" << endl;
                        cin >> orderQuantity;
                        itemPrice = orderQuantity * 1.40;
                    }
                    apricotQuantity = apricotQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl;
                }
                else {
                    cout << "Your order has been voided" << endl;
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;

            } else if (vendingChoice == '5') {
                cout << "How many Huitos would you like?" << endl;
                cin >> orderQuantity;
                while (orderQuantity > huitoQuantity) {
                    cout << "There are only " << huitoQuantity << " Huito in stock please order a smaller amount." << endl;
                    cin >> orderQuantity;
                }
                itemPrice = orderQuantity * 2.00;
                orderPrice = itemPrice + orderPrice;
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl;
                cin >> userConfirmation;
                if (userConfirmation == 1) {
                    while (itemPrice > userMoney) {
                        cout << "You can't afford this order please enter a smaller amount" << endl;
                        cin >> orderQuantity;
                        itemPrice = orderQuantity * 2.00;
                    }
                    huitoQuantity = huitoQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl;
                }
                else {
                    cout << "Your order has been voided" << endl;
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;

            } else if (vendingChoice == '6') {
                cout << "How many Pears would you like?" << endl;
                cin >> orderQuantity;
                while (orderQuantity > pearQuantity) {
                    cout << "There are only " << pearQuantity << " Pears in stock please order a smaller amount." << endl;
                    cin >> orderQuantity;
                }
                itemPrice = orderQuantity * 1.20;
                orderPrice = itemPrice + orderPrice;
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl;
                cin >> userConfirmation;
                if (userConfirmation == 1) {
                    while (itemPrice > userMoney) {
                        cout << "You can't afford this order please enter a smaller amount" << endl;
                        cin >> orderQuantity;
                        itemPrice = orderQuantity * 1.20;
                    }
                    pearQuantity = pearQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl;
                }
                else {
                    cout << "Your order has been voided" << endl;
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;

            } else if (vendingChoice == '7') {
                cout << "How many Blue Berries would you like?" << endl;
                cin >> orderQuantity;
                while (orderQuantity > blueberryQuantity) {
                    cout << "There are only " << blueberryQuantity << " Blueberries in stock please order a smaller amount." << endl;
                    cin >> orderQuantity;
                }
                itemPrice = orderQuantity * 2.30;
                orderPrice = itemPrice + orderPrice;
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl;
                cin >> userConfirmation;
                if (userConfirmation == 1) {
                    while (itemPrice > userMoney) {
                        cout << "You can't afford this order please enter a smaller amount" << endl;
                        cin >> orderQuantity;
                        itemPrice = orderQuantity * 2.30;
                    }
                    blueberryQuantity = blueberryQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl;
                }
                else {
                    cout << "Your order has been voided" << endl;
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;

            } else if (vendingChoice == '8') {
                cout << "How many Jujubes would you like?" << endl;
                cin >> orderQuantity;
                while (orderQuantity > jujubeQuantity) {
                    cout << "There are only " << jujubeQuantity << " Jujbues in stock please order a smaller amount." << endl;
                    cin >> orderQuantity;
                }
                itemPrice = orderQuantity * 1.90;
                orderPrice = itemPrice + orderPrice;
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl;
                cin >> userConfirmation;
                if (userConfirmation == 1) {
                    while (itemPrice > userMoney) {
                        cout << "You can't afford this order please enter a smaller amount" << endl;
                        cin >> orderQuantity;
                        itemPrice = orderQuantity * 1.90;
                    }
                    jujubeQuantity = jujubeQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl;
                }
                else {
                    cout << "Your order has been voided" << endl;
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;

            } else if (vendingChoice == '9') {
                cout << "How Peanuts would you like?" << endl;
                cin >> orderQuantity;
                while (orderQuantity > peanutQuantity) {
                    cout << "There are only " << peanutQuantity << " Peanuts in stock please order a smaller amount." << endl;
                    cin >> orderQuantity;
                }
                itemPrice = orderQuantity * 2.10;
                orderPrice = itemPrice + orderPrice;
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl;
                cin >> userConfirmation;
                if (userConfirmation == 1) {
                    while (itemPrice > userMoney) {
                        cout << "You can't afford this order please enter a smaller amount" << endl;
                        cin >> orderQuantity;
                        itemPrice = orderQuantity * 2.10;
                    }
                    peanutQuantity = peanutQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl;
                }
                else {
                    cout << "Your order has been voided" << endl;
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;

            } else if (vendingChoice == 'A') {
                cout << "How Cherries would you like?" << endl;
                cin >> orderQuantity;
                while (orderQuantity > cherryQuantity) {
                    cout << "There are only " << cherryQuantity << " Cherries in stock please order a smaller amount." << endl;
                    cin >> orderQuantity;
                }
                itemPrice = orderQuantity * 1.90;
                orderPrice = itemPrice + orderPrice;
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl;
                cin >> userConfirmation;
                if (userConfirmation == 1) {
                    while (itemPrice > userMoney) {
                        cout << "You can't afford this order please enter a smaller amount" << endl;
                        cin >> orderQuantity;
                        itemPrice = orderQuantity * 1.90;
                    }
                    cherryQuantity = cherryQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl;
                }
                else {
                    cout << "Your order has been voided" << endl;
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;

            } else if (vendingChoice == 'B') {
                cout << "How Kiwis would you like?" << endl;
                cin >> orderQuantity;
                while(orderQuantity > kiwiQuantity) {
                    cout << "There are only " << kiwiQuantity << " Kiwis in stock please order a smaller amount." << endl;
                    cin >> orderQuantity;
                }
                itemPrice = orderQuantity * 1.70;
                orderPrice = itemPrice + orderPrice;
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl;
                cin >> userConfirmation;
                if (userConfirmation == 1) {
                    while (itemPrice > userMoney) {
                        cout << "You can't afford this order please enter a smaller amount" << endl;
                        cin >> orderQuantity;
                        itemPrice = orderQuantity * 1.70;
                    }
                    kiwiQuantity = kiwiQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl;
                }
                else {
                    cout << "Your order has been voided" << endl;
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;

            } else if (vendingChoice == 'C') {
                cout << "How slices of Watermelon would you like?" << endl;
                cin >> orderQuantity;
                while (orderQuantity > watermelonQuantity) {
                    cout << "There are only " << watermelonQuantity << " Watermelon slices in stock please order a smaller amount." << endl;
                    cin >> orderQuantity;
                }
                itemPrice = orderQuantity * 1.60;
                orderPrice = itemPrice + orderPrice;
                cout << "This order will cost £" << orderPrice << " would you like to proceed to payment? 1 [Yes] or 2 [No]." << endl;
                cin >> userConfirmation;
                if (userConfirmation == 1) {
                    while (itemPrice > userMoney) {
                        cout << "You can't afford this order please enter a smaller amount" << endl;
                        cin >> orderQuantity;
                        itemPrice = orderQuantity * 1.60;
                    }
                    watermelonQuantity = watermelonQuantity - orderQuantity;
                    userMoney = userMoney - itemPrice;
                    revenue = revenue + orderPrice;
                    cout << "You now have £" << userMoney << " left." << endl;
                }
                else {
                    cout << "Your order has been voided" << endl;
                }
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;

            }

        } else if (useChoice == 2) { // If the user enters choice two they are entered into this if statement
            validInput = true; // Flags the input as valid so they can exit the while loop
            cout << "Please select the item that you would like to update the levels of stock for." << endl; 
            cout << "[1]Apples [2]Grapes [3]Olives [4]Apricots [5]Huito [6]Pears [7]Blueberries [8]Jujubes [9]Peanuts [A]Cherries [B]Kiwis [C]Watermelons" << endl;
            cin >> stockChoice; // ALlows the user to input which item they would like to adjust the level of stock for
            if (stockChoice == '1') { // If the user enters this item they can then adjust its stock level.
                cout << "How many more Apples would you like to put in stock" << endl;
                cin >> stockChange; // Allows the user to enter the amount of the item they would like to add to the stock
                appleQuantity = stockChange + appleQuantity; // Adds the amount entered onto the quantity of that product
                cout << "There are now " << appleQuantity << " Apples in stock." << endl; // Informs the user of the new stock level
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;// Re prints the initial message
                validInput = false; // Enters the user back into the while loop
            } else if (stockChoice == '2'){ // All code here repeats until option 3 and all comments remain the same
                cout << "How many more Grapes would you like to put in stock" << endl;
                cin >> stockChange;
                grapeQuantity = stockChange + grapeQuantity;
                cout << "There are now " << grapeQuantity << " Grapes in stock." << endl;
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;
            } else if (stockChoice == '3') {
                cout << "How many more Olives would you like to put in stock" << endl;
                cin >> stockChange;
                oliveQuantity = stockChange + oliveQuantity;
                cout << "There are now " << oliveQuantity << " Olives in stock." << endl;
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;
            } else if (stockChoice == '4') {
                cout << "How many more Apricots would you like to put in stock" << endl;
                cin >> stockChange;
                apricotQuantity = stockChange + apricotQuantity;
                cout << "There are now " << apricotQuantity << " Apricots in stock." << endl;
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;
            } else if (stockChoice == '5') {
                cout << "How many more Huitos would you like to put in stock" << endl;
                cin >> stockChange;
                huitoQuantity = stockChange + huitoQuantity;
                cout << "There are now " << huitoQuantity << " Huitos in stock." << endl;
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;
            } else if (stockChoice == '6') {
                cout << "How many more Pears would you like to put in stock" << endl;
                cin >> stockChange;
                pearQuantity = stockChange + pearQuantity;
                cout << "There are now " << pearQuantity << " Pears in stock." << endl;
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;
            } else if (stockChoice == '7') {
                cout << "How many more Blueberries would you like to put in stock" << endl;
                cin >> stockChange;
                blueberryQuantity = stockChange + blueberryQuantity;
                cout << "There are now " << blueberryQuantity << " Blueberries in stock." << endl;
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;
            } else if (stockChoice == '8') {
                cout << "How many more Jujubes would you like to put in stock" << endl;
                cin >> stockChange;
                jujubeQuantity = stockChange + jujubeQuantity;
                cout << "There are now " << jujubeQuantity << " Jujubes in stock." << endl;
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;
            } else if (stockChoice == '9') {
                cout << "How many more Peanuts would you like to put in stock" << endl;
                cin >> stockChange;
                peanutQuantity = stockChange + peanutQuantity;
                cout << "There are now " << peanutQuantity << " Peanuts in stock." << endl;
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;
            } else if (stockChoice == 'A') {
                cout << "How many more Cherries would you like to put in stock" << endl;
                cin >> stockChange;
                cherryQuantity = stockChange + cherryQuantity;
                cout << "There are now " << cherryQuantity << " Cherries in stock." << endl;
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;
            } else if (stockChoice == 'B') {
                cout << "How many more Kiwis would you like to put in stock" << endl;
                cin >> stockChange;
                kiwiQuantity = stockChange + kiwiQuantity;
                cout << "There are now " << kiwiQuantity << " Kiwis in stock." << endl;
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;
            } else if (stockChoice == 'C') {
                cout << "How many more Watermelon slices would you like to put in stock" << endl;
                cin >> stockChange;
                watermelonQuantity = stockChange + watermelonQuantity;
                cout << "There are now " << watermelonQuantity << " Watermelon slices in stock." << endl;
                cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;
                validInput = false;
            }



               
        }
        else if (useChoice == 3) { // If the user enters this option they can check how much revenue has been earned
            validInput = true; // Flags this option as valid so the user can exit the while loop
            cout << "So far this machine has earned "<< revenue << " pounds." << endl; // Outputs the amount of revenue the machine has earned 
            cout << endl << "Welcome to the fruit vending machine.\nWould you like to use the vending machine? (1)\nUpdate stock levels? (2)\nView revenue? (3)" << endl;// Re prints the initial message
            validInput = false; // Allows for the user to re enter the loop and use another function of the machine.
        }
        else { // If anything else is entered as part of the while loop flags it as an invalid entry clears the input and allows the user to enter a valid input
            cout << "Please enter a valid input." << endl;
            cin.clear();
            cin.ignore(10000, '\n');
        }
    }
    return 0;
}   
