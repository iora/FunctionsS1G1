#include <stdio.h>
//#include <random.h>


/*	
*	Please define your functions after main().
*	You can import standard C / C++ libraries.
*	Recommended: add description of your code.
*/

int getSum(int myArray[]);
int getSumOfSquares(int myArray[]);
void printAsChars(int myArray[]);
double getAverage(int myArray[]);
int subtractAllValues(int myArray[]);
float invertAllValues(int myArray[] );
void printGroupMemberNames();

int main(void) {
	printGroupMemberNames();

	int row[500];
	for (int i = 0; i < 500; i++)
		row[i] = i;

	return 1;
}

int getSum(int myArray[],int n);
{
  int sum=0;
  for(int i=0;i<n;i++)
    sum+=myArray[i];
	return sum;
}

int getSumOfSquares(int myArray[],int n);
{
  int sum=0;
  for(int i=0;i<=n;i++){
    sum+=myArray[i]^2;
  }
	return sum;
}


double getAverage(int myArray[],int n);//updated by Srey Laut Chhom
{
	int sum=0;
	for(int i=0;i<n;i++)
	{
		sum+=myArray[i];
	}
	return sum/n;
}

void printAsChars(int myArray[],int n);
{

  for(int i=0;i<n;i++)
  {
    print("%c",myArray[i]);
  }
}
float invertAllValues(int myArray[],int n); //updated by Sreyteav Sry
{					// arrange the order of myarray
  int i,j;
  int arr[n];
  for( i=0 , j = n-1;i <n;i++,j--)
  {
    arr[i]=myArray[j];
  }
  for(int k=0;k<n;k++)
  {
    myArray[k]=arr[k];
  }
  return 0.0;
}
int subtractAllValues(int myArray[],int n);
{
  int sub=0;
  for(int i=0;i<n;i++)
  {
    sub-=myArray[i];
  }
	return sub;
}

void printGroupMemberNames() {
	printf("sreylaut Chhom\n ");
	printf("Lihuy Tang\n ");
	printf("Dane Saret\n ");
	printf("Sreyteav Sry\n");
	printf("Senghak Khat\n");
	printf("That's it!\n");
}

