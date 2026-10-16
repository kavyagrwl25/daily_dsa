# Write your MySQL query statement below
Select e.name, b.bonus
From Employee e
Left Join Bonus b
    On e.empId = b.empId
Where b.bonus < 1000
or b.bonus Is Null