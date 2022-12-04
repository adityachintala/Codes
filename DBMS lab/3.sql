/*
Consider the following schema
Customers with cid, cname, caddress, city, pin, country as its attributes
Suppliers with sid, sname, saddress, city, pin, country as its attributes
Wirte a query that returns city's distinct values from customers and suppliers

*/

CREATE TABLE customers(
    cid INTEGER,
    cname VARCHAR(20),
    caddress VARCHAR(20),
    city VARCHAR(20),
    pin INTEGER,
    country VARCHAR(20)
);

CREATE TABLE suppliers(
    sid INTEGER,
    sname VARCHAR(20),
    saddress VARCHAR(20),
    city VARCHAR(20),
    pin INTEGER,
    country VARCHAR(20)
);

INSERT INTO customers VALUES(1,'John','Highway 21','ABCDE','12345','USA');
INSERT INTO customers VALUES(2,'Peter','Lowstreet 4','ABCD','54321','USA');
INSERT INTO customers VALUES(3,'Amy','Apple st 652','AB','12345','USA');
INSERT INTO customers VALUES(4,'Hannah','Mountain 21','Hyderabad','654321','USA');
INSERT INTO customers VALUES(5,'Michael','Valley 345','Chennai','12345','USA');

INSERT INTO suppliers VALUES(1,'John','Highway 21','A','12345','USA');
INSERT INTO suppliers VALUES(2,'Peter','Lowstreet 4','AB','54321','USA');
INSERT INTO suppliers VALUES(3,'Amy','Apple st 652','ABC','12345','USA');
INSERT INTO suppliers VALUES(4,'Hannah','Mountain 21','ABCD','654321','USA');
INSERT INTO suppliers VALUES(5,'Michael','Valley 345','ABCDE','12345','USA');

SELECT DISTINCT city FROM customers, suppliers;