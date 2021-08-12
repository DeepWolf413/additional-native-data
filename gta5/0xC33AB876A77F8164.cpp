// docks_prep2b.ysc @ L16748
int func_268()
{
  int iVar0;
  
  if (!PED::IS_PED_INJURED(PLAYER::PLAYER_PED_ID()))
  {
    PED::GET_CLOSEST_PED(ENTITY::GET_ENTITY_COORDS(PLAYER::PLAYER_PED_ID(), true), 30f, false, true, &iVar0, false, true, -1);
  }
  iLocal_179 = 0;
  while (iLocal_179 <= 9)
  {
    if (ENTITY::DOES_ENTITY_EXIST(iLocal_33[iLocal_179]))
    {
      if (!PED::IS_PED_INJURED(iLocal_33[iLocal_179]))
      {
        if (iVar0 == iLocal_33[iLocal_179])
        {
          return iLocal_33[iLocal_179];
        }
      }
    }
    iLocal_179++;
  }
  return 0;
}