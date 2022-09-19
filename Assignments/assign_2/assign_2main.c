#include <stdio.h>
#include <stdlib.h>

#include "compare.h"
#include "fib.h"
#include "fact.h"
#include "rand.h"


#define INPUT_SIZE 100



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
	setvbuf(stdout, NULL, _IONBF, 0);
	setvbuf(stderr, NULL, _IONBF, 0);
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
			res = rondom();
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

