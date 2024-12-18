#include <bits/stdc++.h>
//#include <iostream>
//#include <vector>
//#include <string>
//#include <fstream>
//#include <sstream>

using namespace std;

// Base class for Person
class Person {
protected:
    string name, address, contact;
    int age, ID;

public:
    Person() : ID(0), age(0), name(""), address(""), contact("") {}

    void setDetails(int id, int ag, const string& nm, const string& addr, const string& cont) {
        ID = id;
age = ag;
        name = nm;
        address = addr;
        contact = cont;
    }

    virtual void Display() const
cout << "
ID: " << ID << "
Name: " << name
             << "
Age: " << age << "
Address: " << address
             << "
Contact: " << contact << endl;

int getID() const { return ID; }

    virtual string toFile() const {
        return to_string(ID) + " ,
 " + name + ",
" + to_string(age) + ",
" + address + ",
" + contact;
    }
};

class Patient : public Person {
private:
    string medicalHistory;
    string currentMedication;
string appointmentSchedule;
 
public:
    void setPatientDetails(const string& medHist, const string& currMed, const string& appSched) {
        medicalHistory = medHist;
        currentMedication = currMed;
        appointmentSchedule = appSched;
    }
 
    void Display() const override {
Person::Display();
        cout << "Medical History: " << medicalHistory
             << "
Current Medication: " << currentMedication
             << "
Appointment Schedule: " << appointmentSchedule << endl;
    }

string toFile() const override {
        return Person::toFile() + \",\" + medicalHistory + \",\" + currentMedication + \",\" + appointmentSchedule;
    }
};

class Doctor : public Person {
private:
    string specialization;
    int yearsOfExperience;

public:
    void setDoctorDetails(const string& spec, int exp) {
        specialization = spec;
yearsOfExperience = exp;
    }

    void Display() const override {
        Person::Display();
        cout << "Specialization: " << specialization
             << "
Years of Experience: " << yearsOfExperience << endl;
    }

string toFile() const override {
        return Person::toFile() + \",\" + specialization + \",\" + to_string(yearsOfExperience);
    }
};

// Appointment class
class Appointment {
private:
    int appointmentID;
    int patientID;
    int doctorID;
    string date;
    string time;
    string status;

public:
Appointment() : appointmentID(0), patientID(0), doctorID(0), date(""), time(""), status("") {}

    void setAppointmentDetails(int appID, int patID, int docID, const string& dat, const string& tim, const string& stat) {
        appointmentID = appID;
        patientID = patID;
        doctorID = docID;
date = dat;
        time = tim;
        status = stat;
    }

    void Display() const {
        cout << "Appointment ID: " << appointmentID
<< "Patient ID: " << patientID
             << "
Doctor ID: " << doctorID
             << "
Date: " << date
<< "Time: " << time
             << "
Status: " << status << endl;
    }

    string toFile() const
return to_string(appointmentID) + \",\" + to_string(patientID) + \",\" + to_string(doctorID) + \",\" + date + \",\" + time + \",\" + status;
    }
    int getAppointmentID() const { return appointmentID; }
};

// All Functions Management class
class HealthCareSystem {
private:
    vector<Patient> patients;
    vector<Doctor> doctors;
    vector<Appointment> appointments;
string username, password;

    bool isUniqueID(int id) const {
        for (const auto& patient : patients)
            if (patient.getID() == id) return false;

        for (const auto& doctor : doctors)
if (doctor.getID() == id) return false;

        return true;
    }

    Patient* findPatient(int id) {
        for (auto& patient : patients)
            if (patient.getID() == id) return &patient;
return nullptr;
    }

