#include <stdio.h>

#define INPUT_SIZE   50                    // size of input array (talk)

int compare( char *str1,                   //compare string function prototype
		char *str2 );

int main(void)
{
	char out[]="exit";                      //the keyword to exit the program
	char talk[INPUT_SIZE];                  //input array

	while(1){
		printf("Speak! I'm Listening > "); 
		fgets(talk,INPUT_SIZE,stdin);         //getting array input from user using fgets to include spaces 

		if(compare(out,talk)!=1){             //if miss-match with "exit" keyword 
			printf("You Said : %s",talk);       //print the input string
		}
		else{                                 //if matching
			printf("Good Bye :)");          
			printf("\n");
			break;
		}
	}
	return 0;
}

int compare( char *str1,                 //a function to compare between 2 strings
		char *str2 )
{
	int i;
	for(i=0;i<4;i++){
		if(str1[i]==str2[i]){               //if character matches, continue
			continue;
		}
		else{                               //if miss-match return failure
			return 0;
		}
	}
	return 1;

}
