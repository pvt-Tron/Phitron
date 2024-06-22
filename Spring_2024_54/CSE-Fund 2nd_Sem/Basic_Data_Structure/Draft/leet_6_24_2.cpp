    //     int res1 = 0;
    //     int n = nums.size();
    //     int i = 0;
    //     vector<int>::iterator it;
    //     it = find(nums.begin(), nums.end(), 0);
    //     while(i < n){
    //         for(int j = 0; j < n; j++){
    //             if(nums[j] == 1) nums[j] == 0;
    //             else nums[j] == 1;
    //         }
    //         i++;
    //         if(it == nums.end()) break;
    //     }
        
    //     return i;
    //     int res1 = 0;
    //     int n = nums.size();
    //     int i = 0;
    //     int tris = 2;
    //     int rounds = 0;
    //     vector<int>::iterator it;
    //     while(it != nums.end()){
    //         if(tris){
    //         for(int j = 0; j < n; j++){
    //             if(nums[j] == nums[j + 1] && nums[j] == nums[j + 2]){
    //                 if(nums[i] == 1){
    //                     j+=2;
    //                     continue;
    //                 }
    //                 else{
    //                     nums[j] = 1;
    //                     nums[j + 1] = 1;
    //                     nums[j + 2] = 1;
    //                     res1++;
    //                     j+=2;
    //                 }
    //             }
    //             tris--;
    //         }
    //         if(nums[i] == nums[i + 1] && nums[i] == nums[i + 2]){
    //             if(nums[i] == 1) continue;
    //             else{
    //                 nums[i] = 1;
    //                 nums[i + 1] = 1;
    //                 nums[i + 2] = 1;
    //                 res1++;
    //             }
    //         }
    //         i++;
    //         if(i == n){
    //             rounds++;
    //             i = 0;
    //         }
    //         if(rounds == 1) break;
    //         }
    //     }
    //     return res1;
    // }