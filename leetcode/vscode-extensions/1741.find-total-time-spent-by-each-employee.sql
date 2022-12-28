--
-- @lc app=leetcode id=1741 lang=mysql
--
-- [1741] Find Total Time Spent by Each Employee
--

-- @lc code=start
SELECT
    event_day AS day,
    emp_id,
    SUM(out_time) - SUM(in_time) AS total_time

FROM Employees
GROUP BY event_day, emp_id
;
-- @lc code=end

