# Write your MySQL query statement below
Select a.unique_id, e.name
From Employees e
Left join EmployeeUNI a
    ON a.id = e.id
