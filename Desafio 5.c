#include <stdio.h>
#include <string.h>

void inverterString(char str[]) {
    int comprimento = strlen(str);  
    char invertida[comprimento + 1]; 
    
    for (int i = 0; i < comprimento; i++) {
        invertida[i] = str[comprimento - i - 1];  
    }

    invertida[comprimento] = '\0';  

    printf("String invertida: %s\n", invertida);
}

int main() {
    char stringOriginal[100];

    printf("Digite uma string: ");
    fgets(stringOriginal, sizeof(stringOriginal), stdin);  

    stringOriginal[strcspn(stringOriginal, "\n")] = '\0';

    inverterString(stringOriginal);

    return 0;
}
