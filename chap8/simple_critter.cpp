#include<iostream>

using namespace std;

// class Critter
// {
//     public:
//         int m_Hunger;
//         Critter(int hunger = 0); //constructor prototype
//         int GetHunger() const;
//         // void Greet();
//         void SetHunger(int hunger);

//     private:
//         int m_Hunger;
// };

// // Critter::Critter(int hunger){
// //     cout << "A new critter has been born!" << endl;
// //     m_Hunger = hunger;
// // }

// Critter::Critter(int hunger):
//     m_Hunger(hunger)
//     {
//         cout << "A new critter has been born!" << endl;
//     }

// int Critter::GetHunger() const
// {
//     return m_Hunger;
// }

// void Critter:: SetHunger(int hunger){
//     if(hunger < 0)
//     {
//         cout << "You can’t set a critter’s hunger to a negative number.\n\n";
//     }
//     else{
//         m_Hunger = hunger;
//     }
// }
// // void Critter::Greet()
// // {
// //     cout <<"Hi. I'm a critter. My hunger level is " << m_Hunger << ".\n";
// // }



// int main()
// {
//     // Critter crit1;
//     // Critter crit2;
//     // crit1.m_Hunger = 9;
//     // cout << "crit1's hunger level is " << crit1.m_Hunger << ".\n";
//     // crit2.m_Hunger = 3;
//     // cout << "crit2's hunger level is " << crit2.m_Hunger << ".\n\n";
//     // crit1.Greet();
//     // crit2.Greet();

//     // Critter crit(7);
//     // crit.Greet();

//     Critter crit(5);
//     //cout << crit.m_Hunger; //illegal, m_Hunger is private!
//     cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";
//     cout << "Calling SetHunger() with -1.\n";
//     crit.SetHunger(-1);
//     cout << "Calling SetHunger() with 9.\n";
//     crit.SetHunger(9);
//     cout << "Calling GetHunger(): " << crit.GetHunger() << "\n\n";
//     return 0;
//     return 0;
// }


class Critter
{
    public:
        static int s_total; //static number variable declaration
        Critter(int hunger=0);
        static int GetTotal(); //static number variable declaration
    
    private:
        int m_Hunger;

};

int Critter::s_total = 0;

Critter::Critter(int hunger):
    m_Hunger(hunger)
    {
        cout << "A critter has been born!" << endl;
        ++s_total;
    }

int Critter::GetTotal()
{
    return s_total;
}

int main()
{
    cout << "The total number of critters is: ";
    cout << Critter::s_total << "\n\n";
    Critter crit1, crit2, crit3;
    cout << "\nThe total number of critters is: ";
    cout << Critter::GetTotal() << "\n";
    return 0;
}