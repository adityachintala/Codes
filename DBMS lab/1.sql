-- create a table
CREATE DATABASE db;
CREATE TABLE sailors (
  sid INTEGER PRIMARY KEY,
  sname TEXT NOT NULL,
  age FLOAT NOT NULL,
  rating INTEGER NOT NULL
);
-- insert some values
INSERT INTO sailors VALUES(22, 'Dustin', 45, 7);
INSERT INTO sailors VALUES(29, 'Brutus', 33, 1);
INSERT INTO sailors VALUES(31, 'Lubber', 55.5, 8);
INSERT INTO sailors VALUES(32, 'Andy', 25.5, 8);
INSERT INTO sailors VALUES(58, 'Rusty', 35, 10);
INSERT INTO sailors VALUES(64, 'Haratio', 35, 7);
INSERT INTO sailors VALUES(71, 'Zebra', 16, 10);
INSERT INTO sailors VALUES(74, 'Haratio', 35, 9);
INSERT INTO sailors VALUES(85, 'Ant', 25.5, 3);
INSERT INTO sailors VALUES(95, 'Bob', 63.5, 3);

-- SELECT * FROM sailors ;

-- fetch some values
CREATE TABLE boats (
  bid INTEGER PRIMARY KEY,
  bname TEXT NOT NULL,
  color TEXT NOT NULL
);

INSERT INTO boats VALUES(101, 'Interlake', 'blue');
INSERT INTO boats VALUES(102, 'Interlake', 'red');
INSERT INTO boats VALUES(103, 'clipper', 'green');
INSERT INTO boats VALUES(104, 'marine', 'red');

-- SELECT * FROM boats ;


CREATE TABLE Reserves (
  sid INTEGER ,
  bid INTEGER ,
  day DATE NOT NULL,
  PRIMARY KEY(sid, bid, day),
  FOREIGN KEY(sid) references sailors(sid),
  FOREIGN KEY(bid) references boats(bid)
);

INSERT INTO Reserves VALUES(22, 101, '1998-10-10');
INSERT INTO Reserves VALUES(22, 102, '1998-10-10');
INSERT INTO Reserves VALUES(22, 103, '1998-08-10');
INSERT INTO Reserves VALUES(22, 104, '1998-07-10');
INSERT INTO Reserves VALUES(31, 102, '1998-10-11');
INSERT INTO Reserves VALUES(31, 103, '1998-06-11');
INSERT INTO Reserves VALUES(31, 104, '1998-12-11');
INSERT INTO Reserves VALUES(64, 101, '1998-05-9');
INSERT INTO Reserves VALUES(64, 102, '1998-08-9');
INSERT INTO Reserves VALUES(74, 103, '1998-08-9');

-- SELECT * FROM Reserves ;

-- write a query that displays the details the sailors who have rating greater than 7
SELECT('Details the sailors who have rating greater than 7:');
SELECT sname FROM sailors WHERE rating > 7;
SELECT ('');

-- write a query to display the average age of the sailors
SELECT ("Average age of the sailors:");
SELECT AVG(age) FROM sailors;
SELECT ('');

-- write a query to display distinct sailor names
SELECT ("Distinct sailor names: ");
SELECT DISTINCT sname FROM sailors;
SELECT ('');

-- Display the information of sailors who have reserved boat number 101
SELECT('Information of sailors who have reserved boat number 101:');
SELECT sailors.sname, sailors.age FROM sailors, Reserves WHERE Reserves.bid = 101 AND sailors.sid = Reserves.sid;
SELECT ('');̦

-- write a query to display the information about sailors 
SELECT ("Information about sailors: ");
SELECT * from sailors;
SELECT ('');

-- display the details of oldest sailors
SELECT ("Details of oldest sailors: ");
SELECT sname, age FROM sailors ORDER BY age DESC LIMIT 1;
SELECT ('');

--  display the unique sailor names from the table 
SELECT ("Unique sailor names from the table: ");
SELECT DISTINCT sname FROM sailors;
SELECT ('');

-- display the information of sailors who have reserverd boat number 101
SELECT ("Information of sailors who have reserved boat number 101: ");
SELECT sailors.sname, sailors.age FROM sailors, Reserves WHERE Reserves.bid = 101 AND sailors.sid = Reserves.sid;
SELECT ('');

-- find the sailor id's who have reserved atleast one boat
SELECT ("Sailor id's who have reserved atleast one boat: ");
SELECT sailors.sid FROM sailors, Reserves WHERE Reserves.sid = sailors.sid;
SELECT ('');

