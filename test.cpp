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
        cout << "姓名为：" << m_Name << " "
             << "能力为："
             << m_Ability
             << " "
             << "年龄为：" << m_Age << endl;
    }

private:
    string m_Name;
    string m_Ability;
    int m_Age;
};

int main()
{
    lazy Miao("老懒", "牛X", 3);
    Miao.print();
    system("pause");
    return 0;
}
