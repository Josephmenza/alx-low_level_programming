#ifndef DOG_H
#define DOG_H

/**
 * struct dog - structure definition of a dog
 * @name: character string
 * @age: integer
 * @owner: character string
 */
struct dog
{
 char *name;
 float *age;
 char *owner;
}
int main(void)
{
struct dog my_dog;
my_dog.name="jacky";
my_dog.age=9;	
myy_dog.owner="belete";
return(0);
}
