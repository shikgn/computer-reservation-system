#include <iostream>
#include <string>
#include <ctime>
using namespace std;

class lazy
{
public:
    lazy(string name, string ability, int age)
    {
        m_Name = name;
        m_Ability = ability;
        m_Age = age;
    }
    void print()
    {
        cout << "����Ϊ��" << m_Name << " "
             << "����Ϊ��"
             << m_Ability
             << " "
             << "����Ϊ��" << m_Age << endl;
    }

private:
    string m_Name;
    string m_Ability;
    int m_Age;
};

int main()
{
    lazy Miao("����", "ţX", 3);
    Miao.print();
    system("pause");
    return 0;
}
