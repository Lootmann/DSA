--
-- @lc app=leetcode id=181 lang=mysql
--
-- [181] Employees Earning More Than Their Managers
--

-- @lc code=start
SELECT name AS Employee
FROM Employee e
WHERE Salary > (
    SELECT Salary
    FROM Employee ee
    WHERE e.managerId  = ee.id
)

-- @lc code=end