    Doctor* findDoctor(int id) {
        for (auto& doctor : doctors)
            if (doctor.getID() == id) return &doctor;
        return nullptr;
    }

Appointment* findAppointment(int id) {
        for (auto& appointment : appointments)
            if (appointment.getAppointmentID() == id) return &appointment;
        return nullptr;
    }

public:
    void login() {
    \tcout<<\"\
\
\
\\t\\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@\
\";
cout<<"\t\t@@ _______________________________________________________________________________________ @@
";
cout<<"@@|                                           \t\t                                  |@@";        cout<<"\\t\\t@@|                                           \t\t                                  |@@\
";
cout<<"\t\t@@|                                           \t\t                                  |@@
";        cout<<"\t\t@@|                                           \t\t                                  |@@
";
cout<<"\t\t@@|                                           \t\t                                  |@@
";        cout<<"@@|                                           \t\t                                  |@@
";
cout<<"\\t\\t@@|                                  WELCOME TO                                           |@@\
";        cout<<"\\t\\t@@|                                                                                       |@@\
";
cout<<"\t\t@@|                           Healthcare MANAGEMENT SYSTEM                                |@@
";        cout<<"\\t\\t@@|                                                                                       |@@\
";
cout<< "　　　\t @@|                                                                                       |@@
";        cout<<"\t\t@@|                                                                                       |@@
";
cout<<"	@@|                                                                                       |@@
";        cout<<"\\t\\t@@|                                                                                       |@@\
";
cout<<"\\\\t\\\\t@@|                                                                                       |@@\
";        cout<<"\t\t@@|_______________________________________________________________________________________|@@
";
        cout<<"\t\t@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@@
"
;
        cout<<"



\t\t\t\t\t";
        system("pause");
                system("cls");
        cout<<"








\t\t\t\t\t  Healthcare MANAGEMENT SYSTEM 
"
;        cout<<"\t\t\t\t\t\t\t-----------------------------------";
        cout<<"
\t\t\t\t\t\t\t\t     LOGIN 
";
                cout<<"\t\t\t\t\t\t\t-----------------------------------

";
        cout << "\t\t\t\t\t\t\tEnter Username: ";
                cin >> username;
cout << "\t\t\t\t\t\tEnter Password: ";                cin >> password;        system("cls");                if(username == "admin" && password == "1234")
cout << "

\t\t\t\t\t\t\t\tAccess Granted! Welcome Admin. 
";
           system("PAUSE");
           system ("CLS");
        }else if(username == "user" && password == "1234")
cout << ""

			"

\t\t\t\t\t\t\t\t\tAccess Granted! Welcome User. ";

           system("PAUSE");
           system("CLS");
        }
else
		{
            cout << "

\t\t\t\t\t\t\t\t\tAccess Aborted.

			\t\t\t\t\t\t\t\tPlease Try Again


";
system("PAUSE");
           system("CLS");
           login();
        }
   }
    void mainMenu() {
        int choice;
        do
cout<<"




\t\t\t\t  Healthcare MANAGEMENT SYSTEM 

";	
            cout<<"\t\t\tPlease,  Choose from the following Options: 

";
            cout<<"\t\t\t _________________________________________________________________ 
";
cout<<"        \t |                                            |"<<endl;
cout<<"            \t\t     |           1    >> Patients Record Management             |";
cout<<"\t\t\t|             2  >> Manage Doctors Record                         |";
cout<<"    \t\t\t|             3  >> Manage Appointments Information               |\
";
cout<<"\\t\\t\\t|             4  >> Exit the Program                              |\
";
cout<<"		\t\t\t|_________________________________________________________________|

";
           cout<<"		\t\t\t\tEnter your choice: ";
           string input;
           cin >> input;
if (input.find_first_not_of("0123456789")!= string::npos) {
            cout << "Invalid input! Please enter a valid integer.
";
            system("PAUSE");
            system("CLS");
continue; // Restart the loop
        }
        choice = stoi(input); // Convert validated string to integer
        system("CLS");
            switch (choice)
case 1:
                    patientMenu();
                    break;
case 2:
                    doctorMenu();
                    break;
case 3:
                    appointmentMenu();
                    break;
case 4:
                  cout << "
\t\t\t\t\tExiting system. Goodbye!
";

                  return ;
default:
                    cout<<"

\t\t\t\t\t\tInvalid Choice
";cout<<"\t\t\t\t\t\tTry again.

";
            }
        } while (choice < 1 || choice > 4);
