#include<iostream>
#include<fstream>
#include<sstream>
#include<string>

using namespace std;

int main() {
    ifstream file("data.txt");
    if (!file) {
        cout << "File not found. ";
        return 0;
}
int searchID;
cout << "Enter the ID to search: ";
cin >> searchID;

string line;

bool found = false;

while (getline(file, line)) {
    stringstream ss(line);

    string SID, Name, Address, Phone, Course, Fee, Remarks;

    getline(ss, SID, ',');
    getline(ss, Name, ',');
    getline(ss, Address, ',');
    getline(ss, Phone, ',');
    getline(ss, Course, ',');
    getline(ss, Fee, ',');
    getline(ss, Remarks, ',');

    if (stoi(SID) == searchID) {
        found = true;

        cout << "\nRecord found:\n";
        cout <<"-------------------------------\n";
        cout << "ID: " << SID << endl;
        cout << "Name: " << Name << endl;
        cout << "Address: " << Address << endl;
        cout << "Phone: " << Phone << endl;
        cout << "Course: " << Course << endl;
        cout << "Fee: " << Fee << endl;
        cout << "Remarks: " << Remarks << endl;
    }
}

if (!found) {
    cout << "\nRecord not found for ID.";

    file.close();

    return 0;
}


//Why Use stringstream?
// A line from the file is read as a single string:
// 101,Ram Sharma,Kathmandu,9811111111,BCA,35000,Excellent
// stringstream lets you split it into individual fields using commas as delimiters:
// stringstream ss(line);

// getline(ss, SID, ',');
// getline(ss, Name, ',');
// getline(ss, Address, ',');
// getline(ss, Phone, ',');
// getline(ss, Course, ',');
// getline(ss, Fee, ',');
// getline(ss, Remarks, ',');

// Search Data by ID  from  File:
// =========================

// #include<iostream>
// #include<fstream>
// #include<sstream>
// #include<string>
// using namespace std;

// int main()
// {
//     ifstream file("Students.txt");


//     if(!file)
//     {
//         cout<<"File not found.";
//         return 0;
//     }

//     int searchID;
//     cout<<"Enter Student ID : ";
//     cin>>searchID;

//     string line;

//     bool found=false;

//     while(getline(file,line))
//     {
//         stringstream ss(line);

//         string SID,Name,Address,Phone,Course,Fee,Remarks;

//         getline(ss,SID,',');
//         getline(ss,Name,',');
//         getline(ss,Address,',');
//         getline(ss,Phone,',');
//         getline(ss,Course,',');
//         getline(ss,Fee,',');
//         getline(ss,Remarks,',');

//         if(stoi(SID)==searchID)
//         {
//             found=true;

//             cout<<"\nRecord Found\n";
//             cout<<"-------------------------\n";
//             cout<<"ID       : "<<SID<<endl;
//             cout<<"Name     : "<<Name<<endl;
//             cout<<"Address  : "<<Address<<endl;
//             cout<<"Phone    : "<<Phone<<endl;
//             cout<<"Course   : "<<Course<<endl;
//             cout<<"Fee      : "<<Fee<<endl;
//             cout<<"Remarks  : "<<Remarks<<endl;
//         }
//     }

//     if(!found)
//         cout<<"\nStudent Not Found.";

//     file.close();

//     return 0;
// }