#include <iostream>
#include <windows.h>
using namespace std;

void print_tasks(string tasks[], int task_count)
{
    cout << "TASKS TO DO :" << endl;
    cout << "--------------" << endl;
    for (int i = 0; i < task_count; i++)
    {
        cout << "Task " << i + 1 << ": " << tasks[i] << endl;
    }
    cout << "---------------" << endl;
}

int main()
{
    string tasks[10] = {""};
    // counter variable to know how many tasks we have
    int task_count = 0;

    int option = -1;
    while (option != 0)
    {
        // menu
        cout << "--- TO DO LIST ---" << endl;
        cout << "1 - TO ADD NEW TASK" << endl;
        cout << "2 - TO VIEW TASKS" << endl;
        cout << "3 - DELETE THE TASKS" << endl;
        cout << "0 - TERMINATE THE PROGRAM" << endl;
        cin >> option;

        switch (option)
        {
        case 1:
            if (task_count > 9)
            {
                cout << "TASK LIST IS FULL" << endl;
            }
            else
            {
                cout << "Enter a new task: ";
                cin.ignore();
                getline(cin, tasks[task_count]);
                task_count++;
            }
            break;

        case 2:
            print_tasks(tasks, task_count);
            break;

        case 3:
            cout << "Delete functionality not implemented yet." << endl;
            break;

        default:
            if (option != 0)
                cout << "Invalid option! Please choose again." << endl;
        }
    }
    return 0;
}