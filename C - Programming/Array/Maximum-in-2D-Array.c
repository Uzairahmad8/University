#include <stdio.h>

int main(){
    
    int arr[3][3] ;
    
    
    printf("Enter Values for Array \n");
    
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            scanf(" %d ", &arr[i][j]);
        }
    }
    
      for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
            printf(" %d", arr[i][j]);
        }
        
        printf("\n");
    }
    
    int max = arr[0][0] ;
    
    for(int i = 0 ; i < 3 ; i++)
    {
        for(int j = 0 ; j < 3 ; j++)
        {
           if (max < arr[i][j])
                max = arr[i][j] ;
        }
    }
    
    printf("Maximum Number in the above Array = %d", max);
    
    
    return 0;
}
