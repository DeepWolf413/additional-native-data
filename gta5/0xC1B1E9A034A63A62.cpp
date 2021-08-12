// agency_heist2.ysc @ L776
void func_2(int iParam0)
{
  iLocal_247 = iParam0;
  if (HUD::DOES_BLIP_EXIST(iLocal_78))
  {
    HUD::REMOVE_BLIP(&iLocal_78);
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_84))
  {
    HUD::REMOVE_BLIP(&iLocal_84);
  }
  iLocal_197 = 0;
  SYSTEM::SETTIMERA(0);
}