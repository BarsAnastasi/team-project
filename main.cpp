// Командный проект. Группа ПИ-51.
// Команда: Барсукова (в. 76, техлид), Волошенко (в. 5), Соколова (в. 77)

#include <iostream>

// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===

#include "barsukova.h"
#include "voloshenko.h"
#include "sokolova.h"

// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===

using namespace std;


int main() {
        int choice;
        double a, b, c, value;


        do {
                cout << "\n=== Командный проект: сборник расчётов ===\n";

		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===

		cout << "1. Тонны -> килограммы\n";
                cout << "2. Килограммы -> тонны\n";
                cout << "3. Тонны -> центнеры\n";
		cout << "4. Мили/ч -> км/ч;\n";
		cout << "5. Км/ч -> мили/ч;\n";
		cout << "6. Площадь треугольника\n";
                cout << "7. Периметр треугольника\n";

		// === КОНЕЦ БЛОКА МЕНЮ ===

                cout << "0. Выход\n";
                cout << "Выберите пункт: ";
                cin >> choice;

		// === КОНЕЦ БЛОКА МЕНЮ ===


                switch (choice) {

		// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===

		case 1:
			// Перевод тонн в килограммы: t * 1000
                        cout << "Введите массу в тоннах: ";
                        cin >> value;
                        if (value < 0) {
                                cout << "Ошибка: масса не может быть отрицательной.\n";
                                break;
                        }
                        cout << "Масса = " << tToKg(value) << " кг\n";
                        break;
                case 2:
			// Перевод килограммов в тонны: kg / 1000
                        cout << "Введите массу в килограммах: ";
                        cin >> value;
                        if (value < 0) {
                                cout << "Ошибка: масса не может быть отрицательной.\n";
                                break;
                        }
                        cout << "Масса = " << kgToT(value) << " т\n";
                        break;
                case 3:
			// Перевод тонн в центнеры: t * 10
                        cout << "Введите массу в тоннах: ";
                        cin >> value;
                        if (value < 0) {
                                cout << "Ошибка: масса не может быть отрицательной.\n";
                                break;
                        }
                        cout << "Масса = " << tToCwt(value) << " ц\n";
                        break;
		case 4:
			value = inputV();
			cout << value << " мили/ч -> " << mphToKmh(value) << " км/ч" << endl;
			break;
		case 5:
			value = inputV();
			cout << value << " км/ч -> " << kmhToMph(value) << " мили/ч" << endl;
			break;
        	case 6:
           		cout << "Введите стороны a, b, c: ";
            		cin >> a >> b >> c;
            		if (cin.fail()) {
            			cin.clear();
            			cin.ignore(10000, '\n');
            			cout << "Ошибка ввода! Введите числа.\n";
            			break;
            		}
            		if (a + b <= c || a + c <= b || b + c <= a) {
                		cout << "Ошибка: треугольник с такими сторонами не существует!\n";
                		break;
            		}
            		cout << "Площадь = " << triangleArea(a, b, c) << " кв. см\n";
            		break;
		case 7:
            		cout << "Введите стороны a, b, c: ";
            		cin >> a >> b >> c;
            		if (cin.fail()) {
            			cin.clear();
            			cin.ignore(10000, '\n');
            			cout << "Ошибка ввода! Введите числа.\n";
            			break;
            		}
            		if (a + b <= c || a + c <= b || b + c <= a) {
                		cout << "Ошибка: треугольник с такими сторонами не существует!\n";
                		break;
            		}
            		cout << "Периметр = " << trianglePerimeter(a, b, c) << " см\n";
            		break;

		// === КОНЕЦ БЛОКА ОБРАБОТКИ ===

		case 0:
			cout << "Работа завершена.\n";
			break;
		default:
			cout << "Такого пункта нет.\n";
		}
	} while (choice != 0);

	return 0;
}
