#include <iostream>
#include <vector>
#include <string>

using namespace std;

struct Task {
    string description;
    bool completed;
};

class ToDoList {
private:
    vector<Task> tasks; //dynamic memory allocation of array

public:
    void addTask(const string &description) {
        Task newTask = {description, false};
        tasks.push_back(newTask);
        cout << "\nTask added successfully..!" << endl;
    }

    void viewTasks() {
        cout << "\n********** To-Do List **********" << endl;
        for(size_t i = 0; i < tasks.size(); ++i) {
            cout << "\n";
            cout << i+1 << ". ";

            if(tasks[i].completed) {
                cout << "[x] ";
            }
            else{
                cout << "[ ] ";
            }
            cout << tasks[i].description << endl;
        }
    }

    void completeTask(size_t index) {
        if(index >= 0 && index < tasks.size()) {
            tasks[index].completed = true;
            cout << "\nTask marked as completed..!" << endl;
        } 
        else{
            cout << "\nInvalid task index..!" << endl;
        }
    }

    void deleteTask(size_t index) {
        if(index >= 0 && index < tasks.size()) {
            tasks.erase(tasks.begin() + index);
            cout << "\nTask deleted successfully..!" << endl;
        } 
        else{
            cout << "\nInvalid task index..!" << endl;
        }
    }
};

int main() {
    ToDoList myList;
    int choice;
    string taskDescription;
    size_t taskIndex;

    do{
        cout << "\n1. Add Task\n2. View Tasks\n3. Complete Task\n4. Delete Task\n5. Exit\n\nEnter your choice: ";
        cin >> choice;

        switch(choice) {
            case 1:
                cout << "\nEnter task description: ";
                cin.ignore();
                getline(cin, taskDescription);
                myList.addTask(taskDescription);
                break;

            case 2:
                myList.viewTasks();
                break;

            case 3:
                cout << "\nEnter the index of the task to mark as completed: ";
                cin >> taskIndex;
                myList.completeTask(taskIndex - 1); // Adjusting to 0-based indexing
                break;

            case 4:
                cout << "\nEnter the index of the task to delete: ";
                cin >> taskIndex;
                myList.deleteTask(taskIndex - 1); 
                break;

            case 5:
                cout << "\nExiting program..." << endl;
                break;

            default:
                cout << "\nInvalid choice. Please try again." << endl;
        }
    } while (choice != 5);

    return 0;
}
