#include <iostream>
#include<string>
#include <array>

using namespace std;
const int NO =3;


struct Employee{
    string name;
    int age, salary;
};

// display menu:
void displayMeu(){
    cout <<"\n1- Display employee of 1 OR 2 OR 3." <<endl;
    cout <<"\n2- add new employee." <<endl;
    cout <<"\n3- Display all employees." <<endl;

}

//take index for emply and display his data:
void indexEmp(struct Employee emp[], int NO){
    int index=0;
    cout <<"please enter the number of employee ";
    cin >> index;
    for(int i=0;i<NO;i++){
            if((index-1) == i){
                 cout <<"\nthe name is: " << emp[i].name << endl;
                cout <<"\nthe age is: " << emp[i].age << endl;
                cout <<"\nthe salary is: " << emp[i].salary << endl;
            }
    }
}
// add new one:
void addEmp(struct Employee emp[], int NO){
    int index=0;
    cout <<"please enter the number of new employee ";
    cin >> index;
    for(int i=0;i<NO;i++){
            if((index-1) == i){
                 cout <<"\nplease enter the name: " <<  endl;
                 cin >>emp[i].name;

                cout <<"\nplease enter the age: " <<  endl;
                cin>>emp[i].age;

                cout <<"\nplease enter the salary: " <<  endl;
                cin>>emp[i].salary;
            }
    }
}

//display all emplyees:
void allemp(struct Employee emp[], int NO){
    for(int i=0;i<NO;i++){
        cout <<"\n  ---- The employee number: " << i+1  << "---" << endl;
        cout <<"\nthe name is: " << emp[i].name << endl;
        cout <<"\nthe age is: " << emp[i].age << endl;
        cout <<"\nthe salary is: " << emp[i].salary << endl;
    }
}

int main()
{
    Employee emp[NO];

    int input;

    //data of emp1:
    emp[0].name ="Hadeer";
    emp[0].age = 30;
    emp[0].salary =1700;

    //data of emp2:
    emp[1].name ="Sameh";
    emp[1].age = 25;
    emp[1].salary =2500;

    //data of emp2:
    emp[2].name ="Ahmed";
    emp[2].age = 26;
    emp[2].salary =3500;

    for(int i=0;i<NO+3;i++){
        // display and get the input from user
        displayMeu();
        cin >> input;

    //comparing the input:
        switch(input){
        case(1):
            indexEmp(emp,NO);
            break;

        case (2):
            addEmp(emp,NO);
            break;

        case(3):
            allemp(emp,NO);
            break;

        default:
            cout<<"\n ---not valid number---" << endl;
        }

    }
    return 0;
}
