# Write your MySQL query statement below


UPDATE SALARY SET SEX = CHAR(ASCII('m')^ASCII('f')^ASCII(SEX));