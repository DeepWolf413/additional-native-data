// tennis.ysc @ L19222
void func_440(int iParam0, bool bParam1)
{
  int iVar0;
  bool bVar1;
  int iVar2;
  
  if (ENTITY::DOES_ENTITY_EXIST(iParam0) && !PED::IS_PED_INJURED(iParam0))
  {
    iVar0 = func_929(iParam0);
    if (iVar0 == 145)
    {
      iVar0 = func_441(iParam0);
    }
    iVar2 = PLAYER::PLAYER_PED_ID();
    if (((iVar0 == 0 || iVar0 == 1) || iVar0 == 2) || iParam0 == iVar2)
    {
      bVar1 = false;
    }
    else if (PED::IS_PED_MALE(iParam0) && iVar0 != 14)
    {
      bVar1 = false;
    }
    else
    {
      bVar1 = true;
    }
    MISC::ENABLE_TENNIS_MODE(iParam0, bParam1, bVar1);
  }
}