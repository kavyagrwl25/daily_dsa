# Write your MySQL query statement below
Select a.name, b.bonus
From Employee a
Left Join Bonus b
    On a.empId = b.empId
Where b.bonus Is Null
    Or b.bonus < 1000