# Write your MySQL query statement below
SELECT distinct p1.Email
FROM Person AS p1
INNER JOIN Person p2
ON p1.email = p2.email
WHERE p1.id <> p2.id
;
