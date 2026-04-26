#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct User{
    string name;
    int age;
    bool status;
};

int main(){    
    vector<User> users;

    while(true){
        int choice;

        cout << "1. see users infos" << endl << "2. add user"<< endl << "3. delete users" << endl << "4. change user info" << endl << "5.exit" << endl << "what do you want to do: ";
        cin >> choice;

        if(choice == 1){
            if (users.size() > 0){
               for(int i = 0;i < users.size(); i++){
                    cout << "--------------------------" << endl;
                    cout << "id: " << i+1 << endl;
                    cout << "name: " << users[i].name << endl;
                    cout << "age: " << users[i].age << endl;
                    cout << "status: " << (users[i].status ? "active":"non active") << endl;
                }
                cout << "--------------------------" << endl;
            } else{
                cout << "you must create the users" << endl;
            }

        } else if(choice == 2){
            string newusername;
            int newuserage;
            string newuserstatus;

            cout << "enter the new user name: ";
            cin.ignore();
            getline(cin,newusername);

            cout << "enter the new user age: ";
            cin >> newuserage;

            cout << "this user is active? (y/n): ";
            cin >> newuserstatus;

            if(newuserstatus == "y"){
                users.push_back({newusername,newuserage,true});
                cout << "the user " << newusername << " was added" << endl;
            } else if(newuserstatus == "n"){
                users.push_back({newusername,newuserage,false});
                cout << "the user " << newusername << " was added" << endl;
            } else{
                cout << "choose 'y' or 'n' " << endl;
            }

        } else if(choice == 3){
            int choiceindex;

            cout << "enter the id of the user that will be removed: ";
            cin >> choiceindex;

            if (choiceindex >= 1 && choiceindex <= users.size()){
                users.erase(users.begin() + choiceindex - 1);
            } else{
                cout << "choose a valid id" << endl;
            }
        } else if(choice == 4){
            int choiceupdate;

            cout << "enter the id that will be changed: ";
            cin >> choiceupdate;

            if(choiceupdate >= 1 && choiceupdate <= users.size()){
                int index = choiceupdate - 1;
                string newname;
                int newage;
                string newstatus;

                cout << "enter the new name of the user: ";
                cin.ignore();
                getline(cin,newname);

                cout << "enter the new age of the user: ";
                cin >> newage;

                cout << "enter the new status of the user(y/n): ";
                cin >> newstatus;

                if(newstatus == "y"){
                    users[index].name = newname;
                    users[index].age = newage;
                    users[index].status = true;
                } else if (newstatus == "n")
                {
                    users[index].name = newname;
                    users[index].age = newage;
                    users[index].status = false;
                } else{
                    cout << "enter a valid status" << endl;
                }
                
            }else{
                cout << "enter a valid id" << endl;
            }
        } else if(choice == 5){
            cout << "leaving..." << endl;
            break;
        } else{
            cout << "try a valid option" << endl;
        }
    }

    return 0;
}