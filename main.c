#include <stdio.h>
#include <stdlib.h>

int main()
{
/*
        int numbers[] = {1,2,1,5};



    size_t size = sizeof (numbers)/sizeof (int);

    int idf = 0;


    for (int i = 0;i<size;i++) {
        for (int j = i+ 1;j<size;j++) {
            if (numbers[i]== numbers[j]) {
            printf("dublicate");
            idf =1;
            break;
            }
        }
    }

if (idf == 0) {
printf("No dublicate");
}

*/


/*

int a = 3;
int b = 5;

int c = a;

a=b;
b=c;

printf("%d ",a);
printf("%d ",b);
*/


     int numbers[]= {1,4,3,6,2,8,9};

     size_t size = sizeof (numbers)/ sizeof (int);

     int idf = 0;

     for (int i = 0;i<size-1;i++) {
        idf = 0;
        for (int j = 0;j<size-1;j++) {

            if (numbers[j]>numbers[j+1]) {
            int c = numbers[j];
            numbers[j] = numbers [j + 1];
            numbers[j+1] = c;
            idf = 1;
            }

        }
       if (idf == 0) {
       break;
       }
     }

     for (int i = 0;i < size; i ++) {

     printf("%d ,",numbers[i]);
     }
*/




/*
  int numbers[] = {2,5,44,23};

  size_t size = sizeof (numbers)/sizeof (int);

  for (int i = 0;i<4;i++) {
  if (numbers[i]%2==0) {
    printf("%d",numbers[i]);
    }
  }

*/
/*
 int numbers[] = {54,87,69,2,4};

 size_t size = sizeof (numbers)/sizeof (int);

 for (int i = 0;i<5;i++) {
 if (numbers[i]%2==1){
printf("%d ,",numbers[i]);
 }
 }
*/

/*

  int numbers[] = {1,5,6,1};

  size_t size = sizeof (numbers)/sizeof (int);

  int idf = 0;

  for (int i =0;i<size;i++) {
    for (int j = i+1;j<size;j++) {

    if (numbers[i]==numbers[j])
    idf ++;

    }
  }

if (idf>0) {
printf("duplikat");
}
*/









    return 0;
}
