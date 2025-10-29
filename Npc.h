#pragma once
#ifndef NPC_H
#define NPC_H
#include <iostream>
#include <fstream>

using namespace std;
//базовый класс (абстрактный - хотя бы 1 метод будет виртуальным)
class Npc
{
protected: //модификатор доступа защищенный (дает доступ внутри класса родителя и наследника)
    //но все еще не дает доступ в основном потоке программы
    string name{ "персонаж" };
    unsigned int health{ 10 };
    float damage{ 5 };
    unsigned short lvl{ 1 };

public: //публичный модификатор доступ (использовать метод можно в любом месте)

    Npc();

    virtual void GetInfo(); //ключевое слово virtual 

    virtual void Create(); //ключевое слово virtual 

    void Save() 
    {
        ofstream saveSystem("save.txt", ios::binary);
        if (!saveSystem.is_open())
        {
            cout << "\nОшибка сохранения\nПопробуйте позже\n";
        }
        else
        {
            saveSystem.write(reinterpret_cast<const char*>(&(name)), sizeof(name));
            size_t length = name.length();
            saveSystem.write(reinterpret_cast<const char*>(&(length)), sizeof(length));
            saveSystem.write(reinterpret_cast<const char*>(&(health)), sizeof(health));
            saveSystem.write(reinterpret_cast<const char*>(&(damage)), sizeof(damage));
            saveSystem.write(reinterpret_cast<const char*>(&(lvl)), sizeof(lvl));
        }

    };

    Npc Load() 
    {
        ifstream loadSystem("save.txt", ios::binary);
        Npc npc; //временный контейнер для считывания из файла
        if (!loadSystem.is_open())
        {
            cout << "\nСвязь с космосом потеряна\nПамять о прошлых путешествиях повреждена\n";
        }
        else
        {
            loadSystem.read(reinterpret_cast<char*>(&(npc.name)), sizeof(npc.name));
            loadSystem.read(reinterpret_cast<char*>(&(npc.health)), sizeof(npc.health));
            loadSystem.read(reinterpret_cast<char*>(&(npc.damage)), sizeof(npc.damage));
            loadSystem.read(reinterpret_cast<char*>(&(npc.lvl)), sizeof(npc.lvl));
            
            return npc;
        }
    };


    ~Npc();
};
#endif // !NPC_H