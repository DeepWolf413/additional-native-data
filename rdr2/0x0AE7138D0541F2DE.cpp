// satchel_ui_event_handler.ysc @ L15646
void func_541(int iParam0, char* sParam1, int iParam2, bool bParam3, char* sParam4, bool bParam5, char* sParam6, char* sParam7)
{
  var uVar0;
  var uVar1;

  uVar0 = DATABINDING::_DATABINDING_GET_DATA_CONTAINER_FROM_CHILD_INDEX(Global_1935689.f_10199, Global_1935689.f_10193);
  uVar1 = uVar0;
  DATABINDING::_DATABINDING_WRITE_DATA_SCRIPT_VARIABLES(0, uVar1, sParam1, iParam2->f_1, *iParam2, sParam4, bParam3, bParam5, sParam6, sParam7);
  DATABINDING::_DATABINDING_SET_TEMPLATED_UI_ITEM_HASH_ALIAS(Global_1935689.f_10199, Global_1935689.f_10193, iParam0);
  Global_1935689.f_10193++;
}