#define MAX_ALLOC 10
int str_len(char *str);

char *alloc(int n);
void afree(char *p);
void str_cpy(char *s, char *t);
int str_cmp(char *s, char *t);