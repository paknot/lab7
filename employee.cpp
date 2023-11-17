#include <iostream>
using namespace std;
int main(){
  struct Company {
    std::string  name;
    std::string surname;
    int ID;
    std::string email;
    int phone;
    int salary;
    Company* manager;
  }emp1, emp2, emp3;
  emp1 = {"John","Doe", 1,"joe.doe@gmail.com", 123, 400000, nullptr};
   emp2 = {"Jane", "DOe", 2, "jane.doe@gmail.com", 321, 400000, &emp1};
   emp3 = {"Adam","Phill", 3, "adam.phil@gmail.com", 456, 60000, &emp1};
   cout<<"Workers at the company are: "<<emp1.name << " ,"<<emp2.name<< " and "<<emp3.name;
    

}
