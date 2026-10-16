# Write your MySQL query statement below
Select r.contest_id, Round(Count(r.user_id) * 100 / (Select Count(*) From Users), 2) As percentage
From Register r
Left Join Users u
    On u.user_id = r.user_id
Group By r.contest_id
Order By percentage DESC, r.contest_id