#include <iostream>
#include <string>


using namespace std;


void ChangeValue(int a, int b);
void ChangeValueWithPointers(int *a, int *b);

int main()
{

    int a = 10, b = 15;

    cout << "Before_1 " << a << " " << b <<endl;

    ChangeValue(a, b);

    cout << "After_1 " << a << " " << b <<endl;

    ChangeValueWithPointers(&a, &b);

    cout << "After_2 " << a << " " << b <<endl;


    system("pause");
    return 0;
}

void ChangeValue(int a, int b)
{
    int tmp = a;

    a = b;
    b = tmp;
}

void ChangeValueWithPointers(int *a, int *b)
{

    cout << *a << " " << *b <<endl;

    int tmp = *a;

    *a = *b;
    *b = tmp;

    cout << *a << " " << *b <<endl;
}





