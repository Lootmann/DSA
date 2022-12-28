--
-- @lc app=leetcode id=1581 lang=mysql
--
-- [1581] Customer Who Visited but Did Not Make Any Transactions
--

-- @lc code=start
SELECT customer_id, count(visit_id) as count_no_trans
FROM visits
WHERE visit_id not in (SELECT visit_id FROM transactions)
GROUP BY customer_id

-- @lc code=end

