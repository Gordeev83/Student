#include <iostream>
#include <string>

using namespace std;

class student {
protected:
    string name;
    int age;
public:
    student(string _name, int _age) : name(_name), age(_age) {}

    void displayInfo() {
        cout << "Имя: " << name << endl;
        cout << "Возрост: " << age << endl;
    }
};

class aspirant : public student {
private:
    string researchTopic;
public:
    aspirant(string _name, int _age, string _researchTopic)
        : student(_name, _age), researchTopic(_researchTopic) {}

    void displayInfo() {
        student::displayInfo();
        cout << "Тема исследования: " << researchTopic << endl;
    }
};

int main() 
{
    setlocale(LC_ALL, "");
    student s1("Антон", 20);
    aspirant a1("Кирил", 25, "Зачем мне это надо или надо ли мне это");

    s1.displayInfo();
    cout << endl;
    a1.displayInfo();

    return 0;
}