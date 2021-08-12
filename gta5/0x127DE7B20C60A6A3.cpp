// am_hunt_the_beast.ysc @ L111309
void func_757(int iParam0)
{
  int iVar0;
  
  iVar0 = iParam0;
  if (HUD::DOES_BLIP_EXIST(Global_2416162[iVar0]))
  {
    if (func_758(iParam0))
    {
      HUD::BEGIN_TEXT_COMMAND_SET_BLIP_NAME("CUSPLNM");
      if (Global_2416162.f_1447[iParam0])
      {
        HUD::ADD_TEXT_COMPONENT_SUBSTRING_PLAYER_NAME(&(Global_2416162.f_1318[iVar0 /*4*/]));
      }
      else
      {
        HUD::ADD_TEXT_COMPONENT_SUBSTRING_TEXT_LABEL(&(Global_2416162.f_1318[iVar0 /*4*/]));
      }
      HUD::END_TEXT_COMMAND_SET_BLIP_NAME(Global_2416162[iVar0]);
    }
    else
    {
      HUD::SET_BLIP_NAME_TO_PLAYER_NAME(Global_2416162[iVar0], iParam0);
    }
  }
}