#include <stdio.h>
#include <string.h>
int main() {
    FILE *fout = fopen("e:/a.txt", "w");
    if (!fout) { printf("Cannot open file.\n"); return 1; }

    char cc[256];
    printf("Insert a text:\n");   fgets(cc, sizeof(cc), stdin);

    int n = strlen(cc);
    if (n > 0 && cc[n-1] == '\n') cc[n-1] = '\0'
}
    
#include <stdio.h>
#include <string.h>
int main() {
    FILE *fout = fopen("e:/a.txt", "w");
    if (!fout) { printf("Cannot open file.\n"); return 1; }

    char cc[256];
    printf("Insert a text:\n");   fgets(cc, sizeof(cc), stdin);

    int n = strlen(cc);
    if (n > 0 && cc[n-1] == '\n') cc[n-1] = '\0';

    for (int i = 0; i < n; i++)  cc[i] += i;

    fprintf(fout, "%s\n", cc);
    fclose(fout);
    printf(“Text is coded and saved to a.txt \n");
    return 0;
}';

    for (int i = 0; i < n; i++)  cc[i] += i;

    fprintf(fout, "%s\n", cc);
    fclose(fout);
    printf(“Text is coded and saved to a.txt \n");
    return 0;
}