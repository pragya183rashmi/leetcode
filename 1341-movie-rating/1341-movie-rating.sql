# Write your MySQL query statement below
(SELECT u.name AS results
FROM Users u
 JOIN  MovieRating m

ON u.user_id = m.user_id
GROUP BY u.user_id
 ORDER BY COUNT(rating) DESC, name
 LIMIT 1)

 
 UNION ALL


 (SELECT title AS results
FROM Movies mo
 JOIN  MovieRating m

ON mo.movie_id= m.movie_id
WHERE MONTH(created_at) ='02' AND YEAR(created_at)='2020'
GROUP BY title
ORDER BY AVG(rating) DESC, title
LIMIT 1)





