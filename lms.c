#include <stdio.h>
#include <string.h>
#include <stdlib.h>
struct granthalaya
{ char title[100];
  char info[1000];
  char authorname[100];
  int pages,price;
  };
int main()
{ struct granthalaya lib[100];
    char kaviname[100], pustakname[100];
    int a=0,b=0,i=0;
    printf("Welcome to the Library\n");

    while (b!=5)
    {printf("1. Add book information\n");
     printf("2. display book information\n");
     printf("3.list the books of the given author\n");
     printf("4. list the number of books in the library\n");
     printf("5. exit\n");   
     printf("Enter which action you want to perform:\t");
     scanf("%d",&b);
     switch (b)
     {case 1:
        printf("Enter the book name:");
        scanf("%s",lib[i].title);

        printf("Enter the name of the author:");
        scanf("%s",lib[i].authorname);

        printf("Enter the number of pages:");
        scanf("%d",&lib[i].pages);

        printf("Enter the price of the Book:");
        scanf("%d",&lib[i].price);
        a++;
        break;

        case 2:
        printf("The book List:-\n");
        printf("\tTitle\tAuthor\tPages\tPrice\n");
        for (int i=0;i<a;i++)
        {printf("\t%s\t%s\t%d\t%d\n",lib[i].title,lib[i].authorname,lib[i].pages,lib[i].price);}
        break;

        case 3:
        printf("Enter the author's name:-");
        scanf("%s",kaviname);
        
        for(int i=0;i<a;i++)
        {if(strcmp(kaviname,lib[i].authorname)==0)
            {printf("%s %s %d %d\n",lib[i].title,lib[i].authorname,lib[i].pages,lib[i].price);}
        }
        break;
        
        case 4:
        printf("the number of books in the library:");
        printf(" %d\n",a);
        break;

        case 5:
        exit(0);}

        }
     
     
return 0;
    }
    
