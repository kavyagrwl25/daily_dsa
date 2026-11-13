SELECT e2.name
FROM Employee e1
JOIN Employee e2
    ON e1.managerId = e2.id
Group By e2.name, e1.managerId
Having Count(*) >= 5 
/* GROUP BY e1.id, e1.name
HAVING COUNT(e2.id) >= 5; */