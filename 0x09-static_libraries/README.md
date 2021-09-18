**#0x08-static_libraries How and why to create static libraries.**

**New commands / functions used:**
**gcc -c *.c, ar -rc liball.a *.o, gcc main.c -L. -lall, ranlib, nm**

**Helpful Links**

**What is a C Library?**

**Creating a Static Library**

**Using a Library in a program**

**Static and Dynamic Linking**

**Files to Find, Libraries to Compile - My blog post on medium about Bash commands to find source code scattered across a file system and compile them into a library. Also as a PDF in this directory.**

**Description of Files**

**Task 0:**
**libholberton.a**
**A static library containing the following functions: ``` int _putchar(char c); int _islower(int c); int _isalpha(int c); int _abs(int n); int _isupper(int c); int _isdigit(int c); int _strlen(char *s); void _puts(char *s); char *_strcpy(char *dest, char *src); int _atoi(char *s); char *_strcat(char *dest, char *src); char *_strncat(char *dest, char *src, int n); char *_strncpy(char *dest, char *src, int n); int _strcmp(char *s1, char *s2); char *_memset(char *s, char b, unsigned int n); char *_memcpy(char *dest, char *src, unsigned int n); char *_strchr(char *s, char c); unsigned int _strspn(char *s, char *accept); char *_strpbrk(char *s, char *accept); char *_strstr(char *haystack, char *needle); ```**

**holberton.h**
**header file declaring the prototypes of the above functions.**

**Task 1:**
**create_static_lib.sh**
**Script that creates a static library called liball.a from all the .c files in the current directory.i**
