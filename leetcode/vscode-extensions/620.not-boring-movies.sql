--
-- @lc app=leetcode id=620 lang=mysql
--
-- [620] Not Boring Movies
--

-- @lc code=start
SELECT id, movie, description, rating
FROM Cinema
WHERE description!='boring' AND MOD(id, 2) = 1
ORDER BY rating DESC
;

-- @lc code=end