system("CLS");
     }
     void patientMenu() {
     int choice;
     do {
 cout << " "
 " "
 "
"
"
" \t\t \t  Healthcare MANAGEMENT SYSTEM
 
";
 cout << "\t\t \tPlease,  Choose from the following Options: 
";
cout << "\t\t\t _________________________________________________________________ 
";
cout << "\t\t\t|                                           \t                  |";
if (username == "admin") {
cout << "\t\t\t|             1  >> Add New Patients                              |";
cout << "\t\t\t|             2  >> Delete Patient Data                           |";
cout << "\\t\\t\\t|             3  >> Edit Patients Information                     |\
";
cout << "\t\t\t|             4  >> List Patients Information                     |";
cout << "\t\t\t|             5  >> Go Back                                       |\
";
} else if (username == "user") {

            cout << "\t\t\t|             1  >> View Patients Information                     |";
cout << "\t\t\t|             2  >> Go Back                                       |";
} else {
            cout << "Invalid user type. Try again. ";
            system("PAUSE");
            return;
cout << "\t\t\t|_________________________________________________________________|

";
        cout << "\t\t\t\tEnter your choice: ";
        
        string input;
        cin >> input;
        // Validate input to ensure it only contains digits
if (input.find_first_not_of("0123456789")!= string::npos) {
            cout << "Invalid input! Please enter a valid integer."
            system("PAUSE");
            system("CLS");
continues ;// continue; to repeat the loop again.
         } // exit out the main class and call back choice in number 
choice=stoi(input);
       system ("cls" );

          if  username== "admin " {
switch (choice) {
                case 1: addPatient(); break;
                case 2: deletePatient(); break;
case 3: editPatient(); break;

                case 4: listAllPatients(); break;
                case 5: mainMenu(); return;
default: cout << "Invalid choice. Please Try Again. 
";
            }
        } else {
            switch (choice) {
case 1: listAllPatients(); break;

                case 2: mainMenu(); return;
                default: cout << "Invalid choice.
";

}
        }
    } while (true);
}
void addPatient() {
    Patient newPatient;
    int id, age;
    string name, address, contact, medHist, currMed, appSched;
    
    cout << "
********************************************************************
";
    // Input and validation for ID
while (true) {
        cout << "\
Enter Patient ID (integer only): \
";
        string input;
        cin >> input;
        // Check if input is numeric
        if (input.find_first_not_of("0123456789") == string::npos)
id = stoi(input);

            if (!isUniqueID(id)) {
                cout << "
ID already exists. Please use a unique ID.
";
            } else {
break; // Valid ID and unique
            }
        } else {

            cout << "Invalid input! Please enter a valid integer ID.
";
}
    }
    cin.ignore(); // Clear the newline character in the buffer
    // Input and validation for name

    while (true) {
        cout << "
 >> Enter Name (non-empty): 
";
        getline(cin, name);
if (!name.empty()) {
            break;
        } else {
            cout << "Name cannot be empty. Try again." ;
        }

// Input and validation for age
    while (true) {
        cout << "\
 >> Enter Age (integer only): \
";

        string input;

        cin >> input;
        if (input.find_first_not_of("0123456789") == string::npos)
age = stoi(input);
            if (age > 0) {
                break; // Valid age
            } else
cout << "Age must be a positive integer. Please try again.
";
            }
        } else {
cout << "Invalid input! Please enter a valid integer for age.\
";

        }

    }
    cin.ignore();
    // Input for address
    while (true){

        cout << "\
 >> Enter Address (non-empty): \
";
getline(cin, address);
        if (!address.empty()) {
            break;
        } else {
            cout << "Address cannot be empty. Please try again.
";
}
    }
    // Input for contact
    while (true) {
        cout << "
 >> Enter Contact (non-empty): 
";

        getline(cin, contact);

        if (!contact.empty()) {
break;
        } else {
            cout << "Contact cannot be empty. Please try again.";
        }
    }
    while (true )
cout << " 
 >> Input Medical History (non-null): 
";
getline(cin, medHist);
if (!medHist.empty()) {
            
            break;
        } else
cout << "Medical history cannot be empty. Try again.\
";
    }
}
    while (true) {
        cout << "\
 >> Insert Current Medication (no empty): \
";
        getline(cin, currMed);
if (!currMed.empty()) {
            break;

        } else {
            cout << "Current medication cannot be empty. Please try again.";
        }
    }
