// am_casino_peds.ysc @ L221666
int func_2228(struct<3> Param0)
{
  int iVar0;
  int iVar1;
  var uVar2[15];
  int iVar18;
  
  iVar0 = func_2086();
  if (ENTITY::DOES_ENTITY_EXIST(iVar0) && !ENTITY::IS_ENTITY_DEAD(iVar0, false))
  {
    if (!PED::IS_PED_IN_ANY_VEHICLE(PLAYER::PLAYER_PED_ID(), false))
    {
      iVar18 = PED::GET_PED_NEARBY_VEHICLES(PLAYER::PLAYER_PED_ID(), &uVar2);
      iVar1 = 0;
      while (iVar1 < iVar18)
      {
        if (ENTITY::DOES_ENTITY_EXIST(uVar2[iVar1]) && ENTITY::IS_ENTITY_A_VEHICLE(uVar2[iVar1]))
        {
          if (!ENTITY::IS_ENTITY_DEAD(uVar2[iVar1], false) && !func_2085(uVar2[iVar1], 1))
          {
            if (func_2229(uVar2[iVar1], Param0, 1) < 2.5f)
            {
              return 1;
            }
          }
        }
        iVar1++;
      }
    }
  }
  return 0;
}