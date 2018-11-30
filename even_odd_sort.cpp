#include<iostream>
using namespace std;
	void accept(int *,int);
	void display(int *,int);
	void oddevensort(int *,int);
	void compare_elements(int *,int );
int main()
{

	int arrsize,c;
	cout<<"\n Enter the number of elements:";
    cin>>arrsize;
    int arr[arrsize];
	do
	{
		cout<<"\n\n\n enter your choice \n 1.Accept \n 2.Display \n 3.Odd even sort sort. \n 0.exit.";
		cin>>c;
		switch(c)
		{
			case 1:{

				accept(arr,arrsize);
				break;
				}
			case 2:{
				display(arr,arrsize);
				break;
				}
			case 3:{
				oddevensort(arr,arrsize);
				break;
				}

			 default:{
					cout<<"\n wrong input entered!!!";
					break;
				      }
		}
	    cout<<"\n___________________________________________________\n";
	}while(c!=0 && c<4 && c>0);
	return 0;
}

	void accept(int *arr,int arrsize)
	{
		for(int i=0;i<arrsize;i++)
        {
            cout<<"\n enter the element at position "<<i+1<<":";
            cin>>arr[i];
        }

	}

	void display(int *arr,int arrsize)
		{
			for(int i=0;i<arrsize;i++)
			{
				cout<<arr[i]<<" ";
			}
		}

void oddevensort(int *arr,int arrsize){
    int temp,to_be_inserted,j,i=0;
     int k;//if arraysize is odd we add one extra last pass in the for loop else

             if(arrsize%2==0)
            {
                k=0;
            }else
            {
                k=1;
            }
		for( i=0;i<arrsize/2+k;i++)
        {
             cout<<"before pass:"<<i+1<<"=>";
            display(arr,arrsize);
            for(int j=0;j<(arrsize/2)*2;)
            {
                compare_elements(arr,j);
                j=j+2;
            }
             cout<<"\n     Even pass:";
            display(arr,arrsize);


            for(int j=1;j<((arrsize/2)*2);)
            {
                compare_elements(arr,j);
                j=j+2;
            }
            cout<<"\n      odd pass:";
            display(arr,arrsize);
            cout<<"\n";
            cout<<"\n";
        }



}

void compare_elements(int *arr,int j){
    if(arr[j]>arr[j+1])
			{
			      int temp;
			      temp=arr[j];
			      arr[j]=arr[j+1];
			      arr[j+1]=temp;
			}
}

