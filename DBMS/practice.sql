select * from employees;

alter table employees modify hire_date varchar(20) not null;

update employees set hire_date = date_format(hire_date,'%d-%b-%y');

select * from employees;

delete from employees where employee_id = 101;

select * from employees;

rollback;

select * from employees;

update employees set salary = 19000 where employee_id = 101;

select * from employees;

select *,salary*12 as annual_income from employees order by annual_income desc;

select employee_id,first_name,salary as income from employees order by income asc;

select department_id,count(salary) from employees group by department_id;

select department_id,count(salary) from employees group by department_id having count(salary)>2 order by department_id;

select * from employees order by salary desc limit 5;

select * from employees order by salary limit 10 offset 5;

