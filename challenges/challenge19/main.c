#include <stdio.h>
#include <stdlib.h>

struct item
{
  char *itemName;
  int quantity;
  float price;
  float amount; // quantity*price
};

void readItem(struct item *i);
void printItem(struct item *i);

int main(int argc, char const *argv[])
{
  struct item itm;
  struct item *pItem;
  pItem = &itm;

  pItem->itemName = (char *)malloc(sizeof(char) * 30);

  readItem(pItem);
  printItem(pItem);

  return 0;
}

void readItem(struct item *i)
{
  printf("please enter item name\n");
  scanf("%s", i->itemName);
  printf("please enter quantity\n");
  scanf("%d", &i->quantity);
  printf("please enter price\n");
  scanf("%f", &i->price);
  i->amount = i->price * i->quantity;
};

void printItem(struct item *i)
{
  printf("item name: %s\n", i->itemName);
  printf("quantity: %d\n", i->quantity);
  printf("price: %f\n", i->price);
  printf("amount: %f\n", i->amount);
};
