#include "RBTree.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int ch, y = 0;
    RBtree obj;
    do
    {
        cout << "\n 1. ������� ������ ";
        cout << "\n 2. ������� �������";
        cout << "\n 3. ����� �������";
        cout << "\n 4. ������� ������ ";
        cout << "\n 5. ����� ";
        cout << "\n�������� ��������: ";
        cin >> ch;
        switch (ch)
        {
        case 1: obj.insert();
            cout << "\n���� ��������.\n";
            break;
        case 2: obj.del();
            break;
        case 3: obj.search();
            break;
        case 4: obj.disp();
            break;
        case 5: y = 1;
            break;
        default: cout << "\n�������� ���������� �����.";
        }
        cout << endl;

    } while (y != 1);
    return 1;
}