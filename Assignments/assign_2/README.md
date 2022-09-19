Problem: 
- Extend your Femto Shell with the following three builtin commands:
1- rand : this command will generate a random number and print it to the user. You can use the library routine rand()  (man 3 rand)
2- fact: this command calculates the factorial of the number entered by the user.
3- fib: this command will print the fibonacci sequence of the number entered by the user.
- Implement a separate function for each command in a separate file (e.g. rand.c, fact.c, fib.c)
- Create header files for these functions.
- Compile these files and create a static library including them and then use this library in your program.
- Compile these files and create a dynamic library including them and then use this library in your program.
- What is fibonacci series? ask google  

To do that:

1- FOR STATIC
= after copying my .o files into a folder "assign_2Static"
ar -rs lib"Library_Name".a ".o files"  (there are no " ")                                                               => it creats your library
ar -t libmy_static.a  => to see what your library consists of
gcc -o "static_exe_name" "Your_main_.o_file" -l"Your_static_library_name_without_lib_word" -L."/folder to put your exe file"   => to get the main static exe file 
./my_static_exe                                                                                                   => to run the program


2- FOR DYNAMIC
= after copying my .c and .h files into a folder "assign_2Dynamic"
gcc -fPIC -c "your .c files"                                                                                        => makes your .o files shared
gcc -shared -o lib"library_name".so *.o                                                                              => creats your dynamic library
gcc -o my_dynamic_exe assign_2main.o ./libmy_dynamic.so                                                             => to get the main dynamic exe file
./my_dynamic_exe                                                                                                => to run the program








