// abigail2_1.ysc @ L68032
void func_1907(char[4] cParam0, var uParam1, int iParam2)
{
  struct<2> Var0;
  struct<8> Var6;

  if (func_121(cParam0, func_33(cParam0), 1))
  {
    return;
  }
  if (func_2240(uParam1, 16))
  {
    if (SCRIPTS::GET_EVENT_DATA(0, iParam2, &Var0, 6))
    {
      if (((((ENTITY::DOES_ENTITY_EXIST(*uParam1) && ENTITY::DOES_ENTITY_EXIST(Var0.f_1)) && (Var0.f_1 == *uParam1 || (ENTITY::DOES_ENTITY_EXIST(uParam1->f_1) && Var0.f_1 == uParam1->f_1))) && ENTITY::IS_ENTITY_A_PED(Var0)) && ENTITY::GET_PED_INDEX_FROM_ENTITY_INDEX(Var0) == Global_35) && (func_2254(uParam1) || !func_121(cParam0, func_33(cParam0), 1)))
      {
        if (uParam1->f_9 == 14)
        {
          func_1(cParam0, 64);
        }
        Var6 = { func_2257(uParam1->f_9, uParam1->f_4) };
        if (Var0.f_1 == uParam1->f_1 && !ENTITY::IS_ENTITY_A_VEHICLE(uParam1->f_1))
        {
          Var6 = { func_2258(uParam1->f_9, uParam1->f_4) };
        }
        func_1446(cParam0, Var6, 1, 0);
      }
    }
  }
}