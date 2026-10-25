# Write your MySQL query statement below
Select employee_id, department_id
From Employee
Where employee_id IN (
    Select employee_id
    From Employee
    Group By employee_id
    Having Count(department_id) = 1
) OR primary_flag = "Y"