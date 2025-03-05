create role member;

create user Roney identified by 'Roney@121' default role member;

grant select,update,delete on employees to Roney;

grant select,update,delete on student to Roney;

