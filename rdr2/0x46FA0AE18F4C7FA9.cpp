// abigail2_1.ysc @ L71467
bool func_2062(char[4] cParam0, int iParam1, int iParam2)
{
  int iVar0;

  if (!ENTITY::DOES_ENTITY_EXIST(iParam1))
  {
    return false;
  }
  iVar0 = 0;
  while (iVar0 < cParam0->f_13145)
  {
    if (func_246(&(cParam0->f_5423[iVar0 /*65*/])))
    {
      if (((cParam0->f_5423[iVar0 /*65*/].f_9 == 40 && ENTITY::IS_ENTITY_A_PED(iParam1)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(iParam1) == PLAYER::_0x46FA0AE18F4C7FA9(PLAYER::GET_PLAYER_INDEX())) && cParam0->f_5423[iVar0 /*65*/] != iParam1)
      {
        *iParam2 = iVar0;
        return (((1 && !func_1365(iParam1)) && cParam0->f_5423[iVar0 /*65*/].f_9 == func_2064(iParam1)) && cParam0->f_5423[iVar0 /*65*/] != iParam1);
        *iParam2 = iVar0;
        return true;
      }
    }
    iVar0++;
  }
  return false;
}