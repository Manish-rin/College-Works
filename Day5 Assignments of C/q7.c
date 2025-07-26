//check wether the letter is vowel or consonants
#include <stdio.h>
int main()
{
    char letter;
    printf("Enter a letter: ");
    scanf("%c",&letter);
    if (letter=='a' || letter=='e' || letter=='i' || letter=='o' || letter=='u'||letter=='A' || letter=='E' || letter=='I' || letter=='O' || letter=='U')printf("The letter %c is a vowel",letter);
    else
    printf("The letter %c is a consonant",letter);
    return 0;
}
