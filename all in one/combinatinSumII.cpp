 class  solution  {
   public:
    void ToFindCombinationSum(int index ,int target = 0,  vector<vector< int>> &ans,vector<int>&arr, vector<int>&ds){
        //    base case...
        if ( target == 0){
           ans.push_back(ds);
             return;
        }
    //     for counting the unique elements... of the array....
     for ( int  i = index; i<arr.size();i++){
          if ( i>index && arr[i] = arr[i-1]) continue; /// this condition for the  rejecting the same types of elements to be carried....

           if (arr[i]> target)  break;
           ds.push_back(arr[i]);
           ToFindCombinationSum( index+1, target-arr[i], arr,ans, ads );
          ds.pop_back();
     }

    }

 public:
   
     vector<vector<int>> CombinationSum2( vector<int> &arr, int target){
         sort(arr.begin(),arr.end());f|
         vector<vector<int>> ans;
         vector<int> ds;
         
       ToFindCombinationSum(0, target, arr, ans,ds);
     }


 };
 