#include <iostream>
#include <limits>
using namespace std;


struct Staff {
    std::string name;
    std::string surname;
    int ID;
};

int main() {
    int number;
    while (true) {
        cout << "Enter how many staff in your company: ";   
        if (cin >> number) {
            break;
        } else {
            cin.clear();
	    cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Give me a number." << endl;
        }
    }

    Staff* staffArray = new Staff[number];
    
    for (int i = 0; i < number; i++) {
        cout << "Enter details for " << i + 1 << " member of staff." << endl;
        cout << "ID: ";
        cin >> staffArray[i].ID;
        cout << "Name: ";
        cin >> staffArray[i].name;
        cout << "Surname: ";
        cin >> staffArray[i].surname;
    }

    cout << endl << "Staff details: "<<endl;
    for (int i = 0; i < number; i++) {
        
        cout << "ID: " << staffArray[i].ID << ", Name: " << staffArray[i].name << ", Surname: " << staffArray[i].surname << endl;
    }

    delete[] staffArray;
    return 0;
}
