#include <stdio.h>
#include <stdlib.h>

int main()
{
   char* verb_1[15];//variable declaration
   char* name_of_a_plant_1[15];//variable declaration
   char* a_thing_that_exits_very_often[15];//variable declaration
   char* adjective_for_feelings[15];//variable declaration
   char* verb_2[15];//variable declaration
   char* any_noun_in_plural[15];//variable declaration
   char* name_of_a_plant_2[15];//variable declaration
   char* an_animal[15];//variable declaration
   char* verb_3[15];//variable declaration

   printf("enter verb\n");//displaying for enter input
   scanf("%s",&verb_1);

   printf("enter name of a plant\n");//displaying for enter input
   scanf("%s",&name_of_a_plant_1);//taking input

   printf("enter a thing that exits very often\n");//displaying for enter input
   scanf("%s",&a_thing_that_exits_very_often);//taking input


   printf("enter adjective for feelings\n");//displaying for enter input
   scanf("%s",&adjective_for_feelings);//taking input


   printf("enter verb\n");//displaying for enter input
   scanf("%s",&verb_2);//taking input


   printf("enter any noun in plural\n");//displaying for enter input
   scanf("%s",&any_noun_in_plural);//taking input


   printf("enter name of a plant\n ");//displaying for enter input
   scanf("%s",&name_of_a_plant_2);//taking input


   printf("enter an animal\n");//displaying for enter input
   scanf("%s",&an_animal);//taking input


   printf("enter verb\n");//displaying for enter input
   scanf("%s",&verb_3);//taking input


						//dispaying final story with inputs
   printf("\"If some one %s a %s of which just one example exists among all the millions and millions of %s, that\'s enough to make him %s when he %s at the %s. He tells himself, \"My %s is up there somewhere. . . .\" But if the %s %s the flower, then for him it\'s as if, suddenly, all the stars went out. And that isn\'t important?\"",verb_1,name_of_a_plant_1,a_thing_that_exits_very_often,adjective_for_feelings,verb_2,any_noun_in_plural,name_of_a_plant_2,an_animal,verb_3);
getchar();
    return 0;
}
