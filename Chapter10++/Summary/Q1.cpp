#include <iostream>
#include <string>
#include <string_view>



enum MonsterType
{   
    ogre,
    dragon,
    orc,
    giantSpider,
    slime
};

struct Monster
{
    MonsterType type{};
    std::string name{};
    int health{};
};

constexpr std::string getMonsterTypeString(MonsterType p)
{
    switch (p)
    {
        case MonsterType::dragon:
        return "Dragon";
        case MonsterType::ogre:
        return "Ogre";
        case MonsterType::orc:
        return "Orc";
        case MonsterType::giantSpider:
        return "Giant Spider";
        case MonsterType::slime:
        return "Slime";
    }

}

void printoutMonster(Monster& monster)
{
    std::cout << "This" << getMonsterTypeString(monster.type) << "is named " 
    << monster.name << "and has " << monster.health << "\n";
}

int main()
{
    Monster ogre {MonsterType::ogre, "Torg", 45};
    Monster slime {MonsterType::slime, "Blurp", 23};

    printoutMonster(ogre);
    printoutMonster(slime);
}