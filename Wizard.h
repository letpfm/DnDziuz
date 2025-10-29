#pragma once
#ifndef WIZARD_H
#define WIZARD_H
#include "Npc.h"
#include <iostream>

using namespace std;


class Wizard : virtual public Npc
{
public:
    unsigned short intellect = 27;
    string spell[4] = { "�������", "����������� ������", "�������� ���", "����������� �����" };
public:
    Wizard();
    Wizard(string name, unsigned int health, float damage);

    //����������� (���������� ��� ������)
    void GetInfo() override;
    void CastSpell();
    void Create() override;

    //���������� ��������� ������������
    Wizard operator + (const Wizard& wizard) const
    {
        return Wizard(this -> name, 
            (this->health + wizard.health),
            (this->damage + wizard.damage)
        );
    };

    /*Paladin operator + (const Warrior& warior) const
    {
        return Paladin();
    };*/


    //���������� ������ ��� ����������
    ~Wizard();
};


#endif // !WIZARD_H