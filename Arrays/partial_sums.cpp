/*[7, -2, 3, 9, -11, 5, 1, -3]
   0   1  2   3   4  5   6  7

   If we want sum of like sum(3,6) = 9 -11 + 5 + 1 = 4

   Brute Force: just go to loop from start i(=3) to end j(=6)
   Time Complexity = O(number_of_queries*array_size)

   Other method is the use of partial sum -

   [7, 7-2, 7-2+3, 7-2+3+9, 7-2+3+9-11, 7-2+3+9-11+5, 7-2+3+9-11+5+1, 7-2+3+9-11+5+1-3]

   OR

   [7, 5, 8, 17, 6, 11, 12,9]
    0  1  2  3   4  5   6  7

    So if we want sum(2,6) = arr[6] - arr[1] = 7
    Time Complexity = O(number_of_queries)
*/

#include <iostream>
#include <fstream>
#define INPUT_FILE "input.txt"
#define OUTPUT_FILE "output.txt"

const int N = 1e5 + 5;
int main()
{
  //std::fstream myfile(INPUT_FILE, std::ios_base::in);
  //std::cout << "Input is taken from address.txt file:\n";
  std::ifstream myfile;
  myfile.open(INPUT_FILE);
  int val;

  int size; //std::cin>>size;
  int arr[N];
  int sum[N];
  /*for(int i = 0;i<size;i++)
  {
    std::cin>>arr[i];
    if(i == 0)
      sum[i] = arr[i];
    if(i > 0)
      sum[i] =sum[i] + sum[i-1]+ arr[i];

  }*/

  //
  myfile >> size;
  for(int i = 0;i<size;i++)
  {
    //std::cin>>arr[i];
    myfile >> arr[i];
    if(i == 0)
      sum[i] = arr[i];
    if(i > 0)
      sum[i] =sum[i] + sum[i-1]+ arr[i];

  }

  std::ofstream inFile;
  inFile.open(OUTPUT_FILE);

  //for (int i=0;i<size;i++) inFile<<sum[i]<<" ";
  //inFile<<"\n";

  //Make partial sum;
  //number_of_queries
  int q; //std::cin>>q;
  myfile >> q;
  while(q--)
  {
    int s,e; /// -> s - start, e - end
    //std::cin>>s>>e;
    myfile >> s;
    myfile >> e;
    if(s>0 and e<size)
      inFile<<sum[e] - sum[s-1];
    if (s == 0) inFile<<sum[e];
    inFile<<"\n";

  }
  myfile.close();
  inFile.close();
  return 0;
}
