# Write your MySQL query statement below
SELECT id,movie,description,rating
FROM Cinema
WHERE description != "boring"
AND id %2 = 1 
GROUP BY id
ORDER BY rating DESC;