// fm_capture_creator.ysc @ L291380
void func_3333(var uParam0, int iParam1, bool bParam2)
{
  int iVar0;
  int iVar1;
  int iVar2;
  var uVar3;
  
  if (!func_1749())
  {
    return;
  }
  if (func_673() || !func_455())
  {
    return;
  }
  if (iParam1 != 146)
  {
    HUD::GET_HUD_COLOUR(iParam1, &iVar0, &iVar1, &iVar2, &uVar3);
    HUD::SET_BLIP_SECONDARY_COLOUR(*uParam0, iVar0, iVar1, iVar2);
    HUD::SHOW_OUTLINE_INDICATOR_ON_BLIP(*uParam0, true);
    HUD::SET_BLIP_ALPHA(*uParam0, 200);
  }
  if (bParam2)
  {
    HUD::SHOW_TICK_ON_BLIP(*uParam0, true);
  }
}