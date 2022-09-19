### Problem: <br>
- Extend your Femto Shell(assign.q) with the following three builtin commands:<br>
1- rand : this command will generate a random number and print it to the user. You can use the library routine rand()  (man 3 rand)<br>
2- fact: this command calculates the factorial of the number entered by the user.<br>
3- fib: this command will print the fibonacci sequence of the number entered by the user.<br>
- Implement a separate function for each command in a separate file (e.g. rand.c, fact.c, fib.c)<br>
- Create header files for these functions.<br>
- Compile these files and create a static library including them and then use this library in your program.<br>
- Compile these files and create a dynamic library including them and then use this library in your program.<br>
- What is fibonacci series? ask google  <br>

## To do that:

#### 1- FOR STATIC
= after copying my .o files into a folder "assign_2Static"<br>
a)&emsp;ar -rs lib"Library_Name".a ".o files"  (there are no " ")                                                               => it creats your library<br>
b)&emsp;ar -t libmy_static.a  => to see what your library consists of<br>
cd .. <br>
c)&emsp;gcc -o "static_exe_name" "main_.o_file" -l"Your_static_library_name_without_lib_word" -L."/library folder"   => to get the main static exe file <br>
d)&emsp;./my_static_exe                                                                                                   => to run the program<br>


#### 2- FOR DYNAMIC
= after copying my .c and .h files into a folder "assign_2Dynamic"<br>
a)&emsp;gcc -fPIC -c "your .c files"                                                                                        => makes your .o files shared<br>
b)&emsp;gcc -shared -o lib"library_name".so *.o                                                                              => creats your dynamic library<br>
cd .. <br>
c)&emsp;gcc -o my_dynamic_exe "main_.o_file" ./"library_folder"/"exact library name as you wrote with lib".so                                                             => to get the main dynamic exe file<br>
d)&emsp;./my_dynamic_exe                                                                                                => to run the program<br>
<br><br>


### Output Example

<img width="778" alt="Screenshot 2022-09-19 122353" src="https://user-images.githubusercontent.com/61296209/190997656-1a9277be-d9ca-4f59-a367-508b9e922e58.png">
<br><br>
### Difference in size between static and dynamic:

<img width="497" alt="Screenshot 2022-09-19 122737" src="https://user-images.githubusercontent.com/61296209/190998540-0cef5d10-f06d-4625-8009-af6e95126080.png">


