// Q.1 Demonstrate Oops Concept by creating a "Class" and its data member/ member function . 

#include<iostream>
using namespace std;
 
class Employee{
    private:                                            
    int id;                                             // Data Member
    string name;
    public:
    Employee(int id, string name){                     // Constructor (parametrized)
        this->id = id;                    
        this->name = name;
    }

    void display(){                                    // Member Function
        cout << "The name of Employee is : "  << name << endl;
        cout << "The name of EmployeeID is : "  << id << endl;
    }
};


int main()
{ 
    Employee e1(2,"Aakash");  
    e1.display();
    return 0;
}