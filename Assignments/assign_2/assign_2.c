#include <stdio.h>
#include <stdlib.h>

#define INPUT_SIZE 100

int compare(char *str1);
int fib(int n);
unsigned int fact(unsigned int n);


char out_ex[4] = "exit";
char out_ra[4] = "rand";
char out_fa[4] = "fact";
char out_fi[4] = "fib";

int action_flag = 0;
int res;
int num;
int i;

int main()
{
    char talk[INPUT_SIZE];

    while (1) {
	printf("Speak! I'm Listening > ");


	fgets(talk, INPUT_SIZE, stdin);

	if (compare(talk) != 1) {
	    printf("You Said : %s", talk);
	} else if (action_flag == 1) {
	    printf("Good Bye :)");
	    printf("\n");
	    break;
	} else if (action_flag == 2) {
	    res = rand();
	    printf("%d", res);
	    printf("\n");
	} else if (action_flag == 3) {
	    printf("Enter a number: ");
	    scanf("%d", &num);
	    getchar();
	    res = fact(num);
	    printf("Result is: %d", res);
	    printf("\n");
	} else if (action_flag == 4) {
	    printf("Enter a number: ");
	    scanf("%d", &num);
	    getchar();
	    printf("The sequence is: ");
	    for (i = 0; i <= num; i++) {
		if (i <= num - 1)
		    printf("%d, ", fib(i));
		else if (i > num - 1)
		    printf("%d", fib(i));
	    }
	    printf("\n");
	}
    }
    return 0;
}

int compare(char *str1)
{
    int i;
    for (i = 0; i < 4; i++) {
	  action_flag = 0;
	  if (str1[4] == '\n' || str1[3] == '\n') {

	    if (out_ex[i] == str1[i]) {
		    action_flag = 1;
		    continue;
	    } 
      else if (out_ra[i] == str1[i]) {
		    action_flag = 2;
		    continue;
	    } 
      else if (out_fa[i] == str1[i]) {
		    action_flag = 3;
		    continue;
	    } 
      else if (out_fi[i] == str1[i]) {
		    action_flag = 4;
		      if (i == 2) {
		        if (str1[3] == '\n')
			        break;
		      }
		    continue;
	    } 
      else {
		    action_flag = 0;
		    return 0;
	    }
	  } 
    else {
	    action_flag = 0;
	    return 0;
	  }
    }
    if (str1[3] == 't') {
	    if (str1[2] == 'c')
	      action_flag = 3;
	    else if (str1[2] == 'i')
	      action_flag = 1;
    }
    return 1;
}

int fib(int n)
{
    int i;
    long back2 = 0, back1 = 1;	// last two values of f[n] 
    long next;			///placeholder for sum 
    if (n == 0)
	    return 0;

    for (i = 2; i < n; i++) {
	    next = back1 + back2;
	    back2 = back1;
	    back1 = next;
    }
    return back1 + back2;
}

unsigned int fact(unsigned int n)
{
    if (n == 0)
	    return 1;
  
    return n * fact(n - 1);
}
