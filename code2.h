#include <stdio.h>
//прототипы функций
int save_up(char[],int);
//функция2
void fill_array(char[],int,int);
//функция 3
void swap_places(char[],int, int);

int main()
{
  char number[50] = {0},
       number_end[50] = {0},
       change = 0;
   int base = 0,
       base2 = 0,
       number10 = 0,
       i,k,
       g = 0;


  printf("Enter number:");
  fgets(number,50,stdin);

  printf("Enter base:");
  scanf("%d",&base);

  //применяю функцию
  number10 = save_up(number,base);

  printf("Enter output base:");
  scanf("%d",&base2);

  //применяю функцию 2
  fill_array(number_end,number10,base2);

  i--;
  //применяю функцию 3
  swap_places(number_end,i,g);

  printf("%s\n",number_end);
  return 0;
}

int save_up(char number[],int base)
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
void fill_array(char number[],int num,int base)
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
void swap_places(char number[],int i, int g)
{
  char change = 0;
  for(i;i>g;i--,g++)
  {
    change = number[i];
    number[i] = number[g];
    number[g] = change;
  }
}

