#include "RBTree.h"

int main()
{
    setlocale(LC_ALL, "Russian");
    int ch, y = 0;
    RBtree obj;
    do
    {
        cout << "\n 1. создать дерево ";
        cout << "\n 2. удалить элемент";
        cout << "\n 3. найти элемент";
        cout << "\n 4. вывести дерево ";
        cout << "\n 5. выйти ";
        cout << "\nвыберите действие: ";
        cin >> ch;
        switch (ch)
        {
        case 1: obj.insert();
            cout << "\nузел вставлен.\n";
            break;
        case 2: obj.del();
            break;
        case 3: obj.search();
            break;
        case 4: obj.disp();
            break;
        case 5: y = 1;
            break;
        default: cout << "\nсделайте правильный выбор.";
        }
        cout << endl;

    } while (y != 1);
    return 1;
}