  class solution{  
     public:
       void  combinationSum ( int ind, vector<int>&arr,  int target ,vector<vector<int> > &ans, vector<int>ds ) {
          //  base case....
          if ( ind == arr.size() )
             {
              if(target == 0 ){
               ans.push_back(ds);
               return;                
               }
             }

            //   recursive function call....
            //  pickup  the numbers..
             if (arr[ind] <= target) {
              ds.push_back(arr[ind]);
              combinationSum(ind, target-arr[ind],arr ,ans,ds);
              ds.pop_back();
              
             }

            combinationSum(ind+1, target,arr,ans,ds);  
         

       }
      
    vector<vector<int>> combination ( vector<int> &candidates,  int target ){
          vector<vector<int>> ans;
          vector<int> ds;
           combinationSum( 0, target, candidates, ans, ds);
           return ans;

           
     }
       };


