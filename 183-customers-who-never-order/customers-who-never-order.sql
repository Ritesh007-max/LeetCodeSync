# Write your MySQL query statement below
select name as Customers from Customers
left join orders 
on Orders.customerId = Customers.id
where Orders.customerId is null