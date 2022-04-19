// #include<Stdio.h>
// #define N 60
// void main()
// {
//     printf("%d\n\n",N);
// }


// lecture 1:

// Array


#include<stdio.h>
int main()
{
    int a[5],i;
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
        for(i=0;i<10;i++)
    {
        printf("\n\n%d\n",a[i]);
    }
}
// Lecture 2:

// // Type of operation perform on array:
// 1.)Traversal
// 2.)Insertion
// 3.)Deletion
// 4.)Searching
// 5.)Sorting



//1.)Traversal:


// meanes omlly seeing each elent once..

//   #program:
// I kow its program it is the printing by loop



//2.) #copying an array
/*
// Now the PROGRAM:


Coditions:a.)overflow the array is full or empty.
b.)upper bound checking having no this type so we have to take care for this.
c.)if {size>the size} of array than show overflow condition.


Situation with elements:===============
1.)Adding element at the beggining 
 2.)At end 
    3.)at any ith postion :





// for Ith insertion:
// program:

//tjis is snipit code:
if(postion<=0 || position>size+1)
{
    // then start tge code:
    for(i=size-1;i>=pos-1;i--)
    {
        
    }

//  this is the full code: inserting at specific postion:
 */




// #include<stdio.h>
// void main()
// {
//     int a[50],size,i,j=0,num,pos;
//     printf("Enter the size of an array:");
//     scanf("%d",&size);
//     printf("Enetr the elements of array");
//     for ( i = 0; i < size; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter data that which you want to insert");
//     scanf("%d",&num);
//     scanf("%d",&pos);
//     if(pos<=0 || pos>size+1)
// {
//   printf("The size is overflow.");
// }
// else
// {
//       for ( i = size-1; i < pos-1; i++)
//     {
//         a[size-j]=a[i];
//         j++;
//     }
//     a[pos-1]=num;
//     for ( i = 0; i < size; i++)
//     {
//         printf("%d\n",a[i]);
//     }
    
//  }

// }

 
 
 
// Adding at the begnining:===========

// #include<stdio.h>
// void main()
// {
//      int a[50],size,i,j=0,num,pos;
//     printf("Enter the size of an array:");
//     scanf("%d",&size);
//     printf("Enetr the elements of array");
//     for ( i = 0; i < size; i++)
//     {
//         scanf("%d",&a[i]);
//     }
//     printf("Enter data that which you want to insert at he begning");
//     scanf("%d",&num);
// {
//       for ( i = size-1; i < 0; i++)
//     {
//         a[size-j]=a[i];
//         j++;
//     }
//     a[0]=num;
//     for ( i = 0; i < size; i++)
//     {
//         printf("%d\n",a[i]);
//     }

// }


/*At the end of araay
You can do man*/



//lecture 3:
// deletion 


// deletion from ith position:
#include<stdio.h>
void main()
{

    int a[5],i,j,k,num;
    printf("ENter the element of the array:");
    for ( i = 0; i < 5; i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter the element that you want to delete:");
    scanf("%d",&num);
    for ( i = 0; i < 5; i++)
    {
        if(num==a[i])
        {
            a[i]=a[i+1];
            
        }
        printf("%d\n",a[i]);
    
    }


}








