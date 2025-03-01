#include <iostream>
#include <string>
#include <unistd.h>  // Добавлено для usleep

using namespace std;

// Функция для вывода текста с задержкой
void printWithDelay(const string& text, int delay = 50) {
    for (char ch : text) {
        cout << ch << flush;
        usleep(delay * 1000);  // Задержка в микросекундах
    }
    cout << endl;
}

// Начальная сцена
void startGame() {
    printWithDelay("Вы просыпаетесь в густом лесу. Вокруг тишина, только ветер шелестит листьями.");
    printWithDelay("Вы видите два пути:");
    printWithDelay("1. Пойти налево, где слышен шум воды.");
    printWithDelay("2. Пойти направо, где виднеется свет.");

    int choice;
    cin >> choice;

    if (choice == 1) {
        printWithDelay("Вы идете налево и находите реку. Вода чистая и прохладная.");
        printWithDelay("1. Напиться воды.");
        printWithDelay("2. Пройти вдоль реки.");

        cin >> choice;
        if (choice == 1) {
            printWithDelay("Вы напились воды и почувствовали себя лучше.");
            printWithDelay("Вы продолжаете путь и находите выход из леса. Поздравляем, вы спасены!");
        } else {
            printWithDelay("Вы идете вдоль реки и встречаете дикого зверя. К сожалению, игра окончена.");
        }
    } else if (choice == 2) {
        printWithDelay("Вы идете направо и видите костер. Рядом сидит старик.");
        printWithDelay("1. Поговорить со стариком.");
        printWithDelay("2. Пройти мимо.");

        cin >> choice;
        if (choice == 1) {
            printWithDelay("Старик рассказывает вам о тайном пути через горы.");
            printWithDelay("Вы следуете его совету и находите дорогу домой. Поздравляем, вы спасены!");
        } else {
            printWithDelay("Вы решаете пройти мимо и заблудились в лесу. Игра окончена.");
        }
    } else {
        printWithDelay("Неверный выбор. Попробуйте еще раз.");
        startGame();
    }
}

int main() {
    printWithDelay("Добро пожаловать в текстовый квест 'Затерянный в лесу'!");
    startGame();
    return 0;
}
