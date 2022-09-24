
int action_flag=0;

extern char out_ex[4] ;
extern char out_ra[4] ;
extern char out_fa[4] ;
extern char out_fi[4] ;


int compare(char *str1)
{
	int i;
	for (i = 0; i < 4; i++) {
		action_flag = 0;
		if (str1[4] == '\n' || str1[3] == '\n') {

			if (out_ex[i] == str1[i]) {
				action_flag = 1;
				continue;
			} else if (out_ra[i] == str1[i]) {
				action_flag = 2;
				continue;
			} else if (out_fa[i] == str1[i]) {
				action_flag = 3;
				continue;
			} else if (out_fi[i] == str1[i]) {
				action_flag = 4;
				if (i == 2) {
					if (str1[3] == '\n')
						break;
				}
				continue;
			} else {
				action_flag = 0;
				return 0;
			}
		} else {
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

