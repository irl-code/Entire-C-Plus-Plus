#include <iostream>
// using namespace std;
class Entity
{
public:
    std::string getName()
    {
        return "Entity";
    }
};
class Player : public Entity
{
private:
    std::string name;

public:
    Player(const std::string &m_name) : name(m_name) {}

    std::string getName()
    {
        return name;
    }
};
int main()
{
    // std::cout<<"Helo world";
    // return 0;
    Entity *e = new Entity();
    std::cout << e->getName() << std::endl;
    Player *p = new Player("Hamza");
    std::cout << p->getName() << std::endl;
    std::cin.get();
}
