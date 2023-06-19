if(last == nums[i+1]) {
               last = nums[i];
               }else {
                  nums.erase(nums.begin() + i);
               }