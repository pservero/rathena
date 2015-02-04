// Copyright (c) Athena Dev Teams - Licensed under GNU GPL
// For more information, see LICENCE in the main folder

/**
 * Custom Atcommands
 * Place the body of custom atcommands in this file.
 * Format:
 *	ACMD_FUNC(command_name)
 *	{
 *		<code>;
 *	}
 **/

//ACMD_FUNC(newcommand)
//{
//	clif_displaymessage(fd, "It works!");
//	clif_specialeffect(&sd->bl, 343, AREA);
//	return 0;
//}

/**
 * Custom Commands by PServeRO
 **/

/** @gstoreall - Put everything into guild storage
* @author Cydh/PServeRO
*/
ACMD_FUNC(gstoreall) {
	uint8 i;
	nullpo_retr(-1, sd);

	if (!sd->status.guild_id) {
		clif_displaymessage(fd, msg_txt(sd, 252));
		return -1;
	}

	if (sd->npc_id || sd->state.vending || sd->state.buyingstore || sd->state.trading)
		return -1;

	if (sd->state.storage_flag == 1) {
		clif_displaymessage(fd, msg_txt(sd, 250));
		return -1;
	}
	
	if (sd->state.storage_flag == 2) {
		clif_displaymessage(fd, msg_txt(sd, 251));
		return -1;
	}
	
	if (storage_guild_storageopen(sd) == 1) {
		sprintf(atcmd_output, msg_txt(sd, 1602));
		clif_displaymessage(fd, atcmd_output);
		return -1;
	}
		
	for (i = 0; i < ARRAYLENGTH(sd->status.inventory); i++) {
		if (sd->status.inventory[i].amount) {
			if (sd->status.inventory[i].equip != 0)
				pc_unequipitem(sd, i, 3);
			storage_guild_storageadd(sd, i, sd->status.inventory[i].amount);
		}
	}
	
	storage_guild_storageclose(sd);

	clif_displaymessage(fd, msg_txt(sd, 1603));
	return 0;
}

#ifdef PROJECT_DISPLAY_MAP_DESC
/** @reloadmapdesc - Reloads Map Description database file
* @author Cydh/PServeRO
*/
ACMD_FUNC(reloadmapdesc) {
	map_load_name_desc();
	clif_displaymessage(fd,msg_txt(sd, 1604));
	return 0;
}
#endif
