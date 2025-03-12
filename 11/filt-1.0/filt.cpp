#include <iostream>
#include <string>
#include <unistd.h>  // Для usleep

using namespace std;

// Функция для вывода текста с задержкой
void printWithDelay(const string& text, int delay = 50) {
    for (char ch : text) {
        cout << ch << flush;
        usleep(delay * 1000);  // Задержка в микросекундах
    }
    cout << endl;
}

// Сцена у реки
void riverScene() {
    printWithDelay("Вы идете налево и находите реку. Вода чистая и прохладная.");
    printWithDelay("1. Напиться воды.");
    printWithDelay("2. Пройти вдоль реки.");
    printWithDelay("3. Попытаться переплыть реку.");

    int choice;
    cin >> choice;

    if (choice == 1) {
        printWithDelay("Вы напились воды и почувствовали себя лучше.");
        printWithDelay("Вы продолжаете путь и находите выход из леса. Поздравляем, вы спасены!");
    } else if (choice == 2) {
        printWithDelay("Вы идете вдоль реки и встречаете дикого зверя.");
        printWithDelay("1. Попытаться спрятаться.");
        printWithDelay("2. Попытаться отпугнуть зверя.");

        cin >> choice;
        if (choice == 1) {
            printWithDelay("Вы успешно спрятались и дождались, пока зверь уйдет.");
            printWithDelay("Вы продолжаете путь и находите выход из леса. Поздравляем, вы спасены!");
        } else {
            printWithDelay("Вы попытались отпугнуть зверя, но это не сработало. К сожалению, игра окончена.");
        }
    } else if (choice == 3) {
        printWithDelay("Вы пытаетесь переплыть реку, но течение слишком сильное.");
        printWithDelay("1. Плыть дальше.");
        printWithDelay("2. Вернуться на берег.");

        cin >> choice;
        if (choice == 1) {
            printWithDelay("Вы переплываете реку и находите тропинку, ведущую к деревне. Поздравляем, вы спасены!");
        } else {
            printWithDelay("Вы возвращаетесь на берег и продолжаете путь вдоль реки.");
            printWithDelay("Вскоре вы находите выход из леса. Поздравляем, вы спасены!");
        }
    } else {
        printWithDelay("Неверный выбор. Попробуйте еще раз.");
        riverScene();
    }
}

// Сцена у костра
void campfireScene() {
    printWithDelay("Вы идете направо и видите костер. Рядом сидит старик.");
    printWithDelay("1. Поговорить со стариком.");
    printWithDelay("2. Пройти мимо.");
    printWithDelay("3. Осмотреть костер.");

    int choice;
    cin >> choice;

    if (choice == 1) {
        printWithDelay("Старик рассказывает вам о тайном пути через горы.");
        printWithDelay("1. Следовать совету старика.");
        printWithDelay("2. Игнорировать совет и идти своим путем.");

        cin >> choice;
        if (choice == 1) {
            printWithDelay("Вы следуете совету старика и находите дорогу домой. Поздравляем, вы спасены!");
        } else {
            printWithDelay("Вы решаете идти своим путем и заблудились в лесу. Игра окончена.");
        }
    } else if (choice == 2) {
        printWithDelay("Вы решаете пройти мимо и заблудились в лесу. Игра окончена.");
    } else if (choice == 3) {
        printWithDelay("Вы осматриваете костер и находите карту.");
        printWithDelay("1. Использовать карту.");
        printWithDelay("2. Оставить карту и идти дальше.");

        cin >> choice;
        if (choice == 1) {
            printWithDelay("Вы используете карту и находите выход из леса. Поздравляем, вы спасены!");
        } else {
            printWithDelay("Вы оставляете карту и продолжаете путь, но вскоре теряетесь в лесу. Игра окончена.");
        }
    } else {
        printWithDelay("Неверный выбор. Попробуйте еще раз.");
        campfireScene();
    }
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
        riverScene();
    } else if (choice == 2) {
        campfireScene();
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
