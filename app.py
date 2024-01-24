from typing import List




nums: List[int] = list(map(lambda x: int(x)**3, input().split()))

print(min(nums), max(nums))


