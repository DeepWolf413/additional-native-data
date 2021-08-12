// am_crate_drop.ysc @ L12943
void func_183(int iParam0)
{
  if (HUD::DOES_BLIP_EXIST(iLocal_400[iParam0]))
  {
    if (func_185() || func_184())
    {
      HUD::SET_BLIP_DISPLAY(iLocal_400[iParam0], 0);
    }
    else
    {
      HUD::SET_BLIP_DISPLAY(iLocal_400[iParam0], 4);
    }
  }
  else
  {
    iLocal_400[iParam0] = HUD::ADD_BLIP_FOR_RADIUS(Local_77.f_2.f_68[iParam0 /*104*/].f_1, 200f);
    HUD::SET_BLIP_COLOUR(iLocal_400[iParam0], 2);
    HUD::SET_BLIP_ALPHA(iLocal_400[iParam0], 220);
    HUD::SHOW_HEIGHT_ON_BLIP(iLocal_400[iParam0], false);
    HUD::SET_BLIP_NAME_FROM_TEXT_FILE(iLocal_400[iParam0], "ACD_BLIPR");
    if (func_185())
    {
      HUD::SET_BLIP_DISPLAY(iLocal_400[iParam0], 0);
    }
  }
}