create schema 11_November;

create table stdent
(
i int not null unique,
name varchar(25) not null,
dob int not null,
percentage float
);

describe stdent;

-- rename table

alter table stdent rename to student;

-- rename column
alter table student rename column i to id;

-- modify column 

alter table student modify dob date not null; 

-- modify column

alter table student modify percentage float not null;

-- add column

alter table student add column remarks char not null;
alter table student add column email varchar(25) not null after name;

-- delete column

alter table student drop column email;

drop table student;

drop schema 11_November;

create table stdent
(
id int not null unique,
name varchar(25) not null,
dob int not null,
percentage float not null,
remarks char not null
);

alter table stdent rename to student;

alter table student modify dob date not null;