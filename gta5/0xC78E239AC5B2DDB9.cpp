// fmmc_launcher.ysc @ L543859
void func_8453(var uParam0)
{
  int iVar0;
  int iVar1;
  
  ENTITY::SET_ENTITY_VISIBLE(uParam0->f_488, true, false);
  ENTITY::SET_ENTITY_VISIBLE(Global_2450309[func_6694() /*13*/], true, false);
  if (func_5024(uParam0, &iVar0))
  {
    ENTITY::SET_ENTITY_VISIBLE(Global_2450309[iVar0 /*13*/], true, false);
  }
  HUD::PAUSE_MENU_SET_BUSY_SPINNER(false, 1, 0);
  iVar1 = ENTITY::GET_ENTITY_MODEL(uParam0->f_488);
  if (iVar1 != 0)
  {
    if ((VEHICLE::IS_THIS_MODEL_A_HELI(iVar1) || VEHICLE::IS_THIS_MODEL_A_PLANE(bVar1)) && bVar1 != joaat("thruster"))
    {
      func_4908(48);
      if (!ENTITY::IS_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID()))
      {
        ENTITY::SET_ENTITY_VISIBLE(PLAYER::PLAYER_PED_ID(), true, false);
      }
    }
  }
}