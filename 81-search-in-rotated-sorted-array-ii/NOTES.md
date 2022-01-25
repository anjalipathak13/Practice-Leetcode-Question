if(nums[l] <= nums[mid])               // left is sorted
{
if(nums[l] <= target and target < nums[mid])
h = mid - 1;
else
l = mid + 1;
}
else                                   // right is sorted
{
if(nums[mid] < target and target <= nums[h])
l = mid + 1;
else
h = mid - 1;
}
}
return false;
}