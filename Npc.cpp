#include "npc.h"
#include <iostream>


Npc::Npc()//����������� �� private
{
    std::cout << "�� ������� Npc" << endl;
}

void Npc::GetInfo() //����� ������
{
    std::cout << "��� - " << name << endl;
    std::cout << "�������� - " << health << endl;
    std::cout << "���� - " << damage << endl;
}

void Npc::Create() 
{

} 

Npc::~Npc() //���������� �� private
{
    std::cout << "Npc ������" << endl;
}