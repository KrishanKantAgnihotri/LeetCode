# Please write a DELETE statement and DO NOT write a SELECT statement.
# Write your MySQL query statement below


DELETE A FROM PERSON A JOIN PERSON B WHERE A.EMAIL = B.EMAIL AND A.ID>B.ID;