# Write your MySQL query statement below
Select user_id, Count(follower_id) as followers_count
From Followers
Group By user_id
Order By user_id