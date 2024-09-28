#include<iostream>
#include<string>

using namespace std;

class Critter
{
    public:
        Critter(const string& name ="", int age =0);
        ~Critter();
        Critter(const Critter& c); //copy constructor //prevent shallow copying
        Critter& operator=(const Critter& c); //overload assignment
        void Greet() const;

    private:
        string* m_pName;
        int m_Age;
};

Critter::Critter(const string& name, int age)
{
    cout << "Constructor called \n";
    m_pName = new string(name);
    m_Age = age;
}

Critter::~Critter()
{
    cout <<"Destructor called \n";
    delete m_pName;
}

Critter::Critter(const Critter& c)
{
    cout << "Copy constructor \n";
    m_pName = new string(*(c.m_pName));
    m_Age = c.m_Age;
}

Critter& Critter::operator=(const Critter&c)
{
    cout <<"Overloaded Assignment operator called \n";
    if (this != &c)
    {
        delete m_pName;
        m_pName = new string(*(c.m_pName));
        m_Age = c.m_Age;
    }
    return *this;
}

void Critter::Greet() const
{
    cout << "I'm " << *m_pName << " and I'm " << m_Age << " years old.\n";
    cout << "&m_pName: " << &m_pName << endl;
}

 void testDestructor();
 void testCopyConstructor(Critter aCopy);
 void testAssignmentOp();

int main(){
    testDestructor();
    cout << endl;
    Critter crit("Poochie", 5);
    crit.Greet();
    testCopyConstructor(crit); //crit passed by value so automatically copy constructor called
    crit.Greet();
    cout << endl;
    testAssignmentOp();
    return 0;
    // Critter acopy(crit);
    // acopy.Greet();


}

void testDestructor()
{
    Critter toDestroy("Rover",3);
    toDestroy.Greet();
}

void testCopyConstructor(Critter aCopy){
    aCopy.Greet();
}

void testAssignmentOp()
{
    Critter crit1("crit1", 7);
    Critter crit2("crit2",9);
    crit1= crit2;
    crit1.Greet();
    crit2.Greet();
    cout << endl;

    Critter crit3("crit",11);
    crit3 = crit3;
    crit3.Greet();
}