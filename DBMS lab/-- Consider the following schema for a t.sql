-- Consider the following schema for a table named "customers":
-- Customers with cid, cname, caddress, city, PIN, country

-- Display details of customers country is India and city is Hyderabad
-- Display details of customers country is India or city is Hyderabad
-- Display details of customers country is not germany
-- Display details of customers country is germany and city is Hyderabad or Berlin
-- Display details of 1st 5 letters of country of customers
-- Write a query to display acending order of cid of customers
-- Write a query to display combination of customer city and country
-- Query to display length of all the cities in the table
-- Write a query that fethces unique value of country and print its length
-- Write a query to display city from customer table after replacing 'a' with 'A', if it exists
-- Write a query to display city from customer table after removing whitespaces from right side
-- Write a query to display the forst 3 rown of customer table
-- Display the details of customers with descending order of PIN and ascending order of customer city
-- Display the total number of customers who are from hyderabad
-- Write a query to display details of customers who have second maximum PIN

Create Table customers(
    cid int primary key,
    cname varchar(20),
    caddress varchar(20),
    city varchar(20),
    PIN int,
    country varchar(20)
);

insert into customers values(1,'John','Rajanagar','Hyderabad',5000,'India');
insert into customers values(2,'Johnny','Rajanagar','Hyderabad',5000,'Germany');
insert into customers values(3,'Jon','Rajanagar','Berlin',5000,'Germany');
insert into customers values(4,'Don','Rajanagar','Berlin',5000,'India');
insert into customers values(5,'Jony','Rajanagar','Venezuela',5000,'India');
insert into customers values(6,'Raja','Rajanagar','Hyderabad',5000,'India');

Select ("Display details of customers country is India and city is Hyderabad : ");
Select * from customers where country = 'India' and city = 'Hyderabad';
Select("");

Select("Display details of customers country is India or city is Hyderabad");
Select * from customers where country = 'India' or city = 'Hyderabad';
Select("");

Select("Display details of customers country is not germany");
Select * from customers where country != 'Germany';
Select("");

Select("Display details of customers country is germany and city is Hyderabad or Berlin");
Select * from customers where country = 'Germany' and city = 'Hyderabad' or city = 'Berlin';
Select("");

Select("Display details of 1st 5 letters of country of customers");
Select left(country,5) from customers;
Select("");

Select("Write a query to display acending order of cid of customers");
Select * from customers order by cid ASC;
Select("");

Select("Write a query to display combination of customer city and country");
Select concat(city,country) from customers;
Select("");

Select("Query to display length of all the cities in the table");
Select length(city) from customers;
Select("");

Select("Write a query that fethces unique value of country and print its length");
Select length(distinct country) from customers;
Select("");

Select("Write a query to display city from customer table after replacing 'a' with 'A', if it exists");
Select replace(city,'a','A') from customers;
Select("");

Select("Write a query to display city from customer table after removing whitespaces from right side");
Select rtrim(city) from customers;
Select("");
