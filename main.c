#include <stdio.h>
#include <stdlib.h>

int main()
{


    // how to use variables

    char fraza[] = "hello world";
    char characterName[] = "Rene";
    int characterAge = 35;
    printf("%s\n",fraza);
    printf("There once was a man named %s\n", characterName);
    printf("He was %d years old.\n", characterAge);

    characterAge = 23;

    // strings xelmeored ver agwer masivad ro gamoaq chars eg unikaluri ragacaa

    printf("He really liked name %s.\n",characterName);
    printf("But did not like being %d\n",characterAge);

    printf("my fav %s is %d","number",12);



    // working with numbers

    printf("%f\n",7.2*5.5);
    printf("%f",5/4);
    printf("%d",10/2);
    printf("%d",5+5);

   // int num = 6; es imito chavakomentare rom const qvevit ushlida
    //printf("%d",num);


    //ez math formula
    printf("%f",pow(4,3)); //akvadratebs

    printf("%f",sqrt(36)); // fesvi amoaq

    printf("%f",ceil(35.453)); //amrgvalebs mtel momdevno ricxvze anu 36

    printf("%f",floor(35.654)); //amrgvalebs qvevit ra anu 35

    //about constanta -const anu axla constit sheqmnil cvlads verasdros gadaawer rames

    const int num = 5;
    printf("%d",num);

    //Getting user input. with scanf es function aris ra rasac gadascem imas dagibrunebs
    //prosta pirdapir ar gaeshveba axla bevri ragac miweria zevit qveda 4 xazze vambob

    int age;
    printf("enter your age: ");
    scanf("%d",&age);  //scanf() momxmarebels sashualebas adzlevs monacemebi sheiyvanos programashi
    printf("your age is %d \n",age);





    return 0;
}
