#pragma once
#ifndef NPC_H
#define NPC_H
#include <iostream>
#include <fstream>

using namespace std;
//������� ����� (����������� - ���� �� 1 ����� ����� �����������)
class Npc
{
protected: //����������� ������� ���������� (���� ������ ������ ������ �������� � ����������)
    //�� ��� ��� �� ���� ������ � �������� ������ ���������
    string name{ "��������" };
    unsigned int health{ 10 };
    float damage{ 5 };
    unsigned short lvl{ 1 };

public: //��������� ����������� ������ (������������ ����� ����� � ����� �����)

    Npc();

    virtual void GetInfo(); //�������� ����� virtual 

    virtual void Create(); //�������� ����� virtual 

    void Save() 
    {
        ofstream saveSystem("save.txt", ios::binary);
        if (!saveSystem.is_open())
        {
            cout << "\n������ ����������\n���������� �����\n";
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
        Npc npc; //��������� ��������� ��� ���������� �� �����
        if (!loadSystem.is_open())
        {
            cout << "\n����� � �������� ��������\n������ � ������� ������������ ����������\n";
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