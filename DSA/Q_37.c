// .Write a program to find the common elements in three sorted arrays?
// Input : Array1 = { 1, 5, 10, 20, 40, 80 }, Array2 = { 6, 7, 20, 80, 100 }, Array3 = { 3,
// 4,
// 15, 20, 30, 70, 80, 120 }
// Output : Common elements are 20 and 80
#include <stdio.h>
int main()
{
    int size1, size2, size3;
    printf("Enter size1\n");
    scanf("%d", &size1);
    printf("enter size2\n");
    scanf("%d", &size2);
    printf("enter size3\n");
    scanf("%d", &size3);
    int arr1[size1];
    int arr2[size2];
    int arr3[size3];
    printf("enter elements of array 1st :\n");
    for (int i = 0; i < size1; i++)
    {
        scanf("%d", &arr1[i]);
    }
    printf("enter elements of array 2nd :\n");
    for (int i = 0; i < size2; i++)
    {
        scanf("%d", &arr2[i]);
    }
    printf("enter elements of array 3rd :\n");
    for (int i = 0; i < size3; i++)
    {
        scanf("%d", &arr3[i]);
    }
    for (int i = 0; i < size1; i++)
    {
        int check = 0, check2 = 0;

        for (int j = 0; j < size2; j++)
        {
            if (arr1[i] == arr2[j])
            {
                check = 1;
                break;
            }
        }
        if(check==1){
        for (int k = 0; k < size3; k++)
        {
            if (arr1[i] == arr3[k])
            {
                if (arr1[i] == arr3[k])
                {
                    check2 = 1;
                }
            }
        }
        } b
        if (check == 1 && check2 == 1)
        {
            printf("%d is common element.\n", arr1[i]);
        }
    }
    return 0;
}