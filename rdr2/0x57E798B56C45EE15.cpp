// map_app_event_handler.ysc @ L1168
void func_30(int iParam0, var uParam1)
{
  char cVar0[16];
  int iVar2;

  if (!func_51(uParam1->f_22))
  {
    if (!func_21(iParam0, &(uParam1->f_22)))
    {
      return;
    }
  }
  func_26(uParam1);
  uParam1->f_9 = DATABINDING::_DATABINDING_ADD_DATA_CONTAINER(uParam1->f_8, "BLIP");
  DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "name", Global_1835011[uParam1->f_22 /*74*/].f_26);
  MemCopy(&cVar0, {Global_1835011[uParam1->f_22 /*74*/].f_8}, 2);
  StringConCat(&cVar0, "_DESC_PM", 16);
  if (!HUD::DOES_TEXT_LABEL_EXIST(&cVar0))
  {
    StringCopy(&cVar0, "", 16);
  }
  iVar2 = MISC::GET_HASH_KEY(&(Global_1835011[uParam1->f_22 /*74*/].f_8));
  DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description", MISC::GET_HASH_KEY(&cVar0));
  DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "description_title", iVar2);
  DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTXD", MISSIONDATA::MISSIONDATA_GET_TEXTURE_TXD(iVar2));
  DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "imageTX", MISSIONDATA::MISSIONDATA_GET_TEXTURE_NAME(iVar2));
  DATABINDING::_DATABINDING_ADD_DATA_HASH(uParam1->f_9, "hint_name", 1544592360 /* GXTEntry: "Bounty:" */);
  DATABINDING::_DATABINDING_ADD_DATA_STRING(uParam1->f_9, "hint_value", "$0.00");
  DATABINDING::_DATABINDING_INSERT_UI_ITEM_TO_LIST_FROM_CONTEXT_STRING_ALIAS(uParam1->f_8, -1, "map_card_mission", uParam1->f_9);
}