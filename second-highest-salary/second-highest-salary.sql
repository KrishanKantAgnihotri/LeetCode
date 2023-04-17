# Write your MySQL query statement below




# ADD ALIAS OF TABLE AS IT MAY SHOW ERROR 
# USE  MAX(SALARY) AS IT BY DEFAULT ADDED CORRECTION FOR SALARY null

WITH CTE AS
(SELECT SALARY,DENSE_RANK() OVER (ORDER BY SALARY DESC) AS RANK_DESC FROM EMPLOYEE)
SELECT MAX(SALARY) AS SecondHighestSalary FROM CTE WHERE RANK_DESC = 2;