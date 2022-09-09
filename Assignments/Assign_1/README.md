### Problem:  <br>
Write a shell in c language that echoes any command entered by the user. 
The shell will have only one built-in command "exit". If the user entered "exit", the shell will reply with "Good Bye" and terminate. <br/>

### Steps to run the program: ###
1- creat a c file for the program then copy and paste code in it.<br>
to do this: in your terminal write > vim file_name.c , then paste the code and finally save this file<br>

*** Compiling the program *** ⬇️⬇️<br>
write down these command lines one by one:<br>

2- gcc &nbsp; -E &nbsp; file_name.c &nbsp;   >  &nbsp; file_name.i  &nbsp; &emsp;&emsp;&emsp; //preprocessing step (for text replacement and removing comments) &nbsp;&nbsp;&nbsp;&nbsp;&emsp;&emsp;&emsp;&emsp;result: .i file<br>
3- gcc &nbsp; -S &nbsp; file_name.i           &nbsp;  &ensp;    &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;  &emsp; &emsp;&emsp;  //compiling step to get the program but in your machine assembly code. &nbsp;&nbsp;&emsp;&emsp;&emsp;result: .s file<br>
4- gcc &nbsp; -c &nbsp; file_name.s          &nbsp;  &ensp;  &emsp;&emsp;&emsp;&emsp;&emsp;&emsp;      &emsp;&emsp;&emsp;//assembling step to get the machine code (1s & 0s) &nbsp;&nbsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp;&emsp; result: .o file<br>
5- gcc &nbsp; file_name.o &nbsp; -o &nbsp; file_name_exe &nbsp; -lc     &emsp;  //linking step (dynamic linking) to link your file with any other included file. &emsp;&emsp;&emsp;result: .elf file<br>          
<br>
Now you are ready to go<br>
Just type: &emsp; ./file_name_exe<br>
<br>
<br>
Nice job!! you did it ;)
 
