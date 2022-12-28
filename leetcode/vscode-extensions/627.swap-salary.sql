--
-- @lc app=leetcode id=627 lang=mysql
--
-- [627] Swap Salary
--

-- @lc code=start
update salary
SET sex = (case when sex='m' then 'f' else 'm' end)

-- @lc code=end

