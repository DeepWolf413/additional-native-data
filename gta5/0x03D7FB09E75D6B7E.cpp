// abigail2.ysc @ L35832
void func_265()
{
  if (!HUD::DOES_BLIP_EXIST(iLocal_170) && func_464(iLocal_169))
  {
    iLocal_170 = func_266(iLocal_169, 1, 0, 5);
  }
  if (HUD::DOES_BLIP_EXIST(iLocal_170) && HUD::GET_BLIP_COLOUR(iLocal_170) != 1)
  {
    HUD::SET_BLIP_AS_FRIENDLY(iLocal_170, false);
    HUD::SET_BLIP_COLOUR(iLocal_170, 1);
  }
}