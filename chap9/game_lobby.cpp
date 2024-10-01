#include<iostream>

using namespace std;

class Player
{
    public:
        Player(const string& name="");
        string GetName() const;
        Player* GetNext() const;
        void SetNext(Player* next);
    
    private:
        string m_Name;
        Player* m_pNext; // pointer to next player in the list
};

Player::Player(const string& name=""):
    m_Name(name),
    m_pNext(0)
{}

string Player::GetName() const
{
    return m_Name;
}

Player* Player::GetNext() const
{
    
}