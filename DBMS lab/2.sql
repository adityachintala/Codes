-- Roadway travels wants to computerise its operations in the following areas 
-- - Reservations : Where in these are directly handled by the booking office and reservations can be made 30 days in advance,
--                  and the tickets are directly issued to the passenger. 
--                  One Passnger can book many tickets.
-- - Cancellations : Are directly handled by booking office.

-- In this process of computerisation, you have to design and develop
--  and a database which consists the data of buses, passengers, tickets, reservations and cancellatoins
-- In the above process, try to involve the following steps
--     - Analyse the problem
--     - Identify entities and relationships
--     - Create an ER Model for the above scenario
--     - Convert the ER Model into relational Model

Create Table Bus(
    Bus_ID int,
    Bus_Name varchar(20),
    Bus_Type varchar(20),
    Bus_Capacity int,
    Bus_Fare int,
    Bus_Source varchar(20),
    Bus_Destination varchar(20),
    Bus_Departure_Time varchar(20),
    Bus_Arrival_Time varchar(20),
);

Create Table Passenger(
    Passenger_ID int primary key,
    Passenger_Name varchar(20),
    Passenger_Age int,
    Passenger_Email varchar(20),
    Passenger_Phone varchar(20),
);

Create Table Ticket(
    Ticket_ID int primary key,
    Ticket_Bus_ID int,
    Ticket_Passenger_ID int,
    Ticket_Reservation_ID int,
    Ticket_Cancellation_ID int,
);

Create Table Cancellations(
    Cancellation_ID int primary key,
    Cancellation_Ticket_ID int,
    
);

)
Create Table Reservations(
    Reservation_ID int primary key,
    Reservation_Bus_ID int,
    Reservation_Passenger_ID int,
    Reservation_Date varchar(20),
    Reservation_Time varchar(20),
);

insert into Bus values(1,'Bus1','AC',50,1000,'Mumbai','Delhi','10:00','12:00','Available');
insert into Bus values(2,'Bus2','AC',50,1000,'Mumbai','Delhi','10:00','12:00','Available');
insert into Bus values(3,'Bus3','AC',50,1000,'Mumbai','Delhi','10:00','12:00','Available');
insert into Bus values(4,'Bus4','AC',50,1000,'Mumbai','Delhi','10:00','12:00','Available');


