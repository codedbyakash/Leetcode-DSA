# Write your MySQL query statement below
SELECT t1.firstName,t1.lastName,t2.city,t2.state FROM  person t1
LEFT JOIN address t2 
ON t1.personId=t2.personId;
-- UNION
-- SELECT t1.firstName,t1.lastName,t2.addressId,t2.city,t2.state FROM  person t1
-- RIGHT JOIN address t2 
-- ON t1.personId=t2.personId;