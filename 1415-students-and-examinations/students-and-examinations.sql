# Write your MySQL query statement below
Select s.student_id, s.student_name, t.subject_name, Count(e.subject_name) As attended_exams
From Students s
Cross Join Subjects t
Left Join Examinations e
    On s.student_id = e.student_id
    AND t.subject_name = e.subject_name
Group By t.subject_name, s.student_name, s.student_id
Order By student_id, subject_name