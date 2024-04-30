#pragma once
#include <iostream>
#include <string>
using namespace std;
// -*- coding: utf-8 -*-
class Person {
    string names[32] = {
        "Àëåêñàíäð", "Àëåêñåé", "Àíäðåé", "Àðòåì", "Âàëåíòèí",
        "Âàëåðèé", "Âàñèëèé", "Âèêòîð", "Âëàäèìèð", "Âëàäèñëàâ",
        "Ãåîðãèé", "Ãðèãîðèé", "Äàíèèë", "Äåíèñ", "Äìèòðèé", "Åâãåíèé", "Èâàí",
        "Èãîðü", "Èëüÿ", "Êèðèëë", "Ìàêñèì", "Þðèé",
         "Ìèõàèë", "Íèêèòà", "Íèêîëàé", "Îëåã", "Ôåäîð",
        "Ïàâåë", "Ðîìàí", "Ðóñëàí", "Ñåðãåé", "Ñòàíèñëàâ",

    };
    int namesSize = sizeof(names) / sizeof(names[0]);
    int randomNameIndex = rand() % namesSize;
    string Name = names[randomNameIndex];

    string surnames[85]{
        "Êîëåñíèê", "Ôåäîðåíêî", "Òèõîíîâ", "Ãðèöàé", "Îíèùåíêî",
        "Æóêîâ", "Ãîðäååâ", "Ìåëüíèê", "Ãóñåâ", "Áàðàíîâ",
        "Ñóõàíîâ", "Ðîäèîíîâ", "Êóçüìåíêî", "Äóáåíêî", "Øàïîâàëåíêî",
        "Òèìîôååâ", "Ãîðáóíîâ", "Áîãàòûðåâ", "Òðîôèìîâ","Ïàâëåíêî",
        "Áåëÿåâ", "Ïàðõîìåíêî", "Êîñòåíêî", "Òàðàñîâ", "Ãîí÷àðåíêî",
        "Øåâåëü", "Áàðñóêîâ", "Áîãäàíåíêî", "Ïîëÿêîâ", "Áåëîâ",
        "Ñåðãååâ", "Ãàâðèëîâ", "Ìàðòûíîâ", "Ëèñåíêî", "Çóåâ",
        "Êðàñíîâ", "Ìàðêîâ", "Æóêîâñüêèé", "Ãðèãîðüåâ", "Òêà÷åíêî",
        "Ìàêñèìîâ", "Ôèëèïïîâ", "Ãðèãîðåíêî", "Ìîðîçåíêî", "Çóáåíêî",
        "Ðÿáåíêî", "Ïðèõîäüêî", "Ëàçàðåâ", "Êîìàðåíêî", "Ñîëîìîí",
        "Ñèäîðåíêî", "Ôîìåíêî", "Çàéöåâ", "Ëóêúÿí÷åíêî", "Ëóêúÿíåíêî",
        "Øåâöîâ", "Äàíèëåíêî", "Ìèõàéëåíêî", "Ìåëüíè÷åíêî", "Ñîðîêèí",
        "Ðîìàíîâ", "Æóêîâ", "Çóáåíêî", "Êàðïåíêî", "Êóëèêåíêî",
        "Êîðíèåíêî", "Ïîòàïîâ", "Áîíäàðåíêî", "Êðèâåíêî", "Ìàðòèíåíêî",
        "Ñàâ÷åíêî", "Ïàâëþ÷åíêî", "Ïåòðåíêî", "Äåìåíòüåâ", "Ñàâåëüåâ",
        "Êîçëîâ", "Øàïîâàëåíêî", "Ãîí÷àðåíêî", "Ãîðáóíîâ", "Êîíîíîâ",
        "Ìîðîçåíêî", "Ñîëîìîí", "Ñèäîðåíêî", "Òàðàñåíêî", "Ñåìåíåíêî"
    };
    int surnamesSize = sizeof(surnames) / sizeof(surnames[0]);
    int randomSurnameIndex = rand() % surnamesSize;
    string Surname = surnames[randomSurnameIndex];

    string patronymics[65]{
        "Èâàíîâè÷", "Ïåòðîâè÷", "Àëåêñàíäðîâè÷", "Íèêîëàåâè÷", "Ñåðãååâè÷",
        "Ìèõàéëîâè÷", "Âëàäèìèðîâè÷", "Àíäðååâè÷", "Àëåêñååâè÷", "Äìèòðèåâè÷",
        "Áîðèñîâè÷", "Åãîðîâè÷", "Àðòåìîâè÷", "Ìàêñèìîâè÷", "Àðêàäüåâè÷",
        "Ãðèãîðüåâè÷", "Àíàòîëüåâè÷", "Òèìîôååâè÷", "Ñòàíèñëàâîâè÷", "Èãîðåâè÷",
        "Ôåäîðîâè÷", "Äåíèñîâè÷", "ßðîñëàâîâè÷", "Êèðèëëîâè÷", "Âèêòîðîâè÷",
        "Ïàâëîâè÷", "Âàñèëüåâè÷", "Ìàòâååâè÷", "Ôèëèïïîâè÷", "Âàëåíòèíîâè÷",
        "Ðîìàíîâè÷", "Ãåîðãèåâè÷", "Íèêèòè÷", "Âàëåðüåâè÷", "Âÿ÷åñëàâîâè÷",
        "Îëåãîâè÷", "Åâãåíüåâè÷", "Ëåîíèäîâè÷", "Ñåìåíîâè÷", "Âèòàëüåâè÷",
        "Ñâÿòîñëàâîâè÷", "Áîãäàíîâè÷", "Âëàäèñëàâîâè÷", "Âàëåðèåâè÷", "Àðòóðîâè÷",
        "Ëüâîâè÷", "Èëüè÷", "Àíäðååâè÷", "Ãëåáîâè÷", "Àëüáåðòîâè÷",
        "Òàðàñîâè÷", "Ñàâåëüåâè÷", "Ñâÿòîñëàâîâè÷", "Ñåðãååâè÷", "Ëüâîâè÷",
        "Ïëàòîíîâè÷", "Âàëåðüåâè÷", "Àíòîíîâè÷", "Âàñèëüåâè÷", "Àðêàäèåâè÷",
        "Íèêîëàåâè÷", "Ìèõàéëîâè÷", "Ïàâëîâè÷", "Èâàíîâè÷", "Àëåêñàíäðîâè÷"
    };
    int patronymicsSize = sizeof(patronymics) / sizeof(patronymics[0]);
    int randomPatronymicIndex = rand() % patronymicsSize;
    string Patronymic = patronymics[randomPatronymicIndex];

