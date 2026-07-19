# Write your MySQL query statement below
SELECT s.user_id, 
round(avg(if(c.action = 'confirmed', 1, 0)),2) as confirmation_rate 
FROM Signups S
LEFT JOIN Confirmations c
ON S.user_id = c.user_id
GROUP BY S.user_id