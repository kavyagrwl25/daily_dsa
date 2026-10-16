SELECT ROUND(
    SUM(IF(d.order_date = d.customer_pref_delivery_date, 1, 0))
    * 100.0 / COUNT(*),
    2
) AS immediate_percentage
FROM Delivery d
WHERE (d.customer_id, d.order_date) IN (
    SELECT customer_id, MIN(order_date)
    FROM Delivery
    GROUP BY customer_id
);