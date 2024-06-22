// class Solution {
// public:
//     int minimumOperations(vector<int>& nums) {
//         int res1 = 0;
//         int n = nums.size();
//         for(int it = 0; it < n; it++){
//             if(nums[it]%3 == 0) continue;
//             else{
//                 int tmp1 = nums[it];
//                 int tmp2 = nums[it];
//                 while(tmp1%3 != 0 || tmp2%3 != 0){
//                     res1++;
//                     tmp1++;
//                     tmp2--;
//                     if(tmp1%3 == 0 || tmp2%3 == 0) break;
//                 }
//                 // if(tmp1%3 == 0) res1 += tmp1;
//                 // else if(tmp1%3 == 0) res1 += abs(tmp2);
//             }
//         }
//         return res1;
//     }
// };