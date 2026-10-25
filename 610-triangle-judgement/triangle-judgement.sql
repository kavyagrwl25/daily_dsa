# Write your MySQL query statement below
Select x, y, z, Case When x+y>z AND x+z>y AND y+z>x Then "Yes" Else "No" END as triangle
From Triangle