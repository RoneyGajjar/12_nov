select * from employees where salary  = 24000;
select * from employees where salary > 10000;
select *,salary*12 as anual_salary from employees where salary*12 > 200000;
select * from employees where department_id = 90 or manager_id = 100;
select * from employees where salary>=10000 and salary <=20000;
select * from employees where salary between 10000 and 20000;
select * from employees where comission_pct>0;
select * from employees where comission_pct is not null;
select * from employees where comission_pct is null;
select *,concat(first_name,' ',last_name) as full_name from employees;