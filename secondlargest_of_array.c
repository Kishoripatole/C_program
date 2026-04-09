// #include<stdio.h>
// int secondlargestnum(int arr[],int size)
// {
//     int i=0;
//     int min=arr[0];
//     for(i=1;i<size;i++)
//     {
//         if(min>arr[i])
//         {
//             min=arr[i];
//         }   
//     }
//     return min;
// }
// int main()
// {
    
//     int min=0;
//     int number[]={4,9,2,3,4,5,6,10};
//     min = secondlargestnum(number,8);
//     printf("Second largest number is=%d\n",min);
//     return 0;
// }






#include<stdio.h>

int secondlargestnum(int arr[], int size)
{
    int i;
    int largest, second;

    // Assume first two elements
    if(arr[0] > arr[1]) {
        largest = arr[0];
        second = arr[1];
    } else {
        largest = arr[1];
        second = arr[0];
    }

    for(i = 2; i < size; i++)
    {
        if(arr[i] > largest)
        {
            second = largest;
            largest = arr[i];
        }
        else if(arr[i] > second && arr[i] != largest)
        {
            second = arr[i];
        }
    }

    return second;
}

int main()
{
    int number[] = {4, 9, 2, 3, 4, 5, 6, 10};

    int result = secondlargestnum(number, 8);

    printf("Second largest number is = %d\n", result);

    return 0;
}