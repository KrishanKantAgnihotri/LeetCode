# Write your MySQL query statement below

SELECT USER_ID as user_id, CONCAT(UPPER(SUBSTR(name,1,1)),lower(SUBSTR(name,2))) AS name from users order by user_id;