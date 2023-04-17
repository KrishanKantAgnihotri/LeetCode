# Write your MySQL query statement below







SELECT MAX(SALARY) as SecondHighestSalary FROM employee where 
SALARY NOT IN  (SELECT MAX(SALARY) FROM EMPLOYEE  );