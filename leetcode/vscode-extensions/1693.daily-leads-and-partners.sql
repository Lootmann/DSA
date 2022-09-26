--
-- @lc app=leetcode id=1693 lang=mysql
--
-- [1693] Daily Leads and Partners
--

-- @lc code=start
SELECT
    date_id,
    make_name,
    count(distinct(lead_id)) AS unique_leads,
    count(distinct(partner_id)) AS unique_partners
FROM DailySales
GROUP BY date_id, make_name
;


-- @lc code=end

