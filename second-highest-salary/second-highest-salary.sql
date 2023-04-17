# Write your MySQL query statement below



select (SELECT DISTINCT(SALARY) FROM EMPLOYEE ORDER BY SALARY DESC  LIMIT 1 OFFSET 1) as SecondHighestSalary ;