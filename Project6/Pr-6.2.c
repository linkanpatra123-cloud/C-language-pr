#include <stdio.h>

int main() {
    char str[100];
    int freq[256] = {0};
    int i;

    printf("Enter any string: ");
    scanf("%s", str);

    for(i = 0; str[i] != '\0'; i++) {
        freq[str[i]]++;
    }

    printf("Frequency of each letter:\n");
    for(i = 0; i < 256; i++) {
        if(freq[i] != 0) {
            printf("%c => %d\n", i, freq[i]);
        }
    }

}

//Enter any string: devlopment
//Frequency of each letter:
//d => 1
//e => 2
//l => 1
//m => 1
//n => 1
//o => 1
//p => 1
//t => 1
//v => 1