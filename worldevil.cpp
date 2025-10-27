#include "worldevil.h"

worldevil::worldevil(string n, int h, float d, unsigned short l, bool isA)
    :name(n), health(h), damage(d), lvl(l), isAlive(isA) {
    //������ ������������
    cout << "������� �������� " << name << "�����������";
}

worldevil::worldevil()
    :worldevil("������", 1, 1, 1, true) {
}

worldevil::worldevil(string n)
    :worldevil(n, health, damage, lvl, isAlive) {
}

worldevil::worldevil(string n, int h)
    :worldevil(n, h, damage, lvl, isAlive) {
}

worldevil::~worldevil() {
    cout << "������� �������� " << name << "��������";
}

