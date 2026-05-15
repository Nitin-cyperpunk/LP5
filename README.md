# LP5

## How to run C++ in Ubuntu

1. Open the terminal.
2. Change to the Desktop folder:
   ```bash
   cd ~/Desktop
   ```
3. Create a folder named `practical` and go into it:
   ```bash
   mkdir practical
   cd practical
   ```
4. Create the source file:
   ```bash
   touch main.cpp
   ```
5. Open the file in Vim:
   ```bash
   vim main.cpp
   ```
6. Press `i` to enter insert mode, type your C++ code, then press `Esc`.
7. Save and quit Vim with:
   ```vim
   :wq
   ```
8. Compile the code:
   ```bash
   g++ main.cpp
   ```
   - If your code uses OpenMP, compile with:
     ```bash
     g++ main.cpp -fopenmp
     ```
9. List files to confirm `main.cpp` and `a.out` exist:
   ```bash
   ls
   ```
10. Run the compiled program:
   ```bash
   ./a.out
   ```

You will see the program output in the terminal.
