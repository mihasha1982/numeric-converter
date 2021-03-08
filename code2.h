//программа переводит число из одной системы счисления в другую, систему счисления исходного и конечного числа пользователь выбирает сам
#include <stdio.h>
//прототипы функций обязательно должны быть до главной функции main
int convert_array_called_number_to_decimal_number(char[],int);
void convert_variable_called_number10_and_put_array_number_end(char[],int,int);
void swap_values_in_number_end_so_that_last_one_becomes_the_first_one_and_so_on(char[]);

int main()
{
  char number[50] = {0},
       number_end[50] = {0},
       change = 0;
   int base = 0,
       base2 = 0,
       number10 = 0;


  printf("Enter number:");
  fgets(number,50,stdin);

  printf("Enter base:");
  scanf("%d",&base);

  //применяю функцию
  number10 = convert_array_called_number_to_decimal_number(number,base);

  printf("Enter output base:");
  scanf("%d",&base2);

  //применяю функцию 2
  convert_variable_called_number10_and_put_array_number_end(number_end,number10,base2);

  //применяю функцию 3
  swap_values_in_number_end_so_that_last_one_becomes_the_first_one_and_so_on(number_end);

  printf("%s\n",number_end);
  return 0;
}
int convert_array_called_number_to_decimal_number(char number[],int base)
{
  int num10 = 0;

  for(int i = 0; i < 50 && number[i]!='\n';i++)
     {
          num10 = (number[i]<'A')
          ?num10*base + number[i] - '0'
          :num10*base + number[i] - 'A' + 10;
     }

  return num10;
}
//функция2
void convert_variable_called_number10_and_put_array_number_end(char number[],int num,int base)
{
  for(int i = 0; i<50 && num!=0 ;i++)
     {
         number[i] = (num%base<10)
         ?num%base+'0'
         :num%base+'A'-10;
         num = num/base;
     }

}
//функция 3
void swap_values_in_number_end_so_that_last_one_becomes_the_first_one_and_so_on(char number[])
{
  char temp = 0;
  int i = -1,
      g = 0;
  while(number[i]!='\0')i++;
  for(i;i>g;i--,g++)
    {
         temp = number[i];
         number[i] = number[g];
         number[g] = temp;
    }
}
