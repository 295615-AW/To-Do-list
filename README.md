# To-Do List

*This is a console program written in C++ that lets you create and manage a To-Do list.*
   

### Features
 
- **Add a task** - allows the user to add a new task to the list
- **Show tasks** - prints all tasks on the screen
- **Mark a task as completed** - marks the chosen task as completed
- **Delete a task** - deletes the chosen task from the list
- **Exit** - ends the program

### Example / Demo

```
1 - Add a task
2 - Show tasks
3 - Mark a task as completed
4 - Delete a task
0 - Exit
Choose an option: 1

Enter a new task: clean the kitchen
Task added

1 - Add a task
2 - Show tasks
3 - Mark a task as completed
4 - Delete a task
0 - Exit
Choose an option: 1

Enter a new task: go shopping
Task added

1 - Add a task
2 - Show tasks
3 - Mark a task as completed
4 - Delete a task
0 - Exit
Choose an option: 3

Enter the task number to mark as completed: 1
Task marked as completed

1 - Add a task
2 - Show tasks
3 - Mark a task as completed
4 - Delete a task
0 - Exit
Choose an option: 2

[x] 1. clean the kitchen
[ ] 2. go shopping

1 - Add a task
2 - Show tasks
3 - Mark a task as completed
4 - Delete a task
0 - Exit
Choose an option: 4

Enter the task number to delete: 2
Task deleted

1 - Add a task
2 - Show tasks
3 - Mark a task as completed
4 - Delete a task
0 - Exit
Choose an option: 2

[x] 1. clean the kitchen
```

### Requirements

- C++ compiler - for example Visual Studio

### What I learned

- `vector` - creating vectors, `.push_back()`, `.empty()`, iterating over vectors using indexes
- `struct` - creating a new `struct` and using it in a `vector`
- `ignore` - to discard the leftover newline (`\n`) in the input buffer
- `getline()` - reading the whole line of text, including spaces

### Possible improvements / Known issues

- saving to a file
- input validation

### License

This project is licensed under the MIT License.
