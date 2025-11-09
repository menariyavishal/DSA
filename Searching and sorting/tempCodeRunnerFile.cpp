void lastOccurance(int arr[],int n, int target , int &ansIndex)
{
    int s = 0;
    int e = n-1;

    int mid = s +(e-s)/2;

    while(s<=e)
    {
        if(arr[mid] == target)
        {
            // ans mil gya
            ansIndex = mid;

            // Store and compute strategy lagyi h
            // right me jao
            s = mid + 1;

        }
        if(target > arr[mid])
        {
            // right me jao
            s = mid + 1;
        }
        
        if(target < arr[mid])
        {
            // left me jao
            e = mid - 1;

        }

        // ye wali baat me hamesha bhul jata hu
        mid = s + (e-s)/2;
    }

}