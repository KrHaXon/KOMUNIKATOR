#ifndef KLASY_H
#define KLASY_H
#include <string>
using namespace std;
class User
{
private:
    string m_name;
    string m_DateOfBirth;
    string m_email;
    string m_login;
    string m_password;
    int m_userIP;
public:
    User()
        {};
    User(string a, string b, string c, string d, string e)
    {
        setName(a);
        setDateOfBirth(b);
        setEmail(c);
        setLogin(d);
        setPassword(e);
    }
    void setName(string n)
    {
        m_name = n;
    }
    void setDateOfBirth(string n)
    {
        m_DateOfBirth = n;
    }
    void setEmail(string n)
    {
        m_email = n;
    }
    void setLogin(string n)
    {
        m_login = n;
    }
    void setPassword(string n) //z tym hasłem to trzeba pokombinowac troche
    {
        m_password = n;
    }
    //nw co z ip i z getterami
};
class Chat
{
private://relacja kompozycja
    User m_user;//tu bedzie lepiej chyba zrobic tablice bo jak chcemy czat grupowy to bedzie lepiej
    User m_SecondUser;
public:
    Chat(User first, User second)
    {
        m_user = first;
        m_SecondUser = second;
    }
    //void addUser() void RemoveUser jesli chcemy wiekszy czat to tak zrobimy
};
class ChatMessage
{
private:
    Chat m_chacik; //relacja kompozycja
    User m_sender;
    string m_message;//tu lepszy bedzie chyba inny typ, jakis dynamiczny idk
public:
    void addMessage(string mess)
    {
        m_message = mess;
    }
    string getMessage() { return m_message; }
};
class FriendList
{
private:
    User m_user;//kompozycja tez, mysle ze to bedzie najlawietjsza relacja, ewentualnie mozemy z dziedziczeniem pokombinowac ale to trzeba mocnej przekmniy dla mnie
    User m_friends[];
public:
    void addFriend(User us)
    {

    }
    void removeFriend(User us)
    {

    }
};
#endif // KLASY_H