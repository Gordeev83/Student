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
        cout << "���: " << name << endl;
        cout << "�������: " << age << endl;
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
        cout << "���� ������������: " << researchTopic << endl;
    }
};

int main() 
{
    setlocale(LC_ALL, "");
    student s1("�����", 20);
    aspirant a1("�����", 25, "����� ��� ��� ���� ��� ���� �� ��� ���");

    s1.displayInfo();
    cout << endl;
    a1.displayInfo();

    return 0;
}