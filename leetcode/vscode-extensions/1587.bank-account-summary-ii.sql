--
-- @lc app=leetcode id=1587 lang=mysql
--
-- [1587] Bank Account Summary II
--

-- @lc code=start
SELECT
    u.name,
    SUM(amount) as balance
FROM Transactions
JOIN Users u
USING(account)
GROUP BY account
HAVING balance>10000

-- @lc code=end