while (true) {
        cout << "\
 >> Enter Appointment Schedule (non-empty): \
";
        getline(cin, appSched);
        if (!appSched.empty()) {
            break;
        } else {}
cout << "Appointment schedule cannot be empty. Please try again."
        end
    end
    newPatient.setDetails(id, age, name, address, contact)
    newPatient.setPatientDetails(medHist, currMed, appSched)
    patients.push_back(newPatient)
    cout << "
 >> Patient added successfully.
cout << " 
********************************************************************
";

saveToFile();

    }
    //
    void editPatient() {
        int id;
        cout << "
--------------------------------
";
        cout << " 
 >> Enter Patient ID to Edit: 
"; cin >> id;
cout << " 
--------------------------------
";
        Patient* patient = findPatient(id);

        if (patient == nullptr)
        {
            cout << "Patient not found.
";
            return;

}
        string name, address, contact, medHist, currMed, appSched;
        int age;
        cout<<"
********************************************************************
";

        cout << "
 >> Enter New Details: 
";
cout << "
 >> Name: "; cin.ignore(); getline(cin, name);
        cout << "
 >> Age: "; cin >> age; cin.ignore();
        cout << "
 >> Address: "; getline(cin, address);
        cout << "
 >> Contact: "; getline(cin, contact);
cout << "
 >> Medical History: "; getline(cin, medHist);

        cout << "
 >> Current Medication: "; getline(cin, currMed);
        cout << "
 >> Appointment Schedule: "; getline(cin, appSched);
        
        patient->setDetails(id, age, name, address, contact);
patient->setPatientDetails(medHist, currMed, appSched);

        cout << "\
 Patient updated successfully.\
";
        cout<< "\
********************************************************************
";
    }

    void deletePatient() {
        int id;
        cout << "\
--------------------------------
";
cout << "
 >> Enter Patient ID to Delete: 
";
        cin >> id;
        cout << "
--------------------------------
";
        auto it = remove_if(patients.begin(), patients.end(), [id](const Patient& patient) {
            return patient.getID() == id;
);

        if (it!= patients.end()) {
            patients.erase(it, patients.end());
            cout << "
 >> Patient deleted successfully.
";
            saveToFile(); // Save changes to file
} else {
            cout << "Patient not found.\
"; 
        }
    }
    void listAllPatients() const {
        if (patients.empty()) {
cout << " 
 No patients found.
";
 
            return;
        }
        for (const auto& patient : patients) {

            patient.Display();
cout << "---------------------------" << endl;
        }
    }
    void saveToFile() const {
        ofstream patientFile("patients.txt");
        for (const auto& patient : patients) {
patientFile << patient.toFile() << endl;

        }
        ofstream doctorFile("doctors.txt");
        for (const auto& doctor : doctors) {
            doctorFile << doctor.toFile() << endl;
}
        ofstream appointmentFile("appointments.txt");
        for (const auto& appointment : appointments) {
            appointmentFile << appointment.toFile() << endl;
        }
    }

    void doctorMenu() {
int choice;
        do {
            cout<<"




\t\t\t\t  Healthcare MANAGEMENT SYSTEM 

";
            cout<<"\t\t\tPlease,  Choose from the following Options: 

";
            
            cout<<"\t\t\t _________________________________________________________________ 
";
cout<<"\t\t\t|                                           \t                  |";
if(username == "admin") {
cout<<"        \t\t|             1  >> Add New Doctor                                |";

cout<<"        \t\t|             2  >> Delete Doctor Data                            |";
cout<<"\t\t\t|             3  >> Edit Doctors Inform ation                     |";
cout<<""\t\t\t|             4  >> List Doctors Information                      |";
cout<<"        \t\t|             5  >> Go Back                                       |";
} else if(username == "user"){
 
                cout<<"\t\t\t|             1  >> List Doctors Information                     |";
cout<<"\t\t\t|              2  >> Go Back                                 ||
";
} else {
				cout << "Invalid choice. Please try again.
";
				system("PAUSE");
			}
            cout<<"\t\t\t|_________________________________________________________________|

";
            cout<<"\t\t\t\tEnter your choice: "; 
			
			string input;
			cin >> input;
            
            if (input.find_first_not_of("0123456789") != string::npos) {
cout << "Invalid input! Please enter a valid integer.\
";
            system("PAUSE");
            system("CLS");
            continue; // Loop restart
choice = stoi(input); // Convert validated string to integer
        system("CLS");
            
            if (username == "admin") {
switch(choice)
                    case 1:addDoctor();break;
                    case 2:deleteDoctor();break;
case 3: editDoctor(); break;
                    case 4: listAllDoctors(); break;
                    case 5: mainMenu();
default: cout << "Invalid choice.
";
                }
            } else {
switch (choice) {

                case 1: listAllDoctors(); break;
                case 2: mainMenu(); break;
default: cout << "Invalid choice.
";
				}
            }
        } while (true);
    }
void addDoctor() {
    Doctor newDoctor;
    int id, age, yearsOfExperience;
    string name, address, contact, specialization;
cout << "\
********************************************************************\
";
    // Input and validation for Doctor ID
    while (true) {
        cout << "\
 >> Enter Doctor ID (integer only): \
";
        string input;
        cin >> input;
if (input.find_first_not_of("0123456789") == string::npos) {
            id = stoi(input);
            if (isUniqueID(id)) {
                break; // Valid and unique ID

}
        else {
            cout<<"ID already exists. Use a unique ID." << endl ;
        }
    }
    else

cout << "Invalid input! Please enter a valid integer.\
";

        }

    }
    cin.ignore(); // Clear input buffer
    // Input and validation for Name
    while (true)
cout << " 
 >> Enter Name: 
";
        getline(cin, name);
        if (!name.empty()) {
            break; // Valid name
        } else
cout << "Name cannot be empty. Please try again.
";
        }
    }
    // Input and validation for Age
    while (true) {
        cout << "
 >> Enter Age (integer only): 
";

string input;
        
        cin >> input;
        if (input.find_first_not_of("0123456789") == string::npos) {
            age = stoi(input);
            if (age > 0 && age < 120)
break; // Valid age
        } else {
            cout << "Age must be a realistic number between 1 and 120.
";
}
        } else {
            cout << "Invalid input! Please enter a valid integer.
";

        }
    }
    cin.ignore(); // Clear input buffer
