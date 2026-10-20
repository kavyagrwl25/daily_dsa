# Write your MySQL query statement below
Select activity_date As day, Count(Distinct user_id) As active_users
From Activity
Where activity_date >= '2019-06-28' AND activity_date <= '2019-07-27'
Group By activity_date