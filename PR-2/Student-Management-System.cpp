#include<iostream>
#include<vector>
using namespace std;

template <class T>
class student{
    public :
         T id;
         string name;

         student(T i, string n) {
            id = i;
            name = n;
        }

        void display(){
           cout << " ID : " << id << endl;
           cout << " Name : " << name << endl;
        }
    };

int main(){

    vector< student<int> > students;

    int choice,id;
    string name;
    
    do{
        cout << "\n---- Student Management System ----" << endl;
        cout << "1. Add Student" << endl;
        cout << "2. Display All Student" << endl;
        cout << "3. Search Student by Id" << endl;
        cout << "4. Remove Student by Id" << endl;
        cout << "0. Exit" << endl;
        cout << "Enter choice : ";
        cin >> choice;

        switch (choice) {

            

            case 1:
                cout << "\nEnter Id : ";
                cin >> id;
                cout << "Enter Name : ";
                cin >> name;
                students.push_back(student<int>(id, name));
                cout << "Student Added Successfully..!" << endl;
                break;


            case 2:
                if(students.size() == 0) {
                    cout << "\nNo Student Found..!" << endl;
                }
                else{
                    cout << "--- All Student ---" << endl;
                    for(int i = 0; i < students.size(); i++) {
                        students[i].display();
                    }
                }
                break;

            case 3:
                if (students.size() == 0) {
                    cout << "No Student Found..!" << endl;
                    break;
                }

                cout << "Enter Id to Search : ";
                cin >> id;

                cout << "--- Search Result ---" << endl;

                for(int i = 0; i < students.size(); i++) {
                    if (students[i].id == id) {
                        students[i].display();
                        break;
                    }

                    if (i == students.size() - 1) {
                        cout << "Student Not Found..!" << endl;
                    }
                }
                break;
            case 4:
                if (students.size() == 0) {
                    cout << "No Student Found..!" << endl;
                    break;
                }

                cout << "Enter Id to Remove : ";
                cin >> id;

                for(int i = 0; i < students.size(); i++) {
                    if(students[i].id == id) {
                        students.erase(students.begin() + i);
                        cout << "Student Removed Successfully..!" << endl;
                        break;
                    }

                    if (i == students.size() - 1) {
                        cout << "Student Not Found..!" << endl;
                    }
                }
                break;

                case 0:
                    cout << "Program Exited..!" << endl;
                    break;
                default:
                    cout << "Invalid Choice..!Try Again." << endl;    
        }

    }while(choice != 0);
    

    return 0;
}