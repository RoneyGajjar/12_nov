select * from employees;

select * from student;

update employees set salary = 25000 where employee_id = 101;

select * from employees;

select * from employees order by salary desc;

select department_id,count(salary) from employees group by department_id having count(salary)>=3 order by department_id;

select * from employees order by salary desc limit 5;

select * from employees order by salary desc limit 10 offset 5;