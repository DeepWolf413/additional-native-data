// fm_bj_race_controler.ysc @ L289936
void func_4019(var uParam0, int iParam1, int iParam2, int iParam3)
{
  if (HUD::DOES_BLIP_EXIST(*uParam0))
  {
    HUD::SET_BLIP_SECONDARY_COLOUR(*uParam0, iParam1, iParam2, iParam3);
  }
}