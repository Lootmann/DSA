--
-- @lc app=leetcode id=607 lang=mysql
--
-- [607] Sales Person
--

-- @lc code=start
SELECT SalesPerson.name
FROM SalesPerson
WHERE sales_id NOT IN (
    SELECT Orders.sales_id
    FROM Orders
    JOIN Company ON Orders.com_id = Company.com_id
    WHERE Company.name='RED'
)

-- @lc code=end

