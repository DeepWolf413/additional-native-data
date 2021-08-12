// beat_bandito_execution.ysc @ L15701
void func_504(int iParam0, bool bParam1)
{
  if (func_62(iParam0, 0, 1))
  {
    if (bParam1)
    {
      WEAPON::SET_CURRENT_PED_WEAPON(iParam0, joaat("WEAPON_UNARMED"), false, 0, false, false);
      TASK::TASK_CONFRONT(iParam0, Global_35, 3);
    }
    else
    {
      TASK::TASK_CONFRONT(iParam0, Global_35, 2);
      PLAYER::_0xCBB54CC7FFFFAB86(PLAYER::PLAYER_ID(), iParam0, 0, 0);
    }
  }
}