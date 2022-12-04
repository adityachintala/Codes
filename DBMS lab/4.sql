-- > desc customers;
-- +--------------+-------------+------+-----+---------+-------+
-- | Field        | Type        | Null | Key | Default | Extra |
-- +--------------+-------------+------+-----+---------+-------+
-- | CustomerID   | varchar(5)  | NO   | PRI | NULL    |       |
-- | CompanyName  | varchar(40) | NO   |     | NULL    |       |
-- | ContactName  | varchar(30) | YES  |     | NULL    |       |
-- | ContactTitle | varchar(30) | YES  |     | NULL    |       |
-- | Address      | varchar(60) | YES  |     | NULL    |       |
-- | City         | varchar(15) | YES  |     | NULL    |       |
-- | Region       | varchar(15) | YES  |     | NULL    |       |
-- | PostalCode   | varchar(10) | YES  |     | NULL    |       |
-- | Country      | varchar(15) | YES  |     | NULL    |       |
-- | Phone        | varchar(24) | YES  |     | NULL    |       |
-- | Fax          | varchar(24) | YES  |     | NULL    |       |
-- +--------------+-------------+------+-----+---------+-------+

-- Sample data for Customers entity:
-- +------------+-------------+------------------+----------------------+------------------------------+------------+--------+------------+---------+----------------+----------------+
-- | CustomerID | CompanyName | ContactName      | ContactTitle         | Address                      | City       | Region | PostalCode | Country | Phone          | Fax            |
-- +------------+-------------+------------------+----------------------+------------------------------+------------+--------+------------+---------+----------------+----------------+
-- | 1001       | tcs         | maria            | sales representative | Obere Str. 57                | Berlin     | NULL   | 12209      | Germany | 030-0074321    | 030-0076545    |
-- | 1002       | wipro       | Ana              | Owner                | Avda. de la Constitucin 2222 | Mxico D.F. | NULL   | 05021      | Mexico  | (5) 555-4729   | (5) 555-3745   |
-- | 1003       | polaris     | Antonio          | Owner                | Mataderos  2312              | Mxico D.F. | NULL   | 05023      | Mexico  | (5) 555-3932   | (5) 565-3532   |
-- | 1004       | virtuasa    | Thomas Hardy     | Sales Representative | 120 Hanover Sq.              | London     | NULL   | WA1 1DP    | UK      | (171) 555-7788 | (171) 555-6750 |
-- | 1005       | genpact     | Frdrique Citeaux | Marketing Manager    | 24, place Klber              | Strasbourg | NULL   | 67000      | France  | 88.60.15.31    | 88.60.15.32    |
-- +------------+-------------+------------------+----------------------+------------------------------+------------+--------+------------+---------+----------------+----------------+

CREATE TABLE customers (
    CustomerID   varchar(5)  NOT NULL,
    CompanyName  varchar(40) NOT NULL,
    ContactName  varchar(30) Default NULL,
    ContactTitle varchar(30) Default NULL,
    Address      varchar(60) Default NULL,
    City         varchar(15) Default NULL,
    Region       varchar(15) Default NULL,
    PostalCode   varchar(10) Default NULL,
    Country      varchar(15) Default NULL,
    Phone        varchar(24) Default NULL,
    Fax          varchar(24) Default NULL,
    PRIMARY KEY (CustomerID)
);
INSERT INTO customers VALUES ('1001', 'tcs', 'maria', 'sales representative', 'Obere Str. 57', 'Berlin', NULL, '12209', 'Germany', '030-0074321', '030-0076545');
INSERT INTO customers VALUES ('1002', 'wipro', 'Ana', 'Owner', 'Avda. de la Constitucin 2222', 'Mxico D.F.', NULL, '05021', 'Mexico', '(5) 555-4729', '(5) 555-3745');
INSERT INTO customers VALUES ('1003', 'polaris', 'Antonio', 'Owner', 'Mataderos  2312', 'Mxico D.F.', NULL, '05023', 'Mexico', '(5) 555-3932', '(5) 565-3532');
INSERT INTO customers VALUES ('1004', 'virtuasa', 'Thomas Hardy', 'Sales Representative', '120 Hanover Sq.', 'London', NULL, 'WA1 1DP', 'UK', '(171) 555-7788', '(171) 555-6750');
INSERT INTO customers VALUES ('1005', 'genpact', 'Frdrique Citeaux', 'Marketing Manager', '24, place Klber', 'Strasbourg', NULL, '67000', 'France', '88.60.15.31', '88.60.15.32');
-- DESC customers;
-- SELECT * FROM customers;
-- select("");


