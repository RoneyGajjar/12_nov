create role admin;

create user Rahul identified by 'abc@123' default role admin;

grant select on employees to Rahul;

grant update,delete on employees to Rahul;

grant select,update,delete on student to Rahul;

revoke update,delete on employees from Rahul;