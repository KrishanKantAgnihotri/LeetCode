# Write your MySQL query statement below


SELECT EMPLOYEE_ID AS employee_id, ( IF(((EMPLOYEE_ID%2=1) AND (NAME NOT LIKE 'M%')),
SALARY,0)) AS bonus FROM EMPLOYEES
ORDER BY EMPLOYEE_ID;