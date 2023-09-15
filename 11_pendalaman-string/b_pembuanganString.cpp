#include <stdio.h>
#include <string.h>

using namespace std;

void deleteCharAtIndex(char *str, int index) {
    int len = strlen(str);  // Find the length of the string
    
    if (index < 0 || index >= len) {
        // Check if the index is out of bounds
        printf("Index out of bounds\n");
        return;
    }

    // Shift characters to the left to overwrite the deleted character
    for (int i = index; i < len - 1; i++) {
        str[i] = str[i + 1];
    }

    // Null-terminate the string to reset its length
    str[len - 1] = '\0';
}

int main(){
	char s[101], t[101];
	int i,j, flag = 0, flag2 = 0;

	scanf("%s", s);
	scanf("%s", t);

	// printf("%s\n", s);

	//while (flag == 0) {
	//	flag2 = 0;
	//	for (i=strlen(s)-1; i>=0; i--) {
	//		if (s[i] == t[0]) {	
	//			for (j=1; j<strlen(t); j++) {
	//				if (s[i+j] != t[j]) {
	//					break;
	//				}

	//				if (j==strlen(t)-1) {
	//					for (int k =0; k<strlen(t); k++) {
	//						s[i+k] = 1;
	//					}
	//					flag2 = 1;
	//				}
	//			}
	//		}

	//		if (flag2 == 1) {
	//			printf("%s %d\n", s, (int)strlen(s));
	//			break;
	//		}

	//		if (i==0) {
	//			flag =1;
	//			break;
	//		}
	//	}
	//}
	
	i = strlen(s)-1;
	while (flag == 0) {
		flag2 = 0;	
			if (s[i] == t[0]) {	
				for (j=1; j<strlen(t); j++) {
					if (s[i+j] != t[j]) {
						break;
					}

					if (j==strlen(t)-1) {
						for (int k =0; k<strlen(t); k++) {
							deleteCharAtIndex(s, i);
						}
					}
				}
			}

			if (i==0) {
				flag =1;
			}
		i--;
	}

	printf("%s", s);

	//for (i=0; i<strlen(s); i++) {
	//	printf("[%d -> %c]\n", i, s[i]);
	//}

	return 0;
}
