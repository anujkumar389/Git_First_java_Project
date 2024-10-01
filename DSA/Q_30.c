// Write a program to find the union and intersection of two sorted arrays?
// Input : Array1 = { 1, 2, 4, 5, 6 }, Array2 = { 2, 3, 5, 7 }
// Output : Union = { 1, 2, 3, 4, 5, 6, 7 }, Intersection = { 2, 5 }
#include <stdio.h>
int input(int size,int arr[])
{
    for (int i = 0; i < size; i++)
    {
        scanf("%d", &arr[i]);
    }
}
int main()
{
    int size1, size2;
    printf("Enter 1st and 2nd array size :");
    scanf("%d%d", &size1, &size2);
    int arr1[size1];
    int arr2[size2];
    printf("Enter 1st array element :\n");
    input(size1,arr1);
    printf("Enter 2nd array element :\n");
    input(size2,arr2);
    int count = 0;
  
    for (int i = 0; i < size1; i++)
    {
        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                count++;
            }
        }
    }
    int size3 = (size1 + size2) - count;
    int Union[size3];
    int interSection[count];
    for (int i = 0; i < size1; i++)
    {
        Union[i] = arr1[i];
    }
    for (int i = 0, k = 0, l = 0; i < size2; i++)
    {
        int check = 1;
        for (int j = 0; j < size1; j++)
        { 
            if (arr2[i] == arr1[j])
            {
                check = 0;
                // break;
            }
        }
        if (check == 1)
        {
            Union[size1 + k] = arr2[i];
            k++;
        }
        else
        {
            interSection[l] = arr2[i];
            l++;
        }
    }
    for(int i=0;i<size3;i++){
        for(int j=i+1;j<size3;j++){
            if(Union[i]>Union[j]){
                int temp=Union[i];
                Union[i]=Union[j];
                Union[j]=temp;
            }
        }
    }
    printf("UNION : ");
    for (int i = 0; i < size3; i++)
    {
        printf("%d, ", Union[i]);
    }
    printf("\n\n");
    printf("INTERSECTION : ");
    for (int i = 0; i < count; i++)
    {
        printf("%d, ", interSection[i]);
    }

    return 0;
}