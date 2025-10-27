#pragma once
#ifndef WARRIOR_H
#define WARRIOR_H
#include "npc.h"
#include <iostream>
using namespace std;

//������������ - ������������� ��������� �������
// � ������� ������ ��������� (parent), ������� �����������(child)
class Warrior : virtual public Npc //������������ � ������������� public (����������)
{
protected:  //����������� ������� (��������� - ����������, ������ � �����, ������ ������ ������)
    unsigned short strenght{ 31 };
    string weapons[4] = { "������", "�������", "������", "���" };
public:
    //����������� - �����, ������� ���������� � ������ �������� ����������
    //������ (������� ������� � �������� ������ ��������� �� �����)

    //����������� �� ���������, ����� ��� ����������
    Warrior();
    //��������� �����������
    Warrior(string name, unsigned int health, float damage);

    void GetWeapons();
    void GetInfo() override; //����������� (���������� ��� ������)
    void Create() override;
    //���������� - �����, ������� ���������� ������������� ��� ������������� ������
    //��� ��������� ������ � ����������� ������ (������ ������� �������)

    //��������� ���������
    //���������� ��������� ���������(==)
    bool operator == (const Warrior& warrior) const
    {
        return ((warrior.damage == this->damage)
            && (warrior.health == this->health)
            && (warrior.strenght == this->strenght));
    };
    
    //���������� ������ ��� ����������
    ~Warrior();
};

#endif // !WARRIOR_H