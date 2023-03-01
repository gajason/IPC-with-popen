#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>

int main()
{
	FILE *rd;
	char buffer[50];

	rd=popen("ls","r"); //pipe opened in reading mode

	fread(buffer, sizeof(char), 40, rd); //will read only 50 characters

	write(1, buffer, 40);

	printf("\n");
	pclose(rd);
}
