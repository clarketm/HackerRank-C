#include <cmath>
#include <iostream>

using namespace std;

// Virtual Functions
// https://www.hackerrank.com/challenges/virtual-functions/problem

class Person {
public:
    string name;
    int age;

    virtual void getdata() {}

    virtual void putdata() {}
};

class Professor : public Person {

private:
    static int id_total;
    int publications;
    int cur_id;

public:
    Professor() {
        cur_id = ++id_total;
    }

    virtual void getdata() {
        cin >> name;
        cin >> age;
        cin >> publications;
    }

    virtual void putdata() {
        printf("%s %d %d %d\n", name.c_str(), age, publications, cur_id);
    }

};

int Professor::id_total = 0;


class Student : public Person {
private:
    static int id_total;
    int marks[6];
    int cur_id;
    int sum = 0;

public:
    Student() {
        cur_id = ++id_total;
    }

    virtual void getdata() {
        cin >> name;
        cin >> age;

        for (int &mark : marks) {
            cin >> mark;
            sum += mark;
        }
    }

    virtual void putdata() {
        printf("%s %d %d %d\n", name.c_str(), age, sum, cur_id);
    }

};

int Student::id_total = 0;


int main() {

    int n, val;
    cin >> n; //The number of objects that is going to be created.
    Person *per[n];

    for (int i = 0; i < n; i++) {

        cin >> val;
        if (val == 1) {
            // If val is 1 current object is of type Professor
            per[i] = new Professor;
        } else
            // Else the current object is of type Student
            per[i] = new Student;

        per[i]->getdata(); // Get the data from the user.

    }

    for (int i = 0; i < n; i++)
        per[i]->putdata(); // Print the required output for each object.

    return 0;

}