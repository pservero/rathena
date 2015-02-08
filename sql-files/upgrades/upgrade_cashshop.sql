-- Change the table name based on table that being used.
-- Normally is `item_cash_db` and `item_cash_db2`
ALTER TABLE `item_cash_db` ADD COLUMN `duration` INT (11) UNSIGNED NOT NULL DEFAULT '0';
ALTER TABLE `item_cash_db` ADD COLUMN `bound` TINYINT (1) UNSIGNED NOT NULL DEFAULT '0';

ALTER TABLE `item_cash_db2` ADD COLUMN `duration` INT (11) UNSIGNED NOT NULL DEFAULT '0';
ALTER TABLE `item_cash_db2` ADD COLUMN `bound` TINYINT (1) UNSIGNED NOT NULL DEFAULT '0';
