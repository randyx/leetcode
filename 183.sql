# Write your MySQL query statement below
select Name from Customers a left join Orders b on a.Id=b.CustomerId where b.Id is NULL;