# Write your MySQL query statement below
Select Max(num) as num
From MyNumbers
Where num In (Select num
    From MyNumbers
    Group By num
    Having Count(num) = 1)