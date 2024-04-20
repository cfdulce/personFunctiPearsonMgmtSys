/*Dulce Carrillo Fernandez
Project 3 Code | Person functionality for Pearson Management System Program*/

#include <iostream> 


using namespace std;

int menuOptionMain =0;
int createOption =0;

string person_database = "previousPeopleData";

int main() {
    const int INITIAL_ID = 2023001;

    int menuOptionMain = 0;
    int createOption = 0;
    int personCount = 0;
    int personID = 0;
    string personFirstName = "NULL";
    string personLastName = "NULL";
    int personStreetNo = 0;
    string personStreetName = "NULL";
    string personCity = "NULL";
    string personState = "NULL";
    int personZipCode = 0;
    long long personPhone = 0;
    double personSalary = 0.00;


    cout << "================================================" << endl;
    cout << "\t\tPerson Management System" << endl;
    cout << "================================================" << endl;
    cout << "--------------------------------------------------" << endl;
    cout << "Welcome to Pearson's Person Management System" << endl;



    cout << "================================================" << endl;
    cout << "Person Not-Created:" << "\n" << "Person ID: " << personID << ", ";
    cout << "Name: " << personFirstName << " " << personLastName << ", ";
    cout << "Address: " << personStreetNo << " " << personStreetName << ", " << personCity
        << ", " << personState << " " << personZipCode << ", ";
    cout << "Phone: " << personPhone << ", ";
    cout << "Salary: $" << personSalary << "\n";
    cout << "================================================" << endl;
    
    //Printing Menu options
    cout << "================================================" << endl;
    cout << "Please select one of the following options (1-5)" << endl;
    cout << "1)  CREATE Person" << endl;
    cout << "2)  READ Person" << endl;
    cout << "3)  UPDATE Person" << endl;
    cout << "4)  DELETE Person" << endl;
    cout << "5)  FIND Person" << endl;
    cin >> menuOptionMain;
    cout << "================================================" << endl;

    cout << menuOptionMain << endl;

    //outer loop
    
    do 
    while(true) 
    {
        if (menuOptionMain == 1) 
        {
            cout << "================================================" << endl;
            cout << "1 - Auto Create Person" << endl;
            cout << "2 - Normal Create Person" << endl;
            cout << "Select an option (1 or 2): ";
            cin >> createOption;
            cout << "================================================" << endl;
            personCount++;
            personID = INITIAL_ID + personCount;
            // inner loop
            
            while(true) 
            {
                if (createOption == 1)
                {
                    cout << "================================================" << endl;
                    cout << "==============Auto Create Person================" << endl;
                    cout << "================================================" << endl;
                    personFirstName = (rand() % 3 == 0) ? "Auggie" : (rand() % 2 == 0) ? "Bena" : "Carl";
                    personLastName = (rand() % 3 == 0) ? "Zelik" : (rand() % 2 == 0) ? "Yefher" : "Wistem";
                    // Generates a random street number.
                    personStreetNo = rand() % 1000 + 1;
                    personStreetName = (rand() % 3 == 0) ? "Piney Street" : (rand() % 2 == 0) ? "Plum Avenue" : "Lexton Drive";
                    personCity = (rand() % 3 == 0) ? "Texarkana" : (rand() % 2 == 0) ? "West Kane" : " McMacken";
                    personState = (rand() % 3 == 0) ? "TX" : (rand() % 2 == 0) ? "WA" : "NE";
                    personZipCode = rand() % 90000 + 10000;
                    personPhone = static_cast<long long>(rand() % 9000000000LL + 1000000000LL);
                    personSalary = static_cast<double>(rand() % 100000 + 30000);
                    string newPerson = "Some-data";
                    person_database += newPerson;
                }
                else 
                {
                    cout << "================================================" << endl;
                    cout << "==============Normal Create Person================" << endl;
                    cout << "================================================" << endl;
                    cout << "==========Enter Numbers or (.) ONLY!!!!=========" << endl;
                    cout << "================================================" << endl;
                    personFirstName = (rand() % 3 == 0) ? "Auggie" : (rand() % 2 == 0) ? "Bena" : "Carl";
                    cout << "Default First Name (literal) = " + personFirstName << endl;
                    
                    personLastName = (rand() % 3 == 0) ? "Zelik" : (rand() % 2 == 0) ? "Yefher" : "Wistem";
                    cout << "Default Last Name (literal) = " + personLastName << endl;
            
                    cout << "Enter Street Number (ex. 1-10000 ): ";
                    cin >> personStreetNo;

                    personStreetName = (rand() % 3 ==0) ? "Piney Street" : (rand() % 2 ==0) ? "Plum Avenue" : "Lexton Drive";
                    cout << "Default Street Name (literal) = " + personStreetName << endl;
            
                    personCity = (rand() % 3 ==0) ? "Texarkana" : (rand() % 2 ==0) ? "West Kane" : " McMacken";
                    cout << "Default City Name (literal) = " + personCity << endl;

                    personState = (rand() % 3 ==0) ? "TX" : (rand() % 2 ==0) ? " WA" : "NE";
                    cout << "Default State Name (literal) = " + personState << endl;

                    cout << "Enter Zip Code (5 digits): ";
                    cin >> personZipCode;

                    cout << "Enter Phone Number (10 digits): ";
                    cin >> personPhone;

                    cout << "Enter Salary: ";
                    cin >> personSalary;
                    
                }
                
                cout << "Do you want to go again [createmenu] (Enter 1)?" << endl;
                cout << "or any other key to exit" << endl;
                cin >> menuOptionMain;
                cout << "You have selected ..." << menuOptionMain << endl;
                cin >> createOption;
                
                if (createOption !=1 && createOption !=2)
                {
                    cout << "================================================" << endl;
                    cout << "Person Created:" << "\n" << "Person ID: " << personID << ", ";
                    cout << "\n" << "Name: " << personFirstName << " " << personLastName << ", ";
                    cout << "\n" << "Address: " << personStreetNo << " " << personStreetName << ", " << personCity
                    << ", " << personState << " " << personZipCode << ", ";
                    cout << "\n" << "Phone: " << personPhone << ", ";
                    cout << "\n" << "Salary: $" << personSalary << "\n";
                    cout << "================================================" << endl;
                    break;
                }
            }
        }
        else if (menuOptionMain >= 2 && menuOptionMain <= 5) 
        { 
            cout << "Menu Option " << menuOptionMain << " is currently unavailable." << endl;
            cout << "Sorry for the inconvenience." << endl;
        }
        else
        {
            cout << "Invalid option. Please enter a number between 1 and 5." << endl;
        }
        menuOptionMain =0;
        cout << "Do you want to go [mainmenu] (Enter 1)?" << endl;
        cout << "or any other key to exit" << endl;
        cin >> menuOptionMain;
        cout << "You have selected ..." << menuOptionMain << endl;
        
        //if (createOption <5 && createOption >5)
        {
            break;
        }
    } 
    while (menuOptionMain ==1);
    menuOptionMain ==0;
    cout << "or any other key to exit" << endl;
    cin >> menuOptionMain;
    cout << "You have selected ..." << menuOptionMain << endl;
    
    //cout << "================================================" << endl;
    //cout << "\t\tPROGRAM HAS ENDED." << endl;
    //cout << "================================================" << endl;

    return 0;
    
}