# Write your MySQL query statement below
Select e1.employee_id, e1.name, Count(e2.employee_id) as reports_count, Round(AVG(e2.age)) as average_age
From Employees e1
Join Employees e2
On e1.employee_id = e2.reports_to
Group By e1.employee_id
/* Having e2.reports_to > 0 */
Order By e1.employee_id