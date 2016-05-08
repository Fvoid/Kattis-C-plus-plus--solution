#include <iostream>
#include <cstdlib>

void sortThis(int* treeDay, int length);
void merge_helper(int* input, int left, int right, int* scratch);
int mergesort(int* input, int size);
int max(int x, int y);

int main()
{
  using namespace std;
  
  int maxDay = -1;
  int dayCount = 0;
  int hold = 0;
  int index = 0;
  int numOfTree = 0;
  
  cin >> numOfTree;
  hold = numOfTree;

  int* treeDay;
  treeDay = new int[numOfTree];

  while(numOfTree--)
    {
      cin >> *(treeDay+index);
      index++;
    }
  int num = mergesort(treeDay, hold);

  maxDay = *treeDay + 1;
  for(int i = 1; i < hold; i++) { if(*(treeDay+i)+i+1 > maxDay)
    maxDay = *(treeDay+i)+i+1;
    }

  cout << maxDay+1 <<endl; return 0; } void sortThis(int* treeDay, int length) { int i, j, first, temp; for(i = length-1; i > 0; i--)
    {
      first = 0;
      for(j = 1;j <= i; j++)
    {
      if(*(treeDay+j) < *(treeDay+first))
        first = j;
    }
      temp = *(treeDay+first);
      *(treeDay+first) = *(treeDay+i);
      *(treeDay+i) = temp;
    }
}



void merge_helper(int *input, int left, int right, int *scratch)
{
    /* base case: one element */
    if(right == left + 1)
    {
        return;
    }
    else
    {
        int i = 0;
        int length = right - left;
        int midpoint_distance = length/2;
        /* l and r are to the positions in the left and right subarrays */
        int l = left, r = left + midpoint_distance;

        /* sort each subarray */
        merge_helper(input, left, left + midpoint_distance, scratch);
        merge_helper(input, left + midpoint_distance, right, scratch);

        /* merge the arrays together using scratch for temporary storage */ 
        for(i = 0; i < length; i++)
        {
            /* Check to see if any elements remain in the left array; if so,
             * we check if there are any elements left in the right array; if
             * so, we compare them.  Otherwise, we know that the merge must
             * use take the element from the left array */
            if(l < left + midpoint_distance && 
                    (r == right || max(input[l], input[r]) == input[l]))
            {
                scratch[i] = input[l];
                l++;
            }
            else
            {
                scratch[i] = input[r];
                r++;
            }
        }
        /* Copy the sorted subarray back to the input */
        for(i = left; i < right; i++) { input[i] = scratch[i - left]; } } } /* mergesort returns true on success. Note that in C++, you could also * replace malloc with new and if memory allocation fails, an exception will * be thrown. If we don't allocate a scratch array here, what happens? * * Elements are sorted in reverse order -- greatest to least */ int mergesort(int *input, int size) { int *scratch = (int *)malloc(size * sizeof(int)); if(scratch != NULL) { merge_helper(input, 0, size, scratch); free(scratch); return 1; } else { return 0; } } int max(int x, int y) { if(x > y)
    {
        return x;
    }
    else
    {
        return y;
    }
}