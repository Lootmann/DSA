--
-- @lc app=leetcode id=1795 lang=mysql
--
-- [1795] Rearrange Products Table
--

-- @lc code=start
SELECT *
FROM (
    select product_id, 'store1' as store,
        store1 as price from Products union
    select product_id, 'store2' as store,
        store2 as price from Products union
    select product_id, 'store3' as store,
        store3 as price from Products
) store where price is not null
;

-- @lc code=end

