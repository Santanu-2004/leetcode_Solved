# Write your MySQL query statement below
select * from Cinema
having id % 2 != 0 && description != "boring"
order by rating desc;
