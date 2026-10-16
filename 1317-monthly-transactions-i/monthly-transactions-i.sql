# Write your MySQL query statement below
Select DATE_FORMAT(trans_date, '%Y-%m') AS month, country, Count(*) as trans_count, Count(Case When state = 'approved'
 Then 1 END) as approved_count, Sum(amount) As trans_total_amount, Sum(Case When state = 'approved' Then amount Else 0 End) as approved_total_amount
  
From Transactions 
GROUP BY DATE_FORMAT(trans_date, '%Y-%m'), country;