// Input and validation for Address
    while (true)
    {
        cout<<" 
 >> Enter Address: 
";
        getline(cin, address);
        if (!address.empty())
            break; // Valid address
} else {
            cout << "Address cannot be empty. Please try again.
"; 
        }
    }
    // Input and validation for Contact
    while (true) {
cout << "
 >> Enter Contact: 
";

        getline(cin, contact);

        if (!contact.empty()) {
            break; // Valid contact
        } else
cout << "Contact cannot be empty. Please try again.
";
        }
    }
    // Input and validation for Specialization
    while (true) {
        cout << "
 >> Enter Specialization: 
";
getline(cin, specialization);

        if (!specialization.empty()) {
            break; // Valid specialization
        } else {
            cout << "Specialization cannot be empty. Please try again." ;
}
    }
    // Input and validation for Years of Experience
    while (true) {
        cout << "
 >> Enter Years of Experience (integer only): 
";
        string input;

        cin >> input;
if (input.find_first_not_of("0123456789") == string::npos) {
            yearsOfExperience = stoi(input);
            if (yearsOfExperience >= 0) {
                break; // Valid years of experience
} else {
                cout << "Years of experience cannot be negative."<<endl;
            }
        }
        else
cout << "Invalid input! Please enter a valid integer.
";

        }
    }
    cout << "
********************************************************************
";
    newDoctor.setDetails(id, age, name, address, contact);
    newDoctor.setDoctorDetails(specialization, yearsOfExperience);
    doctors.push_back(newDoctor);
    cout << "
 >> Doctor added successfully.
