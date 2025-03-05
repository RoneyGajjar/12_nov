delimiter &&
create procedure add_data(in id int)
begin
update employees set salary = salary + 4000 where employee_id = id;
end &&

select * from employees;


call add_data(101,24000);

rollback;

call add_data(103);

delimiter &&
create procedure add_salary(in id int)
begin
update employees set salary = salary + 4000 where employee_id = id;
end &&

call add_salary(103);

select * from employees;
rollback;

delimiter &&
create procedure salary_dec(in id int)
begin
update employees set salary = salary - 4000 where employee_id = id;
end &&