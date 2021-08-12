// golf.ysc @ L120047
void func_1208(var uParam0, var uParam1)
{
  int iVar0;
  bool bVar1;
  int iVar2;
  
  iVar0 = func_531(uParam0);
  bVar1 = func_901(uParam1, uParam0, 1);
  iVar2 = iVar0 + 1;
  HUD::SET_MINIMAP_GOLF_COURSE(iVar2);
  HUD::TOGGLE_STEALTH_RADAR(false);
  if (HUD::DOES_BLIP_EXIST(uParam1->f_56))
  {
    HUD::REMOVE_BLIP(&(uParam1->f_56));
  }
  uParam1->f_56 = func_1215(func_539(uParam1, iVar0), 0);
  HUD::SET_BLIP_SPRITE(uParam1->f_56, 358);
  func_1209(iVar0, bVar1);
  HUD::SET_RADAR_ZOOM(SYSTEM::CEIL((1100f * fLocal_464)));
  HUD::LOCK_MINIMAP_POSITION(fLocal_462, fLocal_463);
  HUD::LOCK_MINIMAP_ANGLE(iLocal_465);
}