" << endl;
saveToFile();
}
    
    void editDoctor() {
        int id;
        cout << "
--------------------------------
";
        cout << "
 >> Enter Doctor ID to Edit: 
"; cin >> id;
        cout << "
--------------------------------
";
Doctor* doctor = findDoctor(id);

        if (doctor == nullptr) {

            cout << "Doctor not found.
";
            return;
        }
string name, address, contact, specialization;
        int age, exp;
        cout<<"
********************************************************************
";


        cout << "
 Enter New Details:
";
        cout << "
 >> Name: "; cin.ignore(); getline(cin, name);
cout << "
 >> Age: "; cin >> age; cin.ignore();
        cout << "
 >> Address: "; getline(cin, address);
        cout << "
 >> Contact: "; getline(cin, contact);
        cout << "
 >> Specialization: "; getline(cin, specialization);

cout << "
 >> Years of Experience: "; cin >> exp;
        doctor->setDetails(id, age, name, address, contact);
        doctor->setDoctorDetails(specialization, exp);
        cout << "
 >> Doctor updated successfully.
";
        cout<<"
********************************************************************
";

    }
void deleteDoctor() {
        int id;
        cout << "\
--------------------------------\
";
        cout << "\
 >> Enter Doctor ID to Delete: \
"; cin >> id;
        cout << "\
--------------------------------\
";
auto it = remove_if(doctors.begin(), doctors.end(), [id](const Doctor& doctor) {
            return doctor.getID() == id;
        });

        if (it!= doctors.end()) {
            doctors.erase(it, doctors.end());
cout << "
 >> Doctor deleted successfully.
";
            saveToFile(); // Save changes to file
        } else {
            cout << "Doctor not found.";
}
    }
    void listAllDoctors() const {
        if (doctors.empty()) {
            cout << "
 >> No doctors found.
" << endl;

            return;
}
}
        for (const auto& doctor : doctors) {

            doctor.Display();
            cout << "----------------------------" << endl;
        }
    }
    void appointmentMenu() {
int choice;
        do {
            cout<<"




\t\t\t\t  Healthcare MANAGEMENT SYSTEM 

";
 
            cout<<"\t\t\tPlease,  Choose from the following Options: 

";
            cout<<"\t\t\t _________________________________________________________________ 
";
cout<<"\t\t\t|                                           \t                  |";
if(username == "admin") {
cout<<"\t\t\t|             1  >> Create New Appointment                        |"<<endl;
cout<<"\t\t\t|             2  >> Delete Appointment                            |
cout<<"\t\t\t|             3  >> Edit Appointment                              |
";
cout<<"\t\t\t  |             4   >> Appointmnents                     |>>
";
cout<<"         \t\t|             5  >> Go Back                                       |";
else if(username == "user") {
//    cout << "\t\t\t|             1  >> List Appointments                            |
";
cout<<"         \t   |             2  >> Go Back                                      |";
} else {
				cout << "Invalid choice. Please try again.
";
				system("PAUSE");
			}
            cout<<"\t\t\t|_________________________________________________________________|

";
            cout<<"\t\t\t\tEnter your choice: "; 
            
            string input;
			cin >> input;
if (input.find_first_not_of("0123456789")!= string::npos) {
            cout << "Invalid input! Please enter a valid integer.
";
            system("PAUSE");
system("CLS");
            continue; // Restart the loop
        }
        choice = stoi(input); // Convert validated string to integer
        system("CLS");
if (username == "admin")
{
                switch (choice) {
case 1: addAppointment(); break;
                    case 2: deleteAppointment(); break;
case 3: editAppointment(); break;
                    case 4: listAllAppointments(); break;
case 5: mainMenu(); break;
                    default: cout << "Invalid choice.
";
                }
} else {
                switch (choice) {

                	case 1: listAllAppointments(); break;
case 2: mainMenu();
            default: cout << "Invalid choice.
";
                end;
            }
        } while (true);
    }
void addAppointment()
newAppointment;
   int appID, patID, docID;
   string name, date, time, status;
   cout << "\
********************************************************************************
";
    // Input and validation for Appointment ID
    while (true)
    {
        cout << "\
 >> Enter Appointment ID (integer only): ";
        string input;
cin >> input;
        if (input.find_first_not_of("0123456789") == string::npos) {
            appID = stoi(input);
            break; // Valid integer
        } else {

cout << "Invalid input! Please enter a valid integer.
";
        }
    }
    // Input and validation for Patient ID

    while (true) {

        cout << "
 >> Enter Patient ID (integer only): ";
string input;
        cin >> input;
        if (input.find_first_not_of("0123456789") == string::npos)
            patID = stoi(input);
            if (findPatient(patID))
break; // Valid patient ID
            } else {
                cout << "Patient ID not found. Please try again.
";
}
        } else {
            cout << "Invalid input! Please enter a valid integer.
";

        }
    }
    // Input and validation for Doctor ID