-- desc employees;
-- +------------+-------------+------+-----+---------+----------------+
-- | Field      | Type        | Null | Key | Default | Extra          |
-- +------------+-------------+------+-----+---------+----------------+
-- | EmployeeID | int(11)     | NO   | PRI | NULL    | auto_increment |
-- | LastName   | varchar(20) | NO   |     | NULL    |                |
-- | FirstName  | varchar(10) | NO   |     | NULL    |                |
-- | JobTitle   | varchar(30) | YES  |     | NULL    |                |
-- | BirthDate  | datetime    | YES  |     | NULL    |                |
-- | HireDate   | datetime    | YES  |     | NULL    |                |
-- | Address    | varchar(60) | YES  |     | NULL    |                |
-- | City       | varchar(15) | YES  |     | NULL    |                |
-- | PostalCode | varchar(10) | YES  |     | NULL    |                |
-- | Country    | varchar(15) | YES  |     | NULL    |                |
-- | Phone      | varchar(24) | YES  |     | NULL    |                |
-- | ReportsTo  | int(11)     | YES  |     | NULL    |                |
-- | Salary     | float       | YES  |     | NULL    |                |
-- +------------+-------------+------+-----+---------+----------------+
-- Sample data for employees entity:
-- +------------+----------+-----------+----------------------+---------------------+---------------------+---------------------------+--------------+------------+---------+------------+-----------+--------+
-- | EmployeeID | LastName | FirstName | JobTitle             | BirthDate           | HireDate            | Address                   | City         | PostalCode | Country | Phone      | ReportsTo | Salary |
-- +------------+----------+-----------+----------------------+---------------------+---------------------+---------------------------+--------------+------------+---------+------------+-----------+--------+
-- |       5001 | rao      | krishna   | Sales Representative | 1948-12-08 00:00:00 | 1992-05-01 00:00:00 | 507 - 20th Ave. E.Apt. 2A | Seattle      | 98122      | USA     | 22255556   |      1234 |  30000 |
-- |       5002 | krishna  | ram       | Manager              | 1950-10-06 00:00:00 | 1995-06-02 00:00:00 | 307 - 15th Ave. E.Apt     | Hyderabad    | 500031     | India   | 9849789648 |      1315 |  35000 |
-- |       5003 | hare     | ram       | Accountant           | 1975-10-05 00:00:00 | 1997-09-01 00:00:00 | 107 Apt                   | Secunderabad | 500031     | India   | 9849755648 |      1415 |  45000 |
-- |       5004 | hare     | krishna   | Assistant Manager    | 1980-08-06 00:00:00 | 2002-10-05 00:00:00 | 407 Apt                   | Vijayawada   | 520031     | India   | 9888755648 |      2415 |  40000 |
-- |       5005 | murali   | mohan     |  Manager             | 1982-08-07 00:00:00 | 2007-06-01 00:00:00 | 237 Apt                   | Hyderabad    | 500031     | India   | 9888695648 |      2695 |  45000 |
-- +------------+----------+-----------+----------------------+---------------------+---------------------+---------------------------+--------------+------------+---------+------------+-----------+--------+

