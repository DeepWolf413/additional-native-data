// pause_menu.ysc @ L7244
void func_235(int iParam0, char* sParam1, char* sParam2, bool bParam3, bool bParam4, bool bParam5, bool bParam6, int iParam7, int iParam8, int iParam9, char* sParam10)
{
  DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_4, sParam1);
  DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_5, sParam2);
  DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_1, bParam3);
  DATABINDING::_DATABINDING_WRITE_DATA_STRING(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_2, sParam10);
  DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_6, bParam4);
  DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_7, bParam5);
  DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_11, bParam6);
  DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_8, iParam7);
  DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_9, iParam8);
  DATABINDING::_DATABINDING_WRITE_DATA_FLOAT(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_10, iParam9);
  DATABINDING::_DATABINDING_WRITE_DATA_BOOL(Global_1955569.f_5.f_147.f_24[iParam0 /*23*/].f_12, false);
  DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(Global_1955569.f_5.f_147.f_21, iParam0, "player_attribute_item", Global_1955569.f_5.f_147.f_24[iParam0 /*23*/]);
}