// main.ysc @ L138291
void func_1543(int iParam0)
{
  int iVar0;
  
  iVar0 = iParam0;
  if ((iVar0 < 0 || iVar0 >= 263) || iParam0 == 263)
  {
    return;
  }
  if (HUD::DOES_BLIP_EXIST(Global_31724[iVar0 /*23*/].f_19))
  {
    MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(true);
    HUD::REMOVE_BLIP(&(Global_31724[iVar0 /*23*/].f_19));
    MISC::SET_THIS_SCRIPT_CAN_REMOVE_BLIPS_CREATED_BY_ANY_SCRIPT(false);
  }
}