// fm_race_creator.ysc @ L476751
void func_8084(var uParam0)
{
  if (HUD::DOES_BLIP_EXIST(*uParam0))
  {
    HUD::SET_BLIP_FADE(*uParam0, 255, 0);
    HUD::SET_BLIP_ALPHA(*uParam0, 255);
  }
}