CREATE TABLE employees (
    EmployeeID   int(11)     NOT NULL AUTO_INCREMENT,
    LastName     varchar(20) NOT NULL,
    FirstName    varchar(10) NOT NULL,
    JobTitle     varchar(30) Default NULL,
    BirthDate    datetime    Default NULL,
    HireDate     datetime    Default NULL,
    Address      varchar(60) Default NULL,
    City         varchar(15) Default NULL,
    PostalCode   varchar(10) Default NULL,
    Country      varchar(15) Default NULL,
    Phone        varchar(24) Default NULL,
    ReportsTo    int(11)     Default NULL,
    Salary       float       Default NULL,
    PRIMARY KEY (EmployeeID),
    KEY LastName (LastName),
    KEY ReportsTo (ReportsTo)
);
INSERT INTO employees VALUES (5001, 'rao', 'krishna', 'Sales Representative', '1948-12-08 00:00:00', '1992-05-01 00:00:00', '507 - 20th Ave. E.Apt. 2A', 'Seattle', '98122', 'USA', '22255556', 1234, 30000);
INSERT INTO employees VALUES (5002, 'krishna', 'ram', 'Manager', '1950-10-06 00:00:00', '1995-06-02 00:00:00', '307 - 15th Ave. E.Apt', 'Hyderabad', '500031', 'India', '9849789648', 1315, 35000);
INSERT INTO employees VALUES (5003, 'hare', 'ram', 'Accountant', '1975-10-05 00:00:00', '1997-09-01 00:00:00', '107 Apt', 'Secunderabad', '500031', 'India', '9849755648', 1415, 45000);
INSERT INTO employees VALUES (5004, 'hare', 'krishna', 'Assistant Manager', '1980-08-06 00:00:00', '2002-10-05 00:00:00', '407 Apt', 'Vijayawada', '520031', 'India', '9888755648', 2415, 40000);
INSERT INTO employees VALUES (5005, 'murali', 'mohan', 'Manager', '1982-08-07 00:00:00', '2007-06-01 00:00:00', '237 Apt', 'Hyderabad', '500031', 'India', '9888695648', 2695, 45000);
-- DESC employees;
-- select * from employees;
-- select("");


-- desc orders;
-- +--------------+-------------+------+-----+---------+----------------+
-- | Field        | Type        | Null | Key | Default | Extra          |
-- +--------------+-------------+------+-----+---------+----------------+
-- | OrderID      | int(11)     | NO   | PRI | NULL    | auto_increment |
-- | CustomerID   | varchar(5)  | YES  |     | NULL    |                |
-- | EmployeeID   | int(11)     | YES  |     | NULL    |                |
-- | OrderDate    | datetime    | YES  |     | NULL    |                |
-- | RequiredDate | datetime    | YES  |     | NULL    |                |
-- | ShippedDate  | datetime    | YES  |     | NULL    |                |
-- | ShipId       | int(11)     | YES  |     | NULL    |                |
-- | ShipName     | varchar(40) | YES  |     | NULL    |                |
-- | ShipAddress  | varchar(60) | YES  |     | NULL    |                |
-- +--------------+-------------+------+-----+---------+----------------+
-- Sample data for orders entity:
-- +---------+------------+------------+---------------------+---------------------+---------------------+--------+-----------+-------------+
-- | OrderID | CustomerID | EmployeeID | OrderDate           | RequiredDate        | ShippedDate         | ShipId | ShipName  | ShipAddress |
-- +---------+------------+------------+---------------------+---------------------+---------------------+--------+-----------+-------------+
-- |    9001 | 1001       |       5001 | 1996-07-04 00:00:00 | 1996-08-01 00:00:00 | 1996-07-16 00:00:00 |      3 | Reims     | France      |
-- |    9002 | 1002       |       5002 | 1996-07-05 00:00:00 | 1996-08-16 00:00:00 | 1996-07-10 00:00:00 |      1 | Mnster    | Germany     |
-- |    9003 | 1003       |       5003 | 1998-11-06 00:00:00 | 1998-12-04 00:00:00 | 1998-11-08 00:00:00 |      3 | SP        | Brazil      |
-- |    9004 | 1004       |       5004 | 2002-11-12 00:00:00 | 2002-11-26 00:00:00 | 2002-11-18 00:00:00 |      2 | Lisboa    | Portugal    |
-- |    9005 | 1005       |       5005 | 2008-11-25 00:00:00 | 2008-12-23 00:00:00 | 2008-11-28 00:00:00 |      4 | Marseille | France      |
-- +---------+------------+------------+---------------------+---------------------+---------------------+--------+-----------+-------------+

