 #include<iostream>
  using namespace std;

  void rotateArray(int arr[],int size,int shift)
  {
    int finalshift = shift%size;
    if(finalshift==0)
    {
        return;
    }

    // Step1 : copy last n elements into a temp array
    int temp[10000];
    int index =0;
    for(int i = size-finalshift;i<size;i++)
    {
        temp[index] = arr[i];
        index++;
        
    }

    //step2: shifting array by shift place
    for(int i = size-1;i>=0;i--)
  {
    if(i-finalshift >=0)
    {
        arr[i] = arr[i-finalshift];
    }
  }

  //step3: copy temp elements into original array
  for(int i =0;i<finalshift;i++)
  {
    arr[i] = temp[i];
  }
    
  }





  int main()
  {

    int arr[10]  ={10,20,30,40,50,60};
    int size = 6;
    int shift = 7;


     cout<<"Before shifting"<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }

    cout<<endl;
    rotateArray(arr,size,shift);

    cout<<"After shifting"<<endl;
    for(int i =0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }


    return 0;
  }