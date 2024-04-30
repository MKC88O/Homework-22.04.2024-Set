// Homework-22.04.2024-Set.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <ctime>
#include "Person.h"
#include <set>

using namespace std;

void operator << (ostream& cout, Person& person) {
    cout << "===============================================================\n";
    cout << "Информация о person: \n\n";
    cout << "Имя:\t\t\t\t" << person.GetName() << " " << person.GetPatronymic() << " " << person.GetSurname() << "\n";
    cout << "Номер телефона:\t\t\t" << person.GetPhoneNumberStart() << person.GetPhoneNumberEnd() << "\n";
    cout << "Дата рождения:\t\t\t" << person.GetBirthDay() << "." << person.GetBirthMonth() << "." << person.GetBirthYear() << "\n";
    cout << "Серия и номер паспорта:\t\t" << person.GetPasportSerial() << person.GetPasportNumber() << "\n";
    cout << "Идентификационный номер: \t" << person.GetIPN() << "\n";
    cout << "Статус:\t\t\t\t" << person.GetStatus() << "\n";
    cout << "===============================================================\n";
}

int main()
{
    srand(time(0));
    setlocale(0, "");

    //Person* a = new Person;
    //a->Print();

    //Person* b = new Person;
    //b->Print();

    //Person* c = new Person;
    //c->Print();

    //Person* d = new Person;
    //d->Print();

    //Person* e = new Person;
    //e->Print();

    //Person f;
    //f.Print();
    //Person copy = f;
    //copy.Print();
    Person a1;
    Person b1;
    Person c1;
    Person d1;
    Person e1;

    set<Person> tree;
    //уникальные объекты легко добавляются в множество
    cout << "Множество: \n";
    tree.insert(a1);
    tree.insert(b1);
    tree.insert(c1);
    tree.insert(d1);
    tree.insert(e1);
    //показывая множество, видно что в нем хранится 5 объектов 
    for (Person current : tree)
    {
        cout << current;
    }
    cout << "\n\n";

    Person h1;
    set<Person> Tree;
    //не уникальные объекты не добавляются повторно
    cout << "++++++++++++++++  1 добавление  +++++++++++++++++\n";
    Tree.insert(h1);
    //здесь после каждого добавления показывается множество, и в нем каждый раз только 1 объект
    cout << "Множество: \n";
    for (Person current : Tree)
    {
        cout << current;
    }
    cout << "\n\n";

    cout << "++++++++++++++++  2 добавление  +++++++++++++++++\n";
    Tree.insert(h1);
    cout << "Множество: \n";
   for (Person current : Tree)
    {
        cout << current;
    }
    cout << "\n\n";

    cout << "++++++++++++++++  3 добавление  +++++++++++++++++\n";
    Tree.insert(h1);
    cout << "Множество: \n";
    for (Person current : Tree)
    {
        cout << current;
    }
    cout << "\n\n";

    cout << "++++++++++++++++  4 добавление  +++++++++++++++++\n";
    Tree.insert(h1);
    cout << "Множество: \n";
    for (Person current : Tree)
    {
        cout << current;
    }
    cout << "\n\n";

    cout << "++++++++++++++++  5 добавление  +++++++++++++++++\n";
    Tree.insert(h1);
    cout << "Множество: \n";
    for (Person current : Tree)
    {
        cout << current;
    }
    cout << "\n\n";

    /*delete a;
    a = nullptr;

    delete b;
    b = nullptr;

    delete c;
    c = nullptr;

    delete d;
    d = nullptr;

    delete e;
    e = nullptr;*/
}

// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