CREATE TABLE orders(
    OrderID int(11) NOT NULL AUTO_INCREMENT,
    CustomerID varchar(5) Default NULL,
    EmployeeID varchar(5) Default NULL,
    OrderDate datetime Default NULL,
    RequiredDate datetime Default NULL,
    ShippedDate datetime Default NULL,
    ShipId int(11) Default NULL,
    ShipName varchar(40) Default NULL,
    ShipAddress varchar(60) Default NULL,
    PRIMARY KEY (OrderID)
);
INSERT INTO orders( OrderID, CustomerID, EmployeeID, OrderDate, RequiredDate, ShippedDate, ShipId, ShipName, ShipAddress) VALUES
(9001, '1001', '5001', '1996-07-04 00:00:00', '1996-08-01 00:00:00', '1996-07-16 00:00:00', 3, 'Reims', 'France'),
(9002, '1002', '5002', '1996-07-05 00:00:00', '1996-08-16 00:00:00', '1996-07-10 00:00:00', 1, 'Mnster', 'Germany'),
(9003, '1003', '5003', '1998-11-06 00:00:00', '1998-12-04 00:00:00', '1998-11-08 00:00:00', 3, 'SP', 'Brazil'),
(9004, '1004', '5004', '2002-11-12 00:00:00', '2002-11-26 00:00:00', '2002-11-18 00:00:00', 2, 'Lisboa', 'Portugal'),
(9005, '1005', '5005', '2008-11-25 00:00:00', '2008-12-23 00:00:00', '2008-11-28 00:00:00', 4, 'Marseille', 'France');
-- DESC orders;
-- select * from orders;
-- select("");



-- desc categories;
-- +--------------+-------------+------+-----+---------+----------------+
-- | Field        | Type        | Null | Key | Default | Extra          |
-- +--------------+-------------+------+-----+---------+----------------+
-- | CategoryID   | int(11)     | NO   | PRI | NULL    | auto_increment |
-- | CategoryName | varchar(15) | NO   |     | NULL    |                |
-- +--------------+-------------+------+-----+---------+----------------+
-- Sample data for categories entity:

-- | CategoryID | CategoryName |
-- +------------+--------------+
-- |       7001 | electronics  |
-- |       7002 | groceries    |
-- |       7003 | clothing     |
-- |       7004 | utensils     |
-- |       7005 | bags         |
-- +------------+--------------+

CREATE TABLE categories(
    CategoryID int(11) PRIMARY KEY NOT NULL AUTO_INCREMENT,
    CategoryName varchar(15) NOT NULL 
);
INSERT INTO categories( CategoryID, CategoryName) VALUES
(7001, 'electronics'),
(7002, 'groceries'),
(7003, 'clothing'),
(7004, 'utensils'),
(7005, 'bags');
-- DESC categories;
-- select * from categories;
-- select("");


