# Write your MySQL query statement below
SELECT c.firstName, c.lastName, p.city, p.state
FROM Person c
LEFT JOIN Address p
ON c.PersonId=p.PersonId;