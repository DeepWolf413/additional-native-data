// fm_capture_creator.ysc @ L289807
void func_3310(int* iParam0, struct<3> Param1, int iParam4, char* sParam5, float fParam6, bool bParam7, bool bParam8, int iParam9)
{
  if (HUD::DOES_BLIP_EXIST(*iParam0))
  {
    HUD::REMOVE_BLIP(iParam0);
  }
  *iParam0 = HUD::ADD_BLIP_FOR_COORD(Param1);
  if (iParam9 != -1)
  {
    HUD::SET_BLIP_SPRITE(*iParam0, iParam9);
  }
  func_1273(iParam0, iParam4);
  HUD::SET_BLIP_SCALE(*iParam0, fParam6);
  HUD::_SET_BLIP_SHRINK(*iParam0, true);
  if (bParam7)
  {
    HUD::SET_BLIP_PRIORITY(*iParam0, 6);
  }
  else
  {
    HUD::SET_BLIP_PRIORITY(*iParam0, 5);
  }
  HUD::SHOW_HEIGHT_ON_BLIP(*iParam0, false);
  if (bParam8)
  {
  }
  HUD::SET_BLIP_SHOW_CONE(*iParam0, bParam8, 11);
  if (!MISC::IS_STRING_NULL_OR_EMPTY(sParam5))
  {
    HUD::SET_BLIP_NAME_FROM_TEXT_FILE(*iParam0, sParam5);
  }
}