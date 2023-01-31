
#include<stdio.h>
#include<string.h>
int main()
//int count_unique_char(char* str) {
{

    char s[100];
    scanf("%[^\n]%*c", s);
    //printf("%s",s);
	int hash[128] = { 0 };
	int i, c = 0;

	// reading each character of str[]
	for (i = 0; i < strlen(s); ++i) {
		// set the position corresponding
		// to the ASCII value of str[i] in hash[] to 1

		hash[s[i]] = 1;
		printf("%d", hash[s[i]] );
	}

	// counting number of unique characters
	// repeated elements are only counted once
	for (i = 0; i < 128; ++i) {

		c += hash[i];
	}

	return 0;

}
