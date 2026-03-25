#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

int main(){
   setlocale(LC_ALL, "Russian");

    int chodelat; char c;
    while (1) {
        
        cout << "Выберите режим:" << endl << "1) Перимерт" << endl << "2) Площадь" << endl << "3) Длина диагонали" << endl;
        cin >> chodelat;

        switch (chodelat)
        {
        case 1: {
            double dlina, sirina;
        cout << "Введите длину и ширину для расчета периметра:";
        cin >> dlina >> sirina;
            double per = (dlina + sirina)*2;
            cout << per << endl;
        break;
        }
        case 2:{
            double dlina, sirina;
            cout << "Введите длину и ширину для расчета площади:";
            cin >> dlina >> sirina;
            double pl = dlina * sirina;
            cout << pl << endl;
            break;
        }
        case 3:{
            double dlina, sirina;
            cout << "Введите длину и ширину для расчета длины диагонали:";
            cin >> dlina >> sirina;
            double diagonal = sqrt(dlina*dlina + sirina*sirina);
            cout << diagonal << endl;
            break;
        }
        default:
            return 0;
        }
    c = getchar();
    }
}