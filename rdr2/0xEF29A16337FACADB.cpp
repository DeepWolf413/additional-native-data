// bjack_sp.ysc @ L8490
bool func_270(var uParam0, int iParam1, int iParam2, var uParam3, var uParam4)
{
  int iVar0;

  *uParam3 = 0;
  *uParam4 = -1;
  if (uParam0->f_9 == iParam1)
  {
    *uParam3 = PLAYER::GET_PLAYER_PED(iParam2);
  }
  else if (iParam2 != 255 && !PLAYER::IS_PLAYER_DEAD(iParam2))
  {
    *uParam3 = PED::CLONE_PED(PLAYER::GET_PLAYER_PED(iParam2), 0f, false, false);
  }
  else
  {
    iVar0 = func_92(uParam0->f_3497.f_38, uParam0->f_3497.f_41, -1);
    if (iVar0 != 0)
    {
      *uParam3 = func_713(iVar0, uParam0->f_1724, 0f, 0, 0, 0, 1, 1, 1, 0, 0, 0, 0);
      if (ENTITY::DOES_ENTITY_EXIST(*uParam3))
      {
        *uParam4 = func_715(0, func_714(&(uParam0->f_1724)));
        func_716(*uParam3, 0, uParam0->f_3497.f_41, *uParam4);
      }
    }
  }
  if (PED::IS_PED_INJURED(*uParam3))
  {
    return false;
  }
  return true;
}