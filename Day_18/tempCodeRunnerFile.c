    scanf("%d",&num);
    low=0;
    high=n-1;
    while(low<=high)
    {
        mid=(low+high)/2;
        if(arr[mid]==num)
        {
            found=1;
            break;
        }
        else if(num>arr[mid])
        {
            low=mid+1;
        }
        else
        {
        high=mid-1;
        }
    }
    if(found==1)
    {
        printf("Element found at position = %d ",mid+1);