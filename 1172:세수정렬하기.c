#include <stdio.h>

int main()
{
    int nums[3];
    
    scanf("%d %d %d",&nums[0], &nums[1], &nums[2]);
    for(int i=0;i<3;i++)
    {
        int min=i;
        for(int j=i+1;j<3;j++)
        {
            if(nums[min]>nums[j])
                min=j;
        }
        int im = nums[i];
        nums[i] = nums[min];
        nums[min] = im;
    }
    printf("%d %d %d",nums[0], nums[1], nums[2]);
    
    return 0;
}