-- display the details of sailors who's age is between 25 & 45
SELECT ("Details of sailors who's age is between 25 & 45: ");
SELECT sname, age FROM sailors WHERE age BETWEEN 25 AND 45;
SELECT ('');

-- Write a query to perform basic aggregate operators on sailors table
SELECT ("Basic aggregate operators on sailors table: ");
SELECT AVG(age), MIN(age), MAX(age), COUNT(age) FROM sailors;
SELECT ('');

-- Write a query to dislay the details of sailors who have reserved a red or green boat
SELECT ("Details of sailors who have reserved a red or green boat: ");
SELECT * FROM sailors, Reserves, boats WHERE Reserves.bid = boats.bid AND sailors.sid = Reserves.sid AND boats.color = 'red' OR boats.color = 'green';
SELECT ('');

-- Write a query to dislay the details of sailors who have reserved a red boat and who have reserved a green boat
SELECT ("Details of sailors who have reserved a red boat and who have reserved a green boat: ");
SELECT * FROM sailors WHERE sailors.sid IN (SELECT Reserves.sid FROM Reserves WHERE Reserves.bid IN (SELECT bid FROM boats WHERE boats.color = "red" OR boats.color = "green"));
SELECT ('');

-- Find the names and ratings of sailors whose rating is greater than a sailor called horatio
SELECT ("Names and ratings of sailors whose rating is greater than a sailor called horatio: ");
SELECT sname, rating FROM sailors WHERE rating > (SELECT rating FROM sailors WHERE sname = 'horatio');
SELECT ('');

-- Find name and age of youngest sailor
SELECT ("Name and age of youngest sailor: ");
SELECT sname, age FROM sailors ORDER BY age ASC LIMIT 1;
SELECT ('');

-- Find average age of sailors
SELECT ("Average age of sailors: ");
SELECT AVG(age) FROM sailors;
SELECT ('');


-- -- create a table
-- CREATE TABLE sailors (
--   sid INTEGER PRIMARY KEY,
--   sname TEXT NOT NULL,
--   age FLOAT NOT NULL,
--   rating INTEGER NOT NULL
-- );
-- -- insert some values
-- INSERT INTO sailors VALUES(22, 'Dustin', 45, 7);
-- INSERT INTO sailors VALUES(29, 'Brutus', 33, 1);
-- INSERT INTO sailors VALUES(31, 'Lubber', 55.5, 8);
-- INSERT INTO sailors VALUES(32, 'Andy', 25.5, 8);
-- INSERT INTO sailors VALUES(58, 'Rusty', 35, 10);
-- INSERT INTO sailors VALUES(64, 'Haratio', 35, 7);
-- INSERT INTO sailors VALUES(71, 'Zebra', 16, 10);
-- INSERT INTO sailors VALUES(74, 'Haratio', 35, 9);
-- INSERT INTO sailors VALUES(85, 'Ant', 25.5, 3);
-- INSERT INTO sailors VALUES(95, 'Bob', 63.5, 3);

-- -- SELECT * FROM sailors ;

-- -- fetch some values
-- CREATE TABLE boats (
--   bid INTEGER PRIMARY KEY,
--   bname TEXT NOT NULL,
--   color TEXT NOT NULL
-- );

-- INSERT INTO boats VALUES(101, 'Interlake', 'blue');
-- INSERT INTO boats VALUES(102, 'Interlake', 'red');
-- INSERT INTO boats VALUES(103, 'clipper', 'green');
-- INSERT INTO boats VALUES(104, 'marine', 'red');

-- -- SELECT * FROM boats ;


-- CREATE TABLE Reserves (
--   sid INTEGER ,
--   bid INTEGER ,
--   day DATE NOT NULL,
--   PRIMARY KEY(sid, bid, day),
--   FOREIGN KEY(sid) references sailors(sid),
--   FOREIGN KEY(bid) references boats(bid)
-- );

-- INSERT INTO Reserves VALUES(22, 101, '1998-10-10');
-- INSERT INTO Reserves VALUES(22, 102, '1998-10-10');
-- INSERT INTO Reserves VALUES(22, 103, '1998-08-10');
-- INSERT INTO Reserves VALUES(22, 104, '1998-07-10');
-- INSERT INTO Reserves VALUES(31, 102, '1998-10-11');
-- INSERT INTO Reserves VALUES(31, 103, '1998-06-11');
-- INSERT INTO Reserves VALUES(31, 104, '1998-12-11');
-- INSERT INTO Reserves VALUES(64, 101, '1998-05-9');
-- INSERT INTO Reserves VALUES(64, 102, '1998-08-9');
-- INSERT INTO Reserves VALUES(74, 103, '1998-08-9');

-- -- SELECT * FROM Reserves ;

-- -- write a query that displays the details the sailors who have rating greater than 7
-- SELECT('Details the sailors who have rating greater than 7:');
-- SELECT sname FROM sailors WHERE rating > 7;
-- SELECT ('');

-- -- write a query to display the average age of the sailors
-- SELECT ("Average age of the sailors:");
-- SELECT AVG(age) FROM sailors;
-- SELECT ('');

-- -- write a query to display distinct sailor names
-- SELECT ("Distinct sailor names: ");
-- SELECT DISTINCT sname FROM sailors;
-- SELECT ('');

-- -- Display the information of sailors who have reserved boat number 101
-- SELECT('Information of sailors who have reserved boat number 101:');
-- SELECT sailors.sname, sailors.age FROM sailors, Reserves WHERE Reserves.bid = 101 AND sailors.sid = Reserves.sid;
-- -- SELECT ('');̦

-- -- write a query to display the information about sailors 
-- SELECT ("Information about sailors: ");
-- SELECT * from sailors;
-- SELECT ('');

-- -- display the details of oldest sailors
-- SELECT ("Details of oldest sailors: ");
-- SELECT sname, age FROM sailors ORDER BY age DESC LIMIT 1;
-- SELECT ('');

-- --  display the unique sailor names from the table 
-- SELECT ("Unique sailor names from the table: ");
-- SELECT DISTINCT sname FROM sailors;
-- SELECT ('');

-- -- display the information of sailors who have reserverd boat number 101
-- SELECT ("Information of sailors who have reserved boat number 101: ");
-- SELECT sailors.sname, sailors.age FROM sailors, Reserves WHERE Reserves.bid = 101 AND sailors.sid = Reserves.sid;
-- SELECT ('');

-- -- find the sailor id's who have reserved atleast one boat
-- SELECT ("Sailor id's who have reserved atleast one boat: ");
-- SELECT DISTINCT sailors.sid FROM sailors, Reserves WHERE Reserves.sid = sailors.sid;
-- SELECT ('');

-- -- display the details of sailors who's age is between 25 & 45
-- SELECT ("Details of sailors who's age is between 25 & 45: ");
-- SELECT sname, age FROM sailors WHERE age BETWEEN 25 AND 45;
-- SELECT ('');

-- -- Write a query to perform basic aggregate operators on sailors table
-- SELECT ("Basic aggregate operators on sailors table: ");
-- SELECT AVG(age), MIN(age), MAX(age), COUNT(age) FROM sailors;
-- SELECT ('');

-- -- Write a query to dislay the details of sailors who have reserved a red or green boat
-- SELECT ("Details of sailors who have reserved a red or green boat: ");
-- -- SELECT DISTINCT * FROM sailors, Reserves, boats WHERE Reserves.bid = boats.bid AND sailors.sid = Reserves.sid AND boats.color = 'red' OR boats.color = 'green';
-- SELECT * FROM sailors WHERE sid = (SELECT sid from Reserves WHERE bid = (SELECT bid FROM boats WHERE color = 'red' OR color = 'green'));
-- SELECT ('');

-- -- Write a query to dislay the details of sailors who have reserved a red boat and who have reserved a green boat
-- SELECT ("Details of sailors who have reserved a red boat and who have reserved a green boat and red boat: ");
-- -- SELECT * FROM sailors, Reserves, boats WHERE Reserves.bid = boats.bid AND sailors.sid = Reserves.sid AND boats.color = 'red' AND boats.color = 'green';
-- -- SELECT * FROM sailors WHERE sailors.sid = (SELECT )

-- SELECT ('');

-- -- Find the names and ratings of sailors whose rating is greater than a sailor called horatio
-- SELECT ("Names and ratings of sailors whose rating is greater than a sailor called haratio: ");
-- SELECT sname FROM sailors WHERE rating > (SELECT rating FROM sailors WHERE sname = 'Haratio' and sid = 64);
-- SELECT ('');

-- -- SELECT * FROM sailors WHERE sname = 'Haratio';

-- -- Find name and age of youngest sailor
-- SELECT ("Name and age of youngest sailor: ");
-- SELECT sname, age FROM sailors ORDER BY age ASC LIMIT 1;
-- SELECT ('');

-- -- Find average age of sailors
-- SELECT ("Average age of sailors: ");
-- SELECT AVG(age) FROM sailors;
-- SELECT ('');