while (true) {
        cout << "
 >> Enter Doctor ID (integer only): ";
        string input;
        cin >> input;
        if (input.find_first_not_of("0123456789") == string::npos) {
            docID = stoi(input);
if (findDoctor(docID)) {
                break; // Valid doctor ID
            } else {
cout << "Doctor ID not found. Try again.";
                }
            else
                cout << "Invalid input! Please enter a valid integer.;

}
    cin.ignore(); // Flush the input buffer for string inputs
    // Input and validation for Name
    while (true) {
        cout << "\
 >> Enter Name (non-empty): ";
        getline(cin, name);
if (!name.empty()) {
            break; // Valid name
        } else {
            cout << "Name cannot be empty. Please try again.
"; // Not valid name
        }
// Input and validation for Date (optional as per your request to remove validation)
    while (true) {
        cout << \"\
 >> Enter Date (YYYY-MM-DD): \";
     
        getline(cin, date);
 
    }
    // Input and validation for Time
    while (true)
cout << " 
 >> Enter Time (HH:MM): ";
        getline(cin, time);
    }
    // Input and validation for Status
    while (true) {
        cout << " 
 >> Enter Status (non-empty): ";
        getline(cin, status);

if (!status.empty()) {
            break; // Valid status
        } else {
            cout << "Status cannot be empty. Please try again."<<endl;
        }
newAppointment.setAppointmentDetails(appID, patID, docID, date, time, status);
    appointments.push_back(newAppointment);
    cout << " 
  >> Appointment added successfully.
";
    saveToFile();

    cout << " 
********************************************************************
";
}
    void editAppointment() {
        int appID;
        cout << " 
--------------------------------
";
cout << "
 >> Enter Appointment ID to Edit: 
"; cin >> appID;
        cout << "
--------------------------------
";
        Appointment* appointment = findAppointment(appID);
        if (appointment == nullptr)
cout << "
 >> Appointment not found.
";

            return;
        }

        int patID, docID;
        string date, time, status;

        cout<<"
********************************************************************
";
cout << "
 >> Enter New Details:
";

        cout << "
 >> Patient ID: "; cin >> patID;
        cout << "
 >> Doctor ID: "; cin >> docID;
        cin.ignore();
cout << " 
 >> Date (YYYY-MM-DD): "; getline(cin, date);
        cout << " 
 >> Time (HH:MM): "; getline(cin, time);

        cout << " 
 >> Status: "; getline(cin, status);
        appointment->setAppointmentDetails(appID, patID, docID, date, time, status);
cout << " 
 >>> Appointment updated successfully.
";
        cout<<"
****************************************************************************
";
    }

     void deleteAppointment() {
        int appID;
        cout << "
--------------------------------
";
cout << " 
 >> Enter Appointment ID to Delete: 
"; cin >> appID;
        cout << " 
--------------------------------
";
        auto it = remove_if(appointments.begin(), appointments.end(), [appID](const Appointment& appointment) {
            return appointment.getAppointmentID() == appID;
));        if (it!= appointments.end()) {

            appointments.erase(it, appointments.end());
            cout << " 
 >> Appointment deleted successfully.
";
            saveToFile(); // Save changes to file
} else {
            cout << "Appointment not found.
";
        }
    }
    void listAllAppointments() const {
        if (appointments.empty())
cout << "
 >> No appointments found.
" << endl;

            return;
        }
        for (const auto& appointment : appointments) {

            appointment.Display();
cout << "----------------------------" << endl;
        }
    }
};
// Main function
int main() {
    HealthCareSystem system;

    system.login();
    system.mainMenu();
    return 0;
}
