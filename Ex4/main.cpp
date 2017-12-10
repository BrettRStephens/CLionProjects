#include <iostream>
#include <string>

enum class MonsterType
{
    ogre,
    dragon,
    orc,
    giant_spider,
    slime,
};

std::string getMonsterType(MonsterType monsterType)
{
    if (monsterType == MonsterType::ogre)
        return std::string("Ogre");
    if (monsterType == MonsterType:: dragon)
        return std::string("Dragon");
    if (monsterType == MonsterType::orc)
        return std::string("Orc");
    if (monsterType == MonsterType::giant_spider)
        return std::string("Giant Spider");
    if (monsterType == MonsterType::slime)
        return std::string("Slime");
    else
        return std::string("Monster Type unknown!");
}

//initialize monster struct
struct MonsterStruct
{
    MonsterType monstertype;
    std::string name;
    int health;
};


void printMonster(MonsterStruct monsterstruct)
{

    std::cout << "This " << getMonsterType(monsterstruct.monstertype) <<
              " is named " << monsterstruct.name << " and has " << monsterstruct.health <<
              " health\n";

}


int main()


{
    MonsterStruct Ogre = {MonsterType::ogre, "Torg", 145};
    MonsterStruct Slime = {MonsterType::slime, "Blurp", 23};

    printMonster(Ogre);
    printMonster(Slime);

    return 0;
}