// act_fishing01.ysc @ L20514
int func_572(int iParam0, int iParam1, int iParam2, float fParam3, int iParam4, char* sParam5)
{
  if ((!func_205(*iParam1) || !func_205(*iParam2)) || !ENTITY::DOES_ENTITY_EXIST(iParam0))
  {
    return -1;
  }
  HUD::_UIPROMPT_SET_AMBIENT_GROUP_THIS_FRAME(iParam0, fParam3, 3, 1, HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0), sParam5, 0);
  HUD::_UIPROMPT_SET_ACTIVE_GROUP_THIS_FRAME(HUD::_UIPROMPT_GET_GROUP_ID_FOR_TARGET_ENTITY(iParam0), sParam5, 1, 0, 0, 0);
  func_935(*iParam1, 1, 1);
  func_936(*iParam1, 1, 1);
  if (func_937(*iParam1, 1))
  {
    return 0;
  }
  func_935(*iParam2, 1, 1);
  func_936(*iParam2, 1, 1);
  if (func_937(*iParam2, 1))
  {
    return 1;
  }
  return -1;
}