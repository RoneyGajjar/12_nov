drop table student;
create table students
(
id int not null unique,
maths int default 0,
english int default 0,
science int default 0
);

alter table students add column total int; 

create trigger add_data
before insert on 11_november.students
for each row
set new.total = new.maths + new.english + new.science;

insert into students(id,maths,english,science) values
(101,35,42,48);

select * from students;

