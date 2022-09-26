--
-- @lc app=leetcode id=1757 lang=mysql
--
-- [1757] Recyclable and Low Fat Products
--

-- @lc code=start
SELECT product_id
FROM Products as p
WHERE p.low_fats = "Y" AND p.recyclable ="Y"
;

-- @lc code=end

