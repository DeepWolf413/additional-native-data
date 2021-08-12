// abigail2_1.ysc @ L67967
void func_1905(var uParam0)
{
  int iVar0;
  bool bVar1;

  iVar0 = 0;
  while (iVar0 < 5)
  {
    if (uParam0->f_12[iVar0 /*2*/] != 0)
    {
      if (MISC::GET_GAME_TIMER() > (uParam0->f_12[iVar0 /*2*/].f_1 + func_2248(uParam0, uParam0->f_12[iVar0 /*2*/])))
      {
        if (uParam0->f_12[iVar0 /*2*/] == 8)
        {
          bVar1 = true;
        }
        uParam0->f_12[iVar0 /*2*/].f_1 = 0;
        uParam0->f_12[iVar0 /*2*/] = 0;
      }
    }
    iVar0++;
  }
  if ((bVar1 && ENTITY::IS_ENTITY_A_PED(*uParam0)) && func_2249(uParam0, 8) <= 0)
  {
    PED::_0x92A1B55A59720395(ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(*uParam0), 128);
  }
}