-- desc products;
-- +-----------------+---------------+------+-----+---------+----------------+
-- | Field           | Type          | Null | Key | Default | Extra          |
-- +-----------------+---------------+------+-----+---------+----------------+
-- | ProductID       | int(11)       | NO   | PRI | NULL    | auto_increment |
-- | ProductName     | varchar(40)   | NO   |     | NULL    |                |
-- | SupplierID      | int(11)       | YES  |     | NULL    |                |
-- | CategoryID      | int(11)       | YES  |     | NULL    |                |
-- | QuantityPerUnit | varchar(20)   | YES  |     | NULL    |                |
-- | UnitPrice       | decimal(10,4) | YES  |     | 0.0000  |                |
-- | UnitsInStock    | smallint(2)   | YES  |     | 0       |                |
-- | UnitsOnOrder    | smallint(2)   | YES  |     | 0       |                |
-- | ReorderLevel    | smallint(2)   | YES  |     | 0       |                |
-- | Discontinued    | bit(1)        | NO   |     | b'0'    |                |
-- +-----------------+---------------+------+-----+---------+----------------+
-- Sample data for products entity:
-- ProductID | ProductName | SupplierID | CategoryID | QuantityPerUnit | UnitPrice  | UnitsInStock | UnitsOnOrder | ReorderLevel | Discontinued |
-- +-----------+-------------+------------+------------+-----------------+------------+--------------+--------------+--------------+--------------+
-- |      6001 | computer    |       2001 |       7001 | 25 computers    | 25000.0000 |           20 |           10 |            5 | ☺            |
-- |      6002 | laptop      |       2002 |       7002 | 20 laptops      | 45000.0000 |           10 |            5 |            3 |              |
-- |      6003 | pendrive    |       2003 |       7003 | 35 pendrives    |  1000.0000 |           30 |           10 |            5 |              |
-- |      6004 | memory card |       2004 |       7004 | 45 memory cards |   500.0000 |           50 |           20 |           10 | ☺            |
-- |      6005 | headphones  |       2005 |       7005 | 20 headphones   |  1000.0000 |           30 |           15 |           10 |              |
-- +-----------+-------------+------------+------------+-----------------+------------+--------------+--------------+--------------+--------------+
CREATE TABLE products(
    ProductID int(11) NOT NULL PRIMARY KEY AUTO_INCREMENT,
    ProductName varchar(40) NOT NULL,
    SupplierID int(11) Default NULL,
    CategoryID int(11) Default NULL,
    QuantityPerUnit varchar(20) Default NULL,
    UnitPrice decimal(10,4) Default NULL,           
    UnitsInStock smallint(2) Default NULL,
    UnitsOnOrder smallint(2) Default NULL,
    ReorderLevel smallint(2) Default NULL,
    Discontinued bit(1) Default NULL
);
INSERT INTO products VALUES (6001, 'computer', 2001, 7001, '25 computers', 25000.0000, 20, 10, 5, 0);
INSERT INTO products VALUES (6002, 'laptop', 2002, 7002, '20 laptops', 45000.0000, 10, 5, 3, 0);
INSERT INTO products VALUES (6003, 'pendrive', 2003, 7003, '35 pendrives', 1000.0000, 30, 10, 5, 0);
INSERT INTO products VALUES (6004, 'memory card', 2004, 7004, '45 memory cards', 500.0000, 50, 20, 10, 0);
INSERT INTO products VALUES (6005, 'headphones', 2005, 7005, '20 headphones', 1000.0000, 30, 15, 10, 0);
-- DESC products;
-- select * from products;
-- select("");

-- desc shippers;
-- +-------------+-------------+------+-----+---------+----------------+
-- | Field       | Type        | Null | Key | Default | Extra          |
-- +-------------+-------------+------+-----+---------+----------------+
-- | ShipperID   | int(11)     | NO   | PRI | NULL    | auto_increment |
-- | CompanyName | varchar(40) | NO   |     | NULL    |                |
-- | Phone       | varchar(24) | YES  |     | NULL    |                |
-- +-------------+-------------+------+-----+---------+----------------+
-- Sample data for shippers entity:
-- +-----------+-------------+------------+
-- | ShipperID | CompanyName | Phone      |
-- +-----------+-------------+------------+
-- |         1 | samsung     | 90000001   |
-- |         2 | lg          | 6258215545 |
-- |         3 | redme       | 6454545454 |
-- |         4 | nokia       | 895633552  |
-- |         5 | oppo        | 789658258  |
-- +-----------+-------------+------------+
-- 5 rows in set (0.00 sec)

CREATE TABLE shippers(
    ShipperID int(11) NOT NULL AUTO_INCREMENT,
    CompanyName varchar(40) NOT NULL,
    Phone varchar(24) Default NULL,
    PRIMARY KEY (ShipperID)
); 
INSERT INTO shippers (CompanyName, Phone) VALUES
('samsung', '90000001'),
('lg', '6258215545'),
('redme', '6454545454'),
('nokia', '895633552'),
('oppo', '789658258');
-- DESC shippers;
-- select * from shippers;
-- select("");


-- desc suppliers;
-- +-----------------+-------------+------+-----+---------+----------------+
-- | Field           | Type        | Null | Key | Default | Extra          |
-- +-----------------+-------------+------+-----+---------+----------------+
-- | SupplierID      | int(11)     | NO   | PRI | NULL    | auto_increment |
-- | CompanyName     | varchar(40) | NO   |     | NULL    |                |
-- | ContactName     | varchar(30) | YES  |     | NULL    |                |
-- | ContactJobTitle | varchar(30) | YES  |     | NULL    |                |
-- | Address         | varchar(60) | YES  |     | NULL    |                |
-- | Phone           | varchar(24) | YES  |     | NULL    |                |
-- +-----------------+-------------+------+-----+---------+----------------+
-- Sample data for suppliers entity:
-- +------------+-------------+-------------+-------------------+--------------+-----------+
-- | SupplierID | CompanyName | ContactName | ContactJobTitle   | Address      | Phone     |
-- +------------+-------------+-------------+-------------------+--------------+-----------+
-- |       2001 | samsung     | abc         | Salesman          | hyderabad    | 987456321 |
-- |       2002 | lg          | xyz         | manager           | delhi        | 879654123 |
-- |       2003 | redme       | pqr         | accountant        | agra         | 658749234 |
-- |       2004 | nokia       | uvw         | assistant manager | vijayawada   | 896547213 |
-- |       2005 | oppo        | abcd        | executive         | secunderabad | 985462317 |
-- +------------+-------------+-------------+-------------------+--------------+-----------+

CREATE TABLE suppliers(
    SupplierID int(11) NOT NULL AUTO_INCREMENT,
    CompanyName varchar(40) NOT NULL,
    ContactName varchar(30) Default NULL,
    ContactJobTitle varchar(30) Default NULL,
    Address varchar(60) Default NULL,
    Phone varchar(24) Default NULL,
    PRIMARY KEY (SupplierID)
);
INSERT INTO suppliers(SupplierID, CompanyName, ContactName, ContactJobTitle, Address, Phone) VALUES
(2001, 'samsung', 'abc', 'Salesman', 'hyderabad', '987654321'),
(2002, 'lg', 'xyz', 'manager', 'delhi', '879654123'),
(2003, 'redme', 'pqr', 'accountant', 'agra', '688749234'),
(2004, 'nokia', 'uvw', 'assistant manager', 'vijayawada', '896547213'),
(2005, 'oppo', 'abcd', 'executive', 'secunderabad', '985462317');
-- DESC suppliers;
-- select * from  suppliers;
-- select("");

-- desc orderdetails;
-- +-----------+---------------+------+-----+---------+-------+
-- | Field     | Type          | Null | Key | Default | Extra |
-- +-----------+---------------+------+-----+---------+-------+
-- | OrderID   | int(11)       | NO   | PRI | NULL    |       |
-- | ProductID | int(11)       | NO   | PRI | NULL    |       |
-- | UnitPrice | decimal(10,4) | NO   |     | 0.0000  |       |
-- | Quantity  | smallint(2)   | NO   |     | 1       |       |
-- +-----------+---------------+------+-----+---------+-------+
-- Sample data for orderdetails entity:
-- +---------+-----------+------------+----------+
-- | OrderID | ProductID | UnitPrice  | Quantity |
-- +---------+-----------+------------+----------+
-- |    9001 |      6001 | 20000.0000 |       10 |
-- |    9002 |      6002 | 25000.0000 |        5 |
-- |    9003 |      6003 | 30000.0000 |       10 |
-- |    9004 |      6004 | 23000.0000 |        5 |
-- |    9005 |      6005 | 25000.0000 |       10 |
-- +---------+-----------+------------+----------+
CREATE TABLE orderdetails(
    OrderID int(11) NOT NULL,
    ProductID int(11) NOT NULL,
    UnitPrice decimal(10,4) NOT NULL,
    Quantity smallint(2) NOT NULL,
    PRIMARY KEY (OrderID, ProductID)
);
INSERT INTO orderdetails VALUES(9001, 6001, 20000.0000, 10);
INSERT INTO orderdetails VALUES(9002, 6002, 25000.0000, 5);
INSERT INTO orderdetails VALUES(9003, 6003, 30000.0000, 10);
INSERT INTO orderdetails VALUES(9004, 6004, 23000.0000, 5);
-- DESC orderdetails;
-- select * from orderdetails;

-- Display all the order details of a particular customer
SELECT ("Display all the order details of a particular customer");
SELECT * FROM orderdetails WHERE OrderID IN (SELECT OrderID FROM orders WHERE CustomerID = 5003);

-- Get the highest sold product from particular supplier id
SELECT ("Get the highest sold product from given supplier id");
SELECT * FROM products WHERE ProductID IN (SELECT ProductID FROM orderdetails WHERE OrderID IN (SELECT OrderID FROM orders WHERE SupplierID = 2005));

-- List all products grouped by category
SELECT ("List all products grouped by category");
SELECT Category, COUNT(*) AS TotalProducts FROM products GROUP BY Category;

-- List the products whose products unique price is greater than the average price
SELECT ("List the products whose products unique price is greater than the average price");
SELECT ProductID, UnitPrice FROM products WHERE UnitPrice > (SELECT AVG(UnitPrice) FROM products);

-- List details of order and customer of each order
SELECT ("List details of order and customer of each order");
SELECT orders.OrderID, orders.CustomerID, orders.OrderDate, customers.CompanyName, customers.ContactName FROM orders INNER JOIN customers ON orders.CustomerID = customers.CustomerID;

-- List the products which are sold in year 1997
SELECT ("List the products which are sold in year 1997");
SELECT * FROM products INNER JOIN orderdetails ON products.ProductID = orderdetails.ProductID WHERE YEAR(orders.OrderDate) Like "1997%";

-- Write a query to display name of least salary employee
SELECT ("Write a query to display name of least salary employee");
SELECT EmployeeName AS LeastSalayEmployee FROM employees ORDER BY Salary ASC LIMIT 1;

-- Display minimum salary being paid to a manager
SELECT ("Display minimum salary being paid to a manager");
SELECT MIN(Salary) FROM employees WHERE JobTitle = 'Manager';

-- Write a query to display names of employee and their annual salary where annual salary > 30000
SELECT ("Write a query to display names of employee and their annual salary");
SELECT EmployeeName, (Salary * 12) AS AnnualSalary FROM employees WHERE (Salary * 12) > 30000;

-- Display various jobs and total salary of each job
SELECT ("Display various jobs and total salary of each job");
SELECT JobTitle, SUM(Salary) AS TotalSalary FROM employees GROUP BY JobTitle;

-- Display all data from the employee table who draw salary more than 20000 and less than 40000
SELECT ("Display all data from the employee table who draw salary more than 20000 and less than 40000");
SELECT * FROM employees WHERE Salary BETWEEN 20000 AND 40000;

---------------------------------------------

-- Show a list of customers and orders they generated during the year 2014. Display customerid, orderid, orderdate.
SELECT ("Show a list of customers and orders they generated during the year 2014. Display customerid, orderid, orderdate.");
SELECT orders.CustomerID, orders.OrderID, orders.OrderDate FROM orders INNER JOIN customers ON orders.CustomerID = customers.CustomerID WHERE YEAR(orders.OrderDate) = 2014;

--Show all orders purchased before September 1, 2014. Display company name, date order, total amount.
SELECT ("Show all orders purchased before September 1, 2014. Display company name, date order, total amount.");
SELECT customers.CompanyName, orders.OrderDate, SUM(orderdetails.Quantity * orderdetails.UnitPrice) AS TotalAmount FROM orders INNER JOIN customers ON orders.CustomerID = customers.CustomerID INNER JOIN orderdetails ON orders.OrderID = orderdetails.OrderID WHERE orders.OrderDate < '2014-09-01' GROUP BY orders.OrderID;

-- Show all orders that have been shipped via the Federal shipping method. Display orderid, ship name, ship address, ship city, customerid.
SELECT ("Show all orders that have been shipped via the Federal shipping method. Display orderid, ship name, ship address, ship city, customerid.");
SELECT orders.OrderID, orders.ShipName, orders.ShipAddress, orders.ShipCity, orders.CustomerID FROM orders INNER JOIN customers ON orders.CustomerID = customers.CustomerID INNER JOIN orderdetails ON orders.OrderID = orderdetails.OrderID INNER JOIN shippers ON orders.ShipVia = shippers.ShipperID WHERE shippers.ShipperID = 1;

-- Show all customers who have not made purchases in 2011
SELECT ("Show all customers who have not made purchases in 2011");
SELECT * FROM customers LEFT JOIN orders ON customers.CustomerID = orders.CustomerID WHERE orders.OrderID IS NULL;

-- Show all products which have never been ordered.
SELECT ("Show all products which have never been ordered.");
SELECT products.ProductID, products.ProductName, products.UnitPrice FROM products LEFT JOIN orderdetails ON products.ProductID = orderdetails.ProductID WHERE orderdetails.ProductID IS NULL;

-- Show orderid for custoemrs who reside in london. display customer name, orderid.
SELECT ("Show orderid for custoemrs who reside in london. display customer name, orderid.");
SELECT customers.CustomerID, customers.CompanyName, customers.ContactName, customers.Address, customers.City, orders.OrderID FROM customers INNER JOIN orders ON customers.CustomerID = orders.CustomerID WHERE customers.City = 'London';

-- Show all products that come in boxes. Display productname and Quantity per unit
SELECT ("Show all products that come in boxes. Display productname and Quantity per unit");
SELECT products.ProductName, products.QuantityPerUnit FROM products WHERE products.QuantityPerUnit LIKE '%box%';

---------------------------------------------

-- create a view to display the current product list which are available
CREATE VIEW product_list AS SELECT products.ProductID, products.ProductName, products.UnitPrice, products.UnitsInStock FROM products WHERE products.UnitsInStock > 0;
SELECT * FROM product_list;

-- create a view to display the products by category, display product name, quantity per unit and units in stock
CREATE VIEW product_by_category AS SELECT products.ProductID, products.ProductName, products.QuantityPerUnit, products.UnitsInStock FROM products INNER JOIN categories ON products.CategoryID = categories.CategoryID;
SELECT * FROM product_by_category;

-- ceate a view as invoices which has all the information from order, customer, shipper for each order details
CREATE VIEW invoices AS SELECT orders.OrderID, orders.CustomerID, orders.OrderDate, orders.RequiredDate, orders.ShipId, orders.ShippedDate, orders.ShipName, orders.ShipAddress, customers.ContactName, customers.Address, customers.City, customers.Region, customers.PostalCode, customers.Country, shippers.ShipperID, shippers.CompanyName, shippers.Phone FROM orders INNER JOIN customers ON orders.CustomerID = customers.CustomerID INNER JOIN shippers ON orders.ShipId = shippers.ShipperID);
SELECT * FROM invoices;

---------------------------------------------

-- Create a view named customer_addresses that shows the shiping and biling addresses for each customer
CREATE VIEW customerAddress AS SELECT customers.CustomerID, employees.EmployeeID, employees.LastName, employees.FirstName, employees.Country, employees.Phone, orders.OrderDate, orders.RequiredDate, orders.ShippedDate, orders.ShipId, orders.ShipName, orders.ShipAddress FROM employees INNER JOIN orders ON employees.EmployeeID = orders.EmployeeID INNER JOIN customers ON orders.CustomerID = customers.CustomerID; 

-- Write a select statement that returns customerid, last name, fisrt namne, from the customer_address view
SELECT ("Write a select statement that returns customerid, last name, fisrt namne, from the customer_address view");
SELECT CustomerID, FirstName, LastName FROM customerAddress;

-- Create a view named orderitem_products that return colmn from the orders, order iterms, products tables
CREATE VIEW orderItemProducts AS SELECT orders.OrderID, orders.CustomerID, orders.OrderDate, orders.RequiredDate, orders.ShippedDate, orders.ShipName, orders.ShipAddress, orderdetails.ProductID, orderdetails.UnitPrice, orderdetails.Quantity, products.ProductName, products.QuantityPerUnit, products.UnitsInStock, products.UnitsOnOrder FROM orders INNER JOIN orderdetails ON orders.OrderID = orderdetails.OrderID INNER JOIN products ON orderdetails.ProductID = products.ProductID; 

-- Write a select statement that uses the orderitem_products view to get total sales for the 5 best selling products
SELECT ("Write a select statement that uses the orderitem_products view to get total sales for the 5 best selling products");
SELECT ProductName, UnitsOnOrder FROM orderItemProducts GROUP BY ProductName ORDER BY UnitsOnOrder DESC LIMIT 5;