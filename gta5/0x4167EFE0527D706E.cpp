// pausemenu_map.ysc @ L9783
void func_265(int iParam0)
{
  if (HUD::IS_HOVERING_OVER_MISSION_CREATOR_BLIP())
  {
    if (HUD::DOES_BLIP_EXIST(iParam0))
    {
      if (HUD::GET_BLIP_SPRITE(iParam0) == 490)
      {
        Global_1574657 = 1;
      }
    }
  }
  else
  {
    Global_1574657 = 0;
  }
}