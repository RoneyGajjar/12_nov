select id,name,remarks from student;

select * from student;

insert into student values(101,'Roney','2002-03-30',99.85,'A');
insert into student values(102,'kapil','1980-05-25',98.54,'A'),
(103,'yash','2000-02-14',98.99,'A');

select * from student;

update student set percentage = 65.45 where id = 102;
update student set remark = 'C' where id = 102;

delete from student where id = 102;