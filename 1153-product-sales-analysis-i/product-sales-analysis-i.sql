# Write your MySQL query statement below
select Product.product_name, Sales.year, Sales.price 
FROM Sales 
INNER JOIN Product 
ON Sales.product_id = Product.Product_id;