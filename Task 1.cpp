#include "Eq2.h"

int main()
{
    setlocale(LC_ALL, "");
    double a, b, c;
    cout << "������� ������������ ���������: ";
    cin >> a >> b >> c;
    eq2 exmpl(a, b, c);
    exmpl.find_X();
    cout << "��� x = 6, �������� ���������� ����� " << exmpl.find_Y(6) << endl;

    eq2 exmpl2(1, 2, 1);
    eq2 exmpl_sum = exmpl + exmpl2;

    cout << "������������ exmpl a = " << fixed << setprecision(2) << exmpl.get_a() << ", b = " << exmpl.get_b() << ", c = " << exmpl.get_c() << endl;
    cout << "������������ exmpl2 a = " << exmpl2.get_a() << ", b = " << exmpl2.get_b() << ", c = " << exmpl2.get_c() << endl;
    cout << "������������ exmpl_sum a = " << exmpl_sum.get_a() << ", b = " << exmpl_sum.get_b() << ", c = " << exmpl_sum.get_c() << endl;


    return 0;
}