select count(employee_id) from employees;

select * from employees order by salary desc limit 1; 

select * from employees order by hire_date asc;
select * from employees;

select max(salary) from employees;

select min(hire_date) from employees;

select avg(salary) from employees;

select max(comission_pct) from employees;

select avg(salary) from employees where department_id in (60);

select count(*) from employees where manager_id in(100);
select * from employees;

select count(*) from employees where salary < 6000;
select * from employees order by salary;

select manager_id from employees group by manager_id having count(manager_id)=1; 

select max(salary) - min(salary) as difference from employees;

select comission_pct*salary as comission_amt from employees where comission_pct is not null order by comission_pct limit 1;

select department_id,min(salary) from employees where department_id = 50 group by department_id;  

select * from employees where hire_date between 1991 and 1995;

select comission_pct*salary+salary as Total_salary from employees where comission_pct is not null;

select * from employees where first_name like '%e%';

select * from employees where last_name like 'z%' or '%z';

select * from employees where hire_date like '%-MA_-%';

select * from employees where job_id like 'ST%';

select * from employees where job_id like '%MAN';

select * from employees where job_id like 'ST%';

select * from employees where comission_pct is null;

select * from employees where first_name like '%ll%';

select * from employees where employee_id like '_0';

select count(*) from employees where manager_id is not null;

select hire_date from employees;

select manager_id from employees group by manager_id having count(manager_id)>0;

select count(job_id) from employees;

select min(salary) from employees where department_id;  

select min(salary),max(salary) from employees where department_id = 50;

select distinct manager_id from employees;

select count(*) - count(comission_pct) as count from employees;