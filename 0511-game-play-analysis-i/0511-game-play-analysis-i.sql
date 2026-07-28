# Write your MySQL query statement below
SELECT a.player_id,a.event_date AS first_login
FROM Activity a
WHERE a.event_date = (
    SELECT b.event_date
    FROM Activity b
    WHERE a.player_id = b.player_id
    ORDER BY b.event_date
    LIMIT 1
) 
GROUP BY player_id;