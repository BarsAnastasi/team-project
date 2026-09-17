// Командный проект. Группа ПИ-51.
// Команда: Барсукова (в. 76, техлид), Волошенко (в. 5), Соколова (в. 77)

#include <iostream>

// === БЛОК ПОДКЛЮЧЕНИЙ: каждый участник добавляет свой заголовочный файл ===

#include "sokolova.h"
#include "barsukova.h"

// === КОНЕЦ БЛОКА ПОДКЛЮЧЕНИЙ ===

using namespace std;


int main() {
	int choice;
	double value;

	do {
		cout << "\n=== Командный проект: сборник расчётов ===\n";

		// === БЛОК МЕНЮ: каждый участник добавляет свои пункты ===

		cout << "1. Тонны -> килограммы\n";
                cout << "2. Килограммы -> тонны\n";
                cout << "3. Тонны -> центнеры\n";
		cout << "4. Конвертер скорости: мили/ч -> км/ч;\n";
		cout << "5. Конвертер скорости: км/ч -> мили/ч;\n";


		// === КОНЕЦ БЛОКА МЕНЮ ===

		cout << "0. Выход\n";
		cout << "Выберите пункт: ";
		cin >> choice;

		switch (choice) {
		// === БЛОК ОБРАБОТКИ: каждый участник добавляет свои case ===
		case 1:
                        cout << "Введите массу в тоннах: ";
                        cin >> value;
                        if (value < 0) {
                                cout << "Ошибка: масса не может быть отрицательной.\n";
                                break;
                        }
                        cout << "Масса = " << tToKg(value) << " кг\n";
                        break;
                case 2:
                        cout << "Введите массу в килограммах: ";
                        cin >> value;
                        if (value < 0) {
                                cout << "Ошибка: масса не может быть отрицательной.\n";
                                break;
                        }
                        cout << "Масса = " << kgToT(value) << " т\n";
                        break;
                case 3:
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
