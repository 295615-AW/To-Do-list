#include <iostream>
#include <string>
#include <limits>
#include <vector>

void add();
void show();
void complete();
void delete_task();

struct Task {
    std::string text;
    bool completed;
};

std::vector<Task> tasks;

int main()
{
    int option;
    do {
        std::cout << "1 - Add a task\n"
                     "2 - Show tasks\n"
                     "3 - Mark a task as completed\n"
                     "4 - Delete a task\n"
                     "0 - Exit\n"
                     "Choose an option: ";
        std::cin >> option;
        std::cout << "\n";
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        switch (option) {
        case 1:
            add();
            break;
        case 2:
            show();
            break;
        case 3:
            complete();
            break;
        case 4:
            delete_task();
            break;
        default:
            std::cout << "Invalid option. Please try again\n\n";
        }
    } while (option != 0);
}

void add()
{
    std::string task;
    std::cout << "Enter a new task: ";
    std::getline(std::cin, task);
    tasks.push_back({ task, false });
    std::cout << "Task added\n\n";
}

void show()
{
    if (tasks.empty()) {
        std::cout << "The list is empty\n";
    }
    else {
        for (int i = 0; i < tasks.size(); i++) {
            if (tasks[i].completed) {
                std::cout << "[x] " << i + 1 << ". " << tasks[i].text << "\n";
            }
            else {
                std::cout << "[ ] " << i + 1 << ". " << tasks[i].text << "\n";
            }
        }
    }
    std::cout << "\n\n";
}

void complete()
{
    if (tasks.empty()) {
        std::cout << "The list is empty\n\n";
        return;
    }
    int number;
    std::cout << "Enter the task number to mark as completed: ";
    std::cin >> number;
    if (number <= (int)tasks.size() && number > 0) {
        tasks[number - 1].completed = true;
        std::cout << "Task marked as completed\n\n";
    }
    else {
        std::cout << "Task number " << number << " does not exist" << "\n";
    }
}

void delete_task()
{
    if (tasks.empty()) {
        std::cout << "The list is empty\n\n";
        return;
    }
    int number;
    std::cout << "Enter the task number to delete: ";
    std::cin >> number;
    if (number <= (int)tasks.size() && number > 0) {
        tasks.erase(tasks.begin() + number - 1);
        std::cout << "Task deleted\n\n";
    }
    else {
        std::cout << "Task number " << number << " does not exist" << "\n";
    }
}
