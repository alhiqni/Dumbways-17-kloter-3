create database provDanKab_db;

use provDanKab_db;

CREATE TABLE `provinsi_tb` (
	`id` int(11) NOT NULL auto_increment,
	`name` varchar(100),
	`diresmikan` varchar(50),
	`photo` blob NOT NULL,
	`pulau` varchar(100),
	PRIMARY KEY  (`id`)
);

CREATE TABLE `kabupaten_tb`(
	`id` int(11) NOT NULL auto_increment,
	`name` varchar(100),
	`provinsi_id` provinsi_tb.id,
	`photo` blob NOT NULL,
	`diresmikan` varchar(50),
	PRIMARY KEY  (`id`)
);
