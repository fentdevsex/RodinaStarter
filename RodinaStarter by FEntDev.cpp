#include <iostream>
#include <string>
#include <cstdlib>

int main() {
    std::string Nick_Name;

    setlocale(LC_ALL, "Russian");
    std::cout << "Введите никнейм с которого хотите произвести вход в игру: ";
    std::getline(std::cin, Nick_Name);

    std::string VO = "185.169.134.108"; // Восточный Округ
    std::string ZO = "80.66.71.85";    // Западный Округ
    std::string PO = "80.66.82.58";  // Приморский Округ
    std::string SO = "185.169.134.62"; // Северный Округ
    std::string CO = "185.169.134.163"; // Центральный Округ
    std::string YO = "185.169.134.60"; // Южный Округ

    int server_choice;

    std::cout << "Выберите сервер для игры:\n";
    std::cout << "1) Центральный Округ\n";
    std::cout << "2) Южный Округ\n";
    std::cout << "3) Северный Округ\n";
    std::cout << "4) Восточный Округ\n";
    std::cout << "5) Западный Округ\n";
    std::cout << "6) Приморский Округ\n";
    std::cout << "Введите номер сервера для запуска: ";
    std::cin >> server_choice;

    std::string command;
    switch (server_choice) {

    case 1:
        command = "gta_sa.exe -c -h " + CO + " -p 7777 -n " + Nick_Name + " -rodina -z -mem 4096 -ldo";
        std::cout << "\nВы успешно запускаетесь на Центральный Округ(ЦО), просьба не закрывать это окно при игре.\nВо избежании проблем рекомендуем выходить из игры командой /quit(/q)";
        break;
    case 2:
        command = "gta_sa.exe -c -h " + YO + " -p 7777 -n " + Nick_Name + " -rodina -z -mem 4096 -ldo";
        std::cout << "\nВы успешно запускаетесь на Южный Округ(ЮО), просьба не закрывать это окно при игре.\nВо избежании проблем рекомендуем выходить из игры командой /quit(/q)";
        break;
    case 3:
        command = "gta_sa.exe -c -h " + SO + " -p 7777 -n " + Nick_Name + " -rodina -z -mem 4096 -ldo";
        std::cout << "\nВы успешно запускаетесь на Северный Округ(СО), просьба не закрывать это окно при игре.\nВо избежании проблем рекомендуем выходить из игры командой /quit(/q)";
        break;
    case 4:
        command = "gta_sa.exe -c -h " + VO + " -p 7777 -n " + Nick_Name + " -rodina -z -mem 4096 -ldo";
        std::cout << "\nВы успешно запускаетесь на Восточный Округ(ВО), просьба не закрывать это окно при игре.\nВо избежании проблем рекомендуем выходить из игры командой /quit(/q)";
        break;
    case 5:
        command = "gta_sa.exe -c -h " + ZO + " -p 7777 -n " + Nick_Name + " -rodina -z -mem 4096 -ldo";
        std::cout << "\nВы успешно запускаетесь на Западный Округ(ЗО), просьба не закрывать это окно при игре.\nВо избежании проблем рекомендуем выходить из игры командой /quit(/q)";
        break;
    case 6:
        command = "gta_sa.exe -c -h " + PO + " -p 7777 -n " + Nick_Name + " -rodina -z -mem 4096 -ldo";
        std::cout << "\nВы успешно запускаетесь на Приморский Округ(ПО), просьба не закрывать это окно при игре.\nВо избежании проблем рекомендуем выходить из игры командой /quit(/q)";
        break;
    default:
        std::cout << "Неверный выбор сервера.\n";
        return 1;
    }

    std::system(command.c_str());

    return 0;
}