    int birthDay = random(1, 31);
    int birthMonth = random(1, 12);
    int birthYear = random(1900, 2024);

    int phoneNumberEnd = random(1000000, 9999999);
    string phoneNumberStart[9]{
        "+38(063)","+38(066)", "+38(068)",
        "+38(073)", "+38(093)", "+38(095)",
        "+38(096)", "+38(097)", "+38(098)",
    };
    int phoneNumberStartSize = sizeof(phoneNumberStart) / sizeof(phoneNumberStart[0]);
    int numberStartIndex = rand() % phoneNumberStartSize;
    string numberStart = phoneNumberStart[numberStartIndex];

    string pasportSerial[100]{
        "ÀÀ", "ÀÁ", "ÀÂ", "ÀÃ", "ÀÄ", "ÀÅ", "ÏÏ", "ÏÆ", "ÏÇ", "ÏÈ",
        "ÁÀ", "ÁÁ", "ÁÂ", "ÁÃ", "ÁÄ", "ÁÅ", "ÆÀ", "ÆÁ", "ÆÂ", "ÆÃ",
        "ÂÀ", "ÂÁ", "ÂÂ", "ÂÃ", "ÂÄ", "ÂÅ", "ÇÀ", "ÇÁ", "ÇÂ", "ÇÃ",
        "ÃÀ", "ÃÁ", "ÃÂ", "ÃÃ", "ÃÄ", "ÃÅ", "ÈÀ", "ÈÁ", "ÈÂ", "ÈÃ",
        "ÄÀ", "ÄÁ", "ÄÂ", "ÄÃ", "ÄÄ", "ÄÅ", "ÉÀ", "ÉÁ", "ÉÂ", "ÉÃ",
        "ÅÀ", "ÅÁ", "ÅÂ", "ÅÃ", "ÅÄ", "ÅÅ", "ÊÀ", "ÊÁ", "ÊÂ", "ÊÃ",
        "ÐÀ", "ÐÁ", "ÐÂ", "ÐÃ", "ÐÄ", "ÐÅ", "ËÀ", "ËÁ", "ËÂ", "ËÃ",
        "ÆÄ", "ÆÅ", "ÆÒ", "ÆÆ", "ÆÇ", "ÆÈ", "ÌÀ", "ÌÁ", "ÌÂ", "ÌÃ",
        "ÇÄ", "ÇÅ", "ÇÒ", "ÇÆ", "ÇÇ", "ÇÈ", "ÍÀ", "ÍÁ", "ÍÂ", "ÍÃ",
        "ÈÄ", "ÈÅ", "ÈÒ", "ÈÆ", "ÈÇ", "ÈÈ", "ÎÀ", "ÎÁ", "ÎÂ", "ÎÃ"
    };
    int pasportSerialSize = sizeof(pasportSerial) / sizeof(pasportSerial[0]);
    int randomSerialIndex = rand() % pasportSerialSize;
    string Serial = pasportSerial[randomSerialIndex];
    double pasportNumber = random(100000, 999999);

    long long int IPN = random(1000000000, 9999999999);

    string status[2]{
        "Óõèëÿíò", "Íå óõèëÿíò"
    };
    int statusSize = sizeof(status) / sizeof(status[0]);
    int randomStatusIndex = rand() % statusSize;
    string Status = status[randomStatusIndex];

    double random(double min, double max);

public:
    void SetName(string Name);
    void SetSurname(string Surname);
    void SetPatronymic(string Patronymic);
    void SetBirthDay(int birthDay);
    void SetBirthMonth(int birthMonth);
    void SetBirthYear(int birthYear);
    void SetPhoneNumberStart(string numberStart);
    void SetPhoneNumberEnd(int phoneNumberEnd);
    void SetPasportSerial(string Serial);
    void SetPasportNumber(int pasportNumber);
    void SetIPN(long long int IPN);
    void SetStatus(string Status);
    
    string GetName() const;
    string GetSurname() const;
    string GetPatronymic() const;
    int GetBirthDay() const;
    int GetBirthMonth() const;
    int GetBirthYear() const;
    string GetPhoneNumberStart() const;
    int GetPhoneNumberEnd() const;
    string GetPasportSerial() const;
    int GetPasportNumber() const;
    long long int GetIPN() const;
    string GetStatus() const;

    bool operator<(const Person& original) const;

    /*Person();
    Person(string Name, string Surname, string Patronymic, string numberStart, int phoneNumberEnd);
    Person(const Person& original);*/

    ~Person();

    void FullName() const;
    void PhoneNumber() const;
    void Print() const;
};

