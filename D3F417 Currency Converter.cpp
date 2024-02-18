#include <iostream>
#include <iomanip>
#include <stdlib.h>
#include <string>
#include <conio.h>
#include <time.h>
#include <string.h>
using namespace std;

using namespace std;

double convert_dollar_to_Rupee(double dollar){
    double rupee = dollar * 81.51;
    return rupee;
}

double convert_Rupee_to_dollar(double rupee){
    double dollar = rupee * 0.012;
    return dollar;
}

double convert_pound_to_Rupee (double pound) {
    double rupee = pound * 113.11;
    return rupee;
}

double convert_Rupee_to_pound (double rupee) {
    double pound = rupee * 0.0088;
    return pound;
}

double convert_euro_to_Rupee (double euro) {
    double rupee = euro * 94.92;
    return rupee;
}

double convert_Rupee_to_euro (double rupee) {
    double euro = rupee * 0.0105;
    return euro;
}

double convert_dollar_to_pound (double dollar) {
    double pound = dollar * 0.73;
    return pound;
}

double convert_pound_to_dollar (double pound) {
    double dollar = pound * 1.37;
    return dollar;
}

double convert_dollar_to_euro ( double dollar) {
    double euro = dollar * 0.86;
    return euro;
}

double convert_euro_to_dollar ( double euro) {
    double dollar = euro * 1.16;
    return dollar;
}

double convert_euro_to_pound ( double euro) {
    double pound = euro * 0.90;
    return pound;
}

double convert_pound_to_euro ( double pound) {
    double euro = pound * 1.11;
    return euro;
}

//used to hold the screen for some seconds
void waiting(unsigned int mseconds)
	{
		clock_t goal = mseconds + clock();
		while (goal > clock());
	}

int main(){
    system("Currency Converter By D3F417");
    system("color BD");
    string currency;
    int choice;
    while(true){
    system("cls");
    cout << "\t\t\t<================================================================================>" << endl;
    cout << "\t\t\t|                        WELCOME TO D3F417 CURRENCY CONVERTER                    |" << endl;
    cout << "\t\t\t|                        Please Don't Copy My Code KIDI                          |" << endl;
    cout << "\t\t\t|              This tool is just a currency converter written by D3F417          |" << endl;
    cout << "\t\t\t<================================================================================>" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "\t\t\tchoose from below options to convert" << endl;
    cout << "\t\t\t [1] Dollar (USD) to Rupee(INR) " << endl;
    cout << "\t\t\t [2] Rupee (INR) to Dollar(USD) " << endl;
    cout << "\t\t\t [3] Pound (GBP) to Rupee (INR) " << endl;
    cout << "\t\t\t [4] Rupee (INR) to Pound (GBP) " << endl;
    cout << "\t\t\t [5] Euro (EUR) to Rupee (INR) " << endl;
    cout << "\t\t\t [6] Rupee (INR) to Euro (EUR) " << endl;
    cout << "\t\t\t [7] Dollar (USD) to Pound (GBP) " << endl;
    cout << "\t\t\t [8] Pound (GBP) to Dollar (USD) " << endl;
    cout << "\t\t\t [9] Dollar (USD) to Euro (EUR) " << endl;
    cout << "\t\t\t [10] Euro (EUR) to Dollar (USD) " << endl;
    cout << "\t\t\t [11] Euro (EUR) to Pound (GBP) " << endl;
    cout << "\t\t\t [12] Pound (GBP) to Euro (EUR) " << endl;
    cout << endl << endl;
    cout << "Enter your choice to convert from one currency to other:\n";
    cin >> choice;

    if(choice == 1){
        double dollar;
        double rupee;
        cout << "Enter dollars to convert to Rupee " << endl;
        cin >> dollar;
        rupee = convert_dollar_to_Rupee(dollar);
        cout << dollar <<" Dollars In Rupee = "<< rupee;
        waiting(4000); //hold the screen for 4 seconds
    }
    else if(choice == 2){
        double dollar;
        double rupee;
        cout << "Enter Rupee to convert to Dollar " << endl;
        cin >> rupee;
        dollar = convert_Rupee_to_dollar(rupee);
        cout << rupee <<" Rupees In Dollar = "<< dollar;
        waiting(4000);
    }
    else if (choice == 3){
        double pound;
        double rupee;
        cout << "Enter Pound to convert to Rupee " << endl;
        cin >> pound;
        rupee = convert_pound_to_Rupee(pound);
        cout << pound <<" Pounds In Rupee = "<< rupee;
        waiting(4000);
    }
    else if(choice == 4){
        double rupee;
        double pound;
        cout << "Enter Rupee to convert to Pound " << endl;
        cin >> rupee;
        pound = convert_Rupee_to_pound(rupee);
        cout << rupee <<" Rupees In Pound = "<< pound;
        waiting(4000);
    }
    else if (choice == 5){
        double euro;
        double rupee;
        cout << "Enter Euro to convert to Rupee " << endl;
        cin >> euro;
        rupee = convert_euro_to_Rupee(euro);
        cout << euro <<" Euro In Rupee = "<< rupee;
        waiting(4000);
    }
    else if(choice == 6){
        double rupee;
        double euro;
        cout << "Enter Rupee to convert to Euro " << endl;
        cin >> rupee;
        euro = convert_Rupee_to_euro(rupee);
        cout << rupee <<" Rupees In Euro = "<< euro;
        waiting(4000);
    }
    else if (choice == 7){
        double dollar;
        double pound;
        cout << "Enter Dollar to convert to Pound " << endl;
        cin >> dollar;
        pound = convert_dollar_to_pound(dollar);
        cout << dollar <<" Dollars In Pound = "<< pound;
        waiting(4000);
    }
    else if(choice == 8){
        double pound;
        double dollar;
        cout << "Enter Pound to convert to Dollar " << endl;
        cin >> pound;
        dollar = convert_pound_to_dollar(pound);
        cout << pound <<" Pounds In Dollar = "<< dollar;
        waiting(4000);
    }
    else if (choice == 9){
        double dollar;
        double euro;
        cout << "Enter Dollar to convert to Euro " << endl;
        cin >> dollar;
        euro = convert_dollar_to_euro(dollar);
        cout << dollar <<" Dollars In Euro = "<< euro;
        waiting(4000);
    }
    else if(choice == 10){
        double euro;
        double dollar;
        cout << "Enter Euro to convert to Dollar " << endl;
        cin >> euro;
        dollar = convert_euro_to_dollar(euro);
        cout << euro <<" Euro In Dollar = "<< dollar;
        waiting(4000);
    }
    else if (choice == 11){
        double euro;
        double pound;
        cout << "Enter Euro to convert to Pound " << endl;
        cin >> euro;
        pound = convert_euro_to_pound(euro);
        cout << euro <<" Euro In Pound = "<< pound;
        waiting(4000);
    }
    else if(choice == 12){
        double pound;
        double euro;
        cout << "Enter Pound to convert to Euro " << endl;
        cin >> pound;
        euro = convert_pound_to_euro(pound);
        cout << pound <<" Pounds In Euro = "<< euro;
        waiting(4000);
    }
    else{
        cout << "Invalid choice, please select between 1 - 12" << endl;
    }
    }
}
