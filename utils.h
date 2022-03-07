#ifndef UTILS_H /* Include guard */
#define UTILS_H

//Function declarations
int power(int base, int exp);
int isLower(int ch);
int isUpper(int ch);
int isDigit(int ch);
int toLower(int ch);
int toUpper(int ch);
char *Strcpy(char* destination, char* source);
int Strlen(const char* string);
int Strcmp(const char* string_1, const char* string_2);
int Strcmpi(const char* string_1, const char* string_2);
int Strncmp(const char* string_1, const char* string_2, int cmp_till);
int Strncmpi(const char* string_1, const char* string_2, int cmp_till);
void Strcat(char* destination, const char* source);
void Strncat(char* destination, const char* source, int cat_till);
int Strncut(char* destination, char* source, int nCut); //something new shit i guess
int AtoI(const char* string);
float AtoF(const char* string);
void reverse(char* string);
void ItoA(int n, char* string);
void FtoA(float f, char* string, int aft_dec);
int binSearch_retIndex(int* sorted_data, int u_size, int element);
int binSearch_retStat(int* sorted_data, int u_size, int element);
int linear_search(char* data, int u_size, int element);
int linear_search_ret_ind(char* data, int u_size, int element);
int insert(char* string, int index, int element, int u_size, int t_size);
int delete(char* string, int index, int u_size);
void memreset(char* string, int u_size);

#endif

