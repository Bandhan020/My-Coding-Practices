#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[100],arr2[10],n,c,i,j,k,index=0,max=0,count;
    cout<<"How many elements??"<<endl;
    cin>>n;
    int r=n/2;
    for(i=0;i<n;i++){
        cin>>arr[i];
    }
    for(i=0;i<n;i++){
        count=0;
        arr2[i]=c;
        for(j=0;j<n;j++){
            if(arr[j]==arr[i]){
                count++;
            }
            if(count>max){
                max=count;
                index=i;
            }
        }

    }
    if(max>r){
            cout<<"Majority element is "<<arr[index]<<"    count= "<<max<<endl;
        }
        else{
            cout<<"No Majority Element"<<endl;
        }
    return 0;
}


/* GEEKS FOR GEEKS CODE
// C++ program to find Majority
// element in an array
#include <bits/stdc++.h>
using namespace std;

// Function to find Majority element
// in an array
void findMajority(int arr[], int n)
{
	int maxCount = 0;
	int index = -1; // sentinels
	for(int i = 0; i < n; i++)
	{
		int count = 0;
		for(int j = 0; j < n; j++)
		{
			if(arr[i] == arr[j])
			count++;
		}

		// update maxCount if count of
		// current element is greater
		if(count > maxCount)
		{
			maxCount = count;
			index = i;
		}
	}

	// if maxCount is greater than n/2
	// return the corresponding element
	if (maxCount > n/2)
	cout << arr[index] << endl;

	else
		cout << "No Majority Element" << endl;
}

// Driver code
int main()
{
	int arr[] = {1, 1, 2, 1, 3, 5, 1};
	int n = sizeof(arr) / sizeof(arr[0]);

	// Function calling
	findMajority(arr, n);

	return 0;
}




#MOOR's Voting Algorithm

#include<stdio.h>

// function to find the majority candidate in a array arr
int findMajorityCandidate(int arr[], int size)
{
    // maj_index - to keep a track of majority candidate
    int maj_index = 0, count = 1;
    int i;

    for(i = 1; i < size; i++)
    {
        // if the element is same as majority candidate
        // increment count
        if(arr[maj_index] == arr[i])
        {
            count++;
        }
        // else, decrease count
        else
        {
            count--;
        }

        // at any time if count becomes 0
        if(count == 0)
        {
            // change the majority cadidate
            maj_index = i;
            count = 1;
        }
    }

    // return the majority candidate
    return arr[maj_index];
}

// a function to print the majority element
void printMajorityElement(int arr[], int size)
{
    // find the majority element
    int candidate = findMajorityCandidate(arr,size);

    int i, count = 0;

    // count the number of occurrences
    for (i = 0; i < size; i++)
    {
        if(arr[i] == candidate)
            count++;
    }
    if (count > size/2)
        printf("Majority element = %d",candidate);
    else
        printf("No majority element found");
}

int main(void)
{
    int arr[] = {8, 16, 8, 4, 8, 8, 8, 42, 16, 15, 8, 23, 4, 8, 15, 8, 8};

    printMajorityElement(arr, 17);

    return 0;
}
*/
