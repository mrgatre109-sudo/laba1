# Консольные приложения для геометрических расчетов

Данный репозиторий содержит два консольных приложения на языке C++, предназначенных для расчета геометрических параметров трапеции и прямоугольника. Проект выполнен в рамках изучения систем контроля версий (Git) и хостинга репозиториев (GitHub).

---

## 1. Проект: Вычисление параметров трапеции

Программа позволяет пользователю выбрать режим расчета и выполнить одно из следующих действий:

- **Периметр** – расчет по четырем сторонам трапеции.
- **Площадь** – расчет по высоте и двум основаниям.
- **Длина средней линии** – расчет по двум основаниям.

Программа работает в цикле, предоставляя возможность многократного выбора без перезапуска.

### Листинг программы (`trapezoid.cpp`)

```cpp
#include <iostream>
#include <locale.h>
using namespace std;

int main() {
  int choice; char c;
  setlocale(LC_ALL, "");
  while (1){
    cout << "Выберите, что вы хотите найти у трапеции:" << endl << "1.Периметр" << endl << "2.Площадь" << endl << "3.Длина средней линии" << endl;
    cin >> choice;
    switch (choice) {
    case 1: {
      double side1, side2, side3, side4;
      cout << "Введите длины четырёх сторон трапеции:" << endl;
      cin >> side1 >> side2 >> side3 >> side4;
      double perimetr = side1 + side2 + side3 + side4;
      cout << perimetr << endl;
      break;
    }
    case 2: {
      double hieght, base1, base2;
      cout << "Введите высоту и основания трапеции:" << endl;
      cin >> hieght >> base1 >> base2;
      double area = (hieght * (base1 + base2)) / 2;
      cout << area << endl;
      break;
    }
    case 3: {
      double base1, base2;
      cout << "Введите основания трапеции:" << endl;
      cin >> base1 >> base2;
      double middle = (base1 + base2) / 2;
      cout << middle << endl;
      break;
    }
    default: return 0;
    }
    c = getchar();
  }
}
```

# Консольное приложение для расчета параметров прямоугольника

Данное консольное приложение на языке C++ предназначено для вычисления геометрических параметров прямоугольника. Проект выполнен в рамках изучения систем контроля версий (Git) и хостинга репозиториев (GitHub).

## Функциональные возможности

Программа позволяет пользователю выбрать режим расчета и выполнить одно из следующих действий:

- **Периметр** – расчет по формуле \( P = 2 \cdot (a + b) \), где \(a\) – длина, \(b\) – ширина.
- **Площадь** – расчет по формуле \( S = a \cdot b \).
- **Длина диагонали** – расчет по формуле \( d = \sqrt{a^2 + b^2} \).

Программа работает в цикле, предоставляя возможность многократного выбора без перезапуска. Для выхода достаточно выбрать пункт меню, не соответствующий доступным (например, ввести `4`).

## Листинг программы (`rectangle.cpp`)

```cpp
#include <iostream>
#include <clocale>
#include <math.h>

using namespace std;

int main(){
   setlocale(LC_ALL, "Russian");

    int chodelat; char c;
    while (1) {
        
        cout << "Выберите режим:" << endl << "1) Периметр" << endl << "2) Площадь" << endl << "3) Длина диагонали" << endl